#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }
namespace RPG::Client { class AdventureModule; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS99_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5D4160)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS99_0___ONPLAYERLOCKNEWTARGET_B__0_OFFSET UNITYSDK_OFFSET(0xC5D56B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager___c__DisplayClass99_0_TypeDefinitionIndex = 60490;

	class AdventureAudioManager___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* lockTarget; // 0x10
		::RPG::Client::AdventureModule* advModule; // 0x18
		::RPG::Client::AdventureAudioManager* __4__this; // 0x20
		::RPG::GameCore::AdventureCharacterDataComponent* characterData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS99_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnPlayerLockNewTarget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS99_0___ONPLAYERLOCKNEWTARGET_B__0_OFFSET))(this);
		}
	};
}
