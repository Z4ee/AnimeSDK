#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_METHOD_3_2AAE86450F02CCD2_OFFSET UNITYSDK_OFFSET(0x1707AA30)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_METHOD_3_346B57EC7EBBC1CC_OFFSET UNITYSDK_OFFSET(0x1707AA90)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1707AA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_PlayBatchAnimation_TypeDefinitionIndex = 14433;

	class ChenLingBattleAbility_PlayBatchAnimation : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::String* AnimationName; // 0x10
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x18
		::Il2CppArray<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* AnimEvents; // 0x20
		::System::Boolean IsAffectByAttackSpeed; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AAE86450F02CCD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_METHOD_3_2AAE86450F02CCD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_346B57EC7EBBC1CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_PLAYBATCHANIMATION_METHOD_3_346B57EC7EBBC1CC_OFFSET))(a1, a2);
		}
	};
}
