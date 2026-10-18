#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_4_2EC7A2BFE6E3E546_OFFSET UNITYSDK_OFFSET(0x1D688330)
#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_4_52FF181B369D957B_OFFSET UNITYSDK_OFFSET(0x1D688280)
#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D688320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimClientFinishMissionAction_TypeDefinitionIndex = 18779;

	class FiveDimClientFinishMissionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 SubmissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_52FF181B369D957B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClientFinishMissionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_4_52FF181B369D957B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2EC7A2BFE6E3E546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_4_2EC7A2BFE6E3E546_OFFSET))(a1, a2);
		}
	};
}
