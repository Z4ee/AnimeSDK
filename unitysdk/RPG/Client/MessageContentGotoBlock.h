#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class MessageContentGotoBlock_IGotoCommand; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6A2DA0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD6A2E70)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xD6A2FC0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD6A2AE0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET UNITYSDK_OFFSET(0xD6A2CE0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET UNITYSDK_OFFSET(0xD6A2B30)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET UNITYSDK_OFFSET(0xD6A2C00)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xD6A2FD0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A2BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_TypeDefinitionIndex = 63306;

	class MessageContentGotoBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::MessageContentGotoBlock_IGotoCommand* _Command; // 0x18
		::System::String* _CommandName_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::MessageContentGotoBlock_IGotoCommand* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentGotoBlock_IGotoCommand*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET))(this);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenGameTool(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET))(a1);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenHandBook(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET))(a1);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenAvatarGuide(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET))(a1);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET))(this);
		}

		::System::String* get_CommandName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET))(this);
		}

		::System::Void set_CommandName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET))(this, a1);
		}
	};
}
