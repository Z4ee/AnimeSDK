#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class MessageContentGotoBlock_IGotoCommand; }
namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA1D8A0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AA1D970)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x1AA1DAC0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA1D5E0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENAVATARGUIDE_OFFSET UNITYSDK_OFFSET(0x1AA1D7E0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENGAMETOOL_OFFSET UNITYSDK_OFFSET(0x1AA1D630)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_OPENHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1AA1D700)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x1AA1DAD0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA1D6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_TypeDefinitionIndex = 60453;

	class MessageContentGotoBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _CommandName_k__BackingField; // 0x18
		::RPG::Client::MessageContentGotoBlock_IGotoCommand* _Command; // 0x20

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
