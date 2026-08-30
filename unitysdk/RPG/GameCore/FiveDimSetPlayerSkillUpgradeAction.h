#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_3_A437919812A0D8A8_OFFSET UNITYSDK_OFFSET(0x1D8798E0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_3_E5E40830D9662125_OFFSET UNITYSDK_OFFSET(0x1D8799C0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8799B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerSkillUpgradeAction_TypeDefinitionIndex = 18543;

	class FiveDimSetPlayerSkillUpgradeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Upgraded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A437919812A0D8A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_3_A437919812A0D8A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5E40830D9662125(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_3_E5E40830D9662125_OFFSET))(a1, a2);
		}
	};
}
