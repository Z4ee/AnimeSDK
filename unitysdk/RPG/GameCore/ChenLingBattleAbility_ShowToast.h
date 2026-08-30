#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleTargetEvaluator; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_METHOD_3_0765325EB420E3F3_OFFSET UNITYSDK_OFFSET(0x1E008D30)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_METHOD_3_4EA4609A9E0E096F_OFFSET UNITYSDK_OFFSET(0x1E008CD0)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E008D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_ShowToast_TypeDefinitionIndex = 15564;

	class ChenLingBattleAbility_ShowToast : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleTargetEvaluator* EffectTargets; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Param; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EA4609A9E0E096F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowToast*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_ShowToast*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_METHOD_3_4EA4609A9E0E096F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0765325EB420E3F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowToast* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_ShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTOAST_METHOD_3_0765325EB420E3F3_OFFSET))(a1, a2);
		}
	};
}
