#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS78_0__COMMONPROCESSADVENTUREHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCCB3FC0)
#define RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB3FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c__DisplayClass78_0_TypeDefinitionIndex = 50851;

	class AbilityStatic___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::RPG::MVector3 vDefender2Attacker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Void _CommonProcessAdventureHitEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS78_0__COMMONPROCESSADVENTUREHITEFFECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
