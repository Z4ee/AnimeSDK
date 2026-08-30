#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleEffectController; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleParticleEffect; }
namespace System { class Action; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B940F00)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__DISPLAYCLASS7_0__PLAYPARTICLEEFFECTBYPATH_B__0_OFFSET UNITYSDK_OFFSET(0x1B941840)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleEffectController___c__DisplayClass7_0_TypeDefinitionIndex = 75926;

	class ChenLingBattleEffectController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleParticleEffect* effect; // 0x10
		::RPG::Client::ChenLingBattle::ChenLingBattleEffectController* __4__this; // 0x18
		::System::Action* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayParticleEffectByPath_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEEFFECTCONTROLLER___C__DISPLAYCLASS7_0__PLAYPARTICLEEFFECTBYPATH_B__0_OFFSET))(this);
		}
	};
}
