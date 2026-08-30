#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GAMETOOLGOTOCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD6A30D0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GAMETOOLGOTOCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A2BE0)
#define RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GAMETOOLGOTOCOMMAND__ISAVATARRELEASED_OFFSET UNITYSDK_OFFSET(0xD6A33A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentGotoBlock_GameToolGotoCommand_TypeDefinitionIndex = 63308;

	class MessageContentGotoBlock_GameToolGotoCommand : public ::System::Object
	{
	public:
		// static const ::System::String* _GAME_TOOL_URL_KEY; // 0x0
		::System::UInt32 _AvatarID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GAMETOOLGOTOCOMMAND__CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GAMETOOLGOTOCOMMAND_EXECUTE_OFFSET))(this);
		}

		::System::Boolean _IsAvatarReleased(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTGOTOBLOCK_GAMETOOLGOTOCOMMAND__ISAVATARRELEASED_OFFSET))(this, a1);
		}
	};
}
