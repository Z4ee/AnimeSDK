#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIArcadeBasePlayChildWindowController; }
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class String; }

#define MOLEMOLE_MINIGAME_MINIGAMECONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x753030)
#define MOLEMOLE_MINIGAME_MINIGAMECONTEXT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x753040)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameContext_TypeDefinitionIndex = 44722;

	struct alignas(8) MiniGameContext
	{
		::System::String* ip; // 0x10
		::System::UInt16 port; // 0x18
		::System::String* token; // 0x20
		::System::Boolean useServer; // 0x28
		::System::UInt64 worldId; // 0x30
		::System::UInt64 playerUid; // 0x38
		::MoleMole::MiniGame::MiniGameWorldBase* miniGameWorld; // 0x40
		::MoleMole::UIArcadeBasePlayChildWindowController* UIArcadeBaseController; // 0x48

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMECONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMECONTEXT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
