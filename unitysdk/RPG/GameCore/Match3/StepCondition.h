#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ConditionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_5_001A2879B22ED8CB_OFFSET UNITYSDK_OFFSET(0x1D264FA0)
#define RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_5_CA34EB9B8321EA41_OFFSET UNITYSDK_OFFSET(0x1D260960)
#define RPG_GAMECORE_MATCH3_STEPCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D260950)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StepCondition_TypeDefinitionIndex = 24603;

	class StepCondition : public ::RPG::GameCore::Match3::Match3ConditionBase
	{
	public:
		::System::UInt32 TargetStep; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_001A2879B22ED8CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_5_001A2879B22ED8CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CA34EB9B8321EA41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StepCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StepCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STEPCONDITION_METHOD_5_CA34EB9B8321EA41_OFFSET))(a1, a2);
		}
	};
}
