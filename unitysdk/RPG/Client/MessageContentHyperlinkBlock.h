#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6A3850)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD6A3920)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD6A37F0)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_URL_OFFSET UNITYSDK_OFFSET(0xD6A3930)
#define RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A3840)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentHyperlinkBlock_TypeDefinitionIndex = 63305;

	class MessageContentHyperlinkBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _Url_k__BackingField; // 0x18
		::System::String* _Title_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTHYPERLINKBLOCK_EQUALS_OFFSET))(this, a1);
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
