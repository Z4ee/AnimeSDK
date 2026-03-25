#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_METHOD_3_1125DEA31F2C2880_OFFSET UNITYSDK_OFFSET(0x1707DCA0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_METHOD_3_F83AC5BAA072DE8C_OFFSET UNITYSDK_OFFSET(0x1707DC40)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1707DC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_ApplyDamage_TypeDefinitionIndex = 14477;

	class ChenLingBattleEffect_ApplyDamage : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Damage; // 0x10
		::RPG::GameCore::ChenLingDamageType DamageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F83AC5BAA072DE8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_METHOD_3_F83AC5BAA072DE8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1125DEA31F2C2880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_ApplyDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_APPLYDAMAGE_METHOD_3_1125DEA31F2C2880_OFFSET))(a1, a2);
		}
	};
}
