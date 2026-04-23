#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_BYCONTENT_OFFSET UNITYSDK_OFFSET(0xA88BF00)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_BYTEXTID_OFFSET UNITYSDK_OFFSET(0xA88BF70)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88BFE0)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xA88C0A0)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88BEF0)
#define RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88BF60)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentPlainTextBlock_TypeDefinitionIndex = 58249;

	class MessageContentPlainTextBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _Content; // 0x18
		::RPG::Client::TextID _TextID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_TYPE_OFFSET))(this);
		}

		static ::RPG::Client::MessageContentPlainTextBlock* ByContent(::System::String* content)
		{
			return ((::RPG::Client::MessageContentPlainTextBlock*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_BYCONTENT_OFFSET))(content);
		}

		static ::RPG::Client::MessageContentPlainTextBlock* ByTextID(::RPG::Client::TextID textID)
		{
			return ((::RPG::Client::MessageContentPlainTextBlock*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_BYTEXTID_OFFSET))(textID);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTPLAINTEXTBLOCK_GET_CONTENT_OFFSET))(this);
		}
	};
}
