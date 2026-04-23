#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88B150)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA88B220)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88B130)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_URL_OFFSET UNITYSDK_OFFSET(0xA88B230)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88B140)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentHyperlinkBlock_TypeDefinitionIndex = 58251;

	class MessageContentHyperlinkBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _Title_k__BackingField; // 0x18
		::System::String* _Url_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* title, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK__CTOR_OFFSET))(this, title, url);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_URL_OFFSET))(this);
		}
	};
}
