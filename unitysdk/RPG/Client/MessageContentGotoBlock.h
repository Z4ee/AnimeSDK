#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class MessageContentGotoBlock_IGotoCommand; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xA88A720)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA88A7F0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xA88A8F0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA88A4A0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET UNITYSDK_OFFSET(0xA88A660)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET UNITYSDK_OFFSET(0xA88A4B0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET UNITYSDK_OFFSET(0xA88A580)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0xA88A900)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA88A570)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_TypeDefinitionIndex = 58252;

	class MessageContentGotoBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::MessageContentGotoBlock_IGotoCommand* _Command; // 0x18
		::System::String* _CommandName_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::MessageContentGotoBlock_IGotoCommand* command, ::System::String* commandName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentGotoBlock_IGotoCommand*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET))(this, command, commandName);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET))(this);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenGameTool(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET))(avatarID);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenHandBook(::System::UInt32 farmType)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET))(farmType);
		}

		static ::RPG::Client::MessageContentGotoBlock* OpenAvatarGuide(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::MessageContentGotoBlock*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET))(avatarID);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET))(this, other);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET))(this);
		}

		::System::String* get_CommandName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET))(this);
		}

		::System::Void set_CommandName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET))(this, value);
		}
	};
}
