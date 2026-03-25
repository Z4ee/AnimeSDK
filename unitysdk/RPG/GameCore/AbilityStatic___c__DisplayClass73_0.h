#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS73_0__COMMONPROCESSADVENTUREHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA811130)
#define RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7DF240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityStatic___c__DisplayClass73_0_TypeDefinitionIndex = 43487;

	class AbilityStatic___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::RPG::MVector3 vDefender2Attacker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _CommonProcessAdventureHitEffect_b__0(::RPG::Client::MonoEffect* pEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSTATIC___C__DISPLAYCLASS73_0__COMMONPROCESSADVENTUREHITEFFECT_B__0_OFFSET))(this, pEffect, extraParams);
		}
	};
}
