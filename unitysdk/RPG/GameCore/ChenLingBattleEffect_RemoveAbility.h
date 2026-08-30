#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleEffect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_METHOD_3_564890ED3A6396ED_OFFSET UNITYSDK_OFFSET(0x1CFA98E0)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_METHOD_3_A1B826E416E11908_OFFSET UNITYSDK_OFFSET(0x1CFA9980)
#define RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA9970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffect_RemoveAbility_TypeDefinitionIndex = 15613;

	class ChenLingBattleEffect_RemoveAbility : public ::RPG::GameCore::BaseChenLingBattleEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_564890ED3A6396ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_METHOD_3_564890ED3A6396ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A1B826E416E11908(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleEffect_RemoveAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEEFFECT_REMOVEABILITY_METHOD_3_A1B826E416E11908_OFFSET))(a1, a2);
		}
	};
}
