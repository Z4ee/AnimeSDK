#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_METHOD_3_32B8CBA74CCEA448_OFFSET UNITYSDK_OFFSET(0x187E27D0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_METHOD_3_FE06219AC5FAD47C_OFFSET UNITYSDK_OFFSET(0x187E2700)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x187E27C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_AddDamageReduction_TypeDefinitionIndex = 14952;

	class ChenLingBattleEffect_AddDamageReduction : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Num; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE06219AC5FAD47C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_METHOD_3_FE06219AC5FAD47C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32B8CBA74CCEA448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_AddDamageReduction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_ADDDAMAGEREDUCTION_METHOD_3_32B8CBA74CCEA448_OFFSET))(a1, a2);
		}
	};
}
