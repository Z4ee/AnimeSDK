#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_3_7852842A615610D3_OFFSET UNITYSDK_OFFSET(0x171ECE30)
#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_3_A45A9AF08395452F_OFFSET UNITYSDK_OFFSET(0x171E63D0)
#define RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x171E63B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimClientFinishMissionAction_TypeDefinitionIndex = 17237;

	class FiveDimClientFinishMissionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 SubmissionID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7852842A615610D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClientFinishMissionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_3_7852842A615610D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A45A9AF08395452F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCLIENTFINISHMISSIONACTION_METHOD_3_A45A9AF08395452F_OFFSET))(a1, a2);
		}
	};
}
