#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_3_68A378A758F5BEE4_OFFSET UNITYSDK_OFFSET(0x1D877460)
#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_3_EC4A54E1C54708A9_OFFSET UNITYSDK_OFFSET(0x1D877510)
#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D877500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAdvAchievementAction_TypeDefinitionIndex = 18582;

	class FiveDimSetAdvAchievementAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AchievementID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_68A378A758F5BEE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_3_68A378A758F5BEE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC4A54E1C54708A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_3_EC4A54E1C54708A9_OFFSET))(a1, a2);
		}
	};
}
