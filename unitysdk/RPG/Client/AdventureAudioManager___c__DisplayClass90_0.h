#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventureAudioManager; }

#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5CCC70)
#define RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS90_0___ONOPENCHEST_B__0_OFFSET UNITYSDK_OFFSET(0xC5CF1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureAudioManager___c__DisplayClass90_0_TypeDefinitionIndex = 60489;

	class AdventureAudioManager___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventureAudioManager* __4__this; // 0x10
		::System::Boolean isPreciousChest; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnOpenChest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREAUDIOMANAGER___C__DISPLAYCLASS90_0___ONOPENCHEST_B__0_OFFSET))(this);
		}
	};
}
