#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_4_B313A43450F7231C_OFFSET UNITYSDK_OFFSET(0x1D6ACC60)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_4_D485FF1B88FCF119_OFFSET UNITYSDK_OFFSET(0x1D6ACB80)
#define RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ACC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerSkillUpgradeAction_TypeDefinitionIndex = 18753;

	class FiveDimSetPlayerSkillUpgradeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Upgraded; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D485FF1B88FCF119(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_4_D485FF1B88FCF119_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B313A43450F7231C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERSKILLUPGRADEACTION_METHOD_4_B313A43450F7231C_OFFSET))(a1, a2);
		}
	};
}
