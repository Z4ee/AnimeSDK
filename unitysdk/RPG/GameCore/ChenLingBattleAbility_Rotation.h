#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ROTATION_METHOD_3_0A10AE0784FD4CCF_OFFSET UNITYSDK_OFFSET(0x1961D770)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ROTATION_METHOD_3_AA7B7733C5B32A6A_OFFSET UNITYSDK_OFFSET(0x1961D7D0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_ROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1961D7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_Rotation_TypeDefinitionIndex = 14975;

	class ChenLingBattleAbility_Rotation : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* Targets; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* Rotation; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Speed; // 0x20
		::Il2CppArray<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* Events; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A10AE0784FD4CCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Rotation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Rotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ROTATION_METHOD_3_0A10AE0784FD4CCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA7B7733C5B32A6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_Rotation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_Rotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_ROTATION_METHOD_3_AA7B7733C5B32A6A_OFFSET))(a1, a2);
		}
	};
}
