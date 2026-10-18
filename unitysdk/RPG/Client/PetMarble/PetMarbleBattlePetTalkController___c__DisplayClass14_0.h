#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PetMarble { class PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAD4140)
#define RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER___C__DISPLAYCLASS14_0___GETORCREATETALKCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xDAD4150)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleBattlePetTalkController___c__DisplayClass14_0_TypeDefinitionIndex = 74705;

	class PetMarbleBattlePetTalkController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 talkID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetOrCreateTalkConfig_b__0(::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleBattlePetTalkController_PetMarbleBattlePetTalkConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEBATTLEPETTALKCONTROLLER___C__DISPLAYCLASS14_0___GETORCREATETALKCONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
