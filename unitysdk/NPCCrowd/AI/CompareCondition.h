#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/CompareConditionType.h"
#include "unitysdk/NPCCrowd/AI/CrowdConditionBase.h"
#include "unitysdk/NPCCrowd/AI/ParameterType.h"

#define NPCCROWD_AI_COMPARECONDITION_CHECKBOOL_OFFSET UNITYSDK_OFFSET(0xFF81A50)
#define NPCCROWD_AI_COMPARECONDITION_CHECKFLOAT_OFFSET UNITYSDK_OFFSET(0xFF81900)
#define NPCCROWD_AI_COMPARECONDITION_CHECKINT_OFFSET UNITYSDK_OFFSET(0xFF81AB0)
#define NPCCROWD_AI_COMPARECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xFF818F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int CompareCondition_TypeDefinitionIndex = 53470;

	class CompareCondition : public ::NPCCrowd::AI::CrowdConditionBase
	{
	public:
		::NPCCrowd::AI::ParameterType paramType; // 0x18
		::NPCCrowd::AI::CompareConditionType conditionType; // 0x19

		::System::Void _ctor(::NPCCrowd::AI::ParameterType paramType)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::ParameterType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_COMPARECONDITION__CTOR_OFFSET))(this, paramType);
		}

		static ::System::Boolean CheckFloat(::System::Single param, ::NPCCrowd::AI::CompareConditionType mode, ::System::Single threshold)
		{
			return ((::System::Boolean(*)(::System::Single, ::NPCCrowd::AI::CompareConditionType, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_COMPARECONDITION_CHECKFLOAT_OFFSET))(param, mode, threshold);
		}

		static ::System::Boolean CheckBool(::System::Boolean param, ::NPCCrowd::AI::CompareConditionType mode)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::NPCCrowd::AI::CompareConditionType))((::PBYTE)hIl2Cpp + NPCCROWD_AI_COMPARECONDITION_CHECKBOOL_OFFSET))(param, mode);
		}

		static ::System::Boolean CheckInt(::System::Int32 param, ::NPCCrowd::AI::CompareConditionType mode, ::System::Int32 threshold)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::AI::CompareConditionType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_COMPARECONDITION_CHECKINT_OFFSET))(param, mode, threshold);
		}
	};
}
