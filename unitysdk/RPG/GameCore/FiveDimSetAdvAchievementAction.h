#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_4_A15746C0931491EC_OFFSET UNITYSDK_OFFSET(0x1D6AA7B0)
#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_4_AB35966F04BBE1D1_OFFSET UNITYSDK_OFFSET(0x1D6AA700)
#define RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AA7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAdvAchievementAction_TypeDefinitionIndex = 18792;

	class FiveDimSetAdvAchievementAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AchievementID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AB35966F04BBE1D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_4_AB35966F04BBE1D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A15746C0931491EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetAdvAchievementAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetAdvAchievementAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETADVACHIEVEMENTACTION_METHOD_4_A15746C0931491EC_OFFSET))(a1, a2);
		}
	};
}
