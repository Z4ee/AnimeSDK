#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointConditionOperator.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_METHOD_2_3E3F0CAE554016C5_OFFSET UNITYSDK_OFFSET(0x16F877E0)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION_METHOD_2_FC1B6B2B93097560_OFFSET UNITYSDK_OFFSET(0x16F87B20)
#define RPG_GAMECORE_ASSISTWAYPOINTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16F87B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointCondition_TypeDefinitionIndex = 17408;

	class AssistWayPointCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AssistWayPointConditionOperator Operator; // 0x10
		::System::Boolean Inverse; // 0x14
		::System::Boolean ValidateInBacktrace; // 0x15

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3E3F0CAE554016C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_METHOD_2_3E3F0CAE554016C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_FC1B6B2B93097560(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTCONDITION_METHOD_2_FC1B6B2B93097560_OFFSET))(a1, a2);
		}
	};
}
