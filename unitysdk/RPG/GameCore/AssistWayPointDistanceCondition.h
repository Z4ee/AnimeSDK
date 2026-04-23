#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_METHOD_3_64D8111335B81113_OFFSET UNITYSDK_OFFSET(0x186AB070)
#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_METHOD_3_8B282298D437722E_OFFSET UNITYSDK_OFFSET(0x186AAA90)
#define RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x186AB060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointDistanceCondition_TypeDefinitionIndex = 18017;

	class AssistWayPointDistanceCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::System::Boolean UseOverrideRangeMin; // 0x18
		::System::Int32 OverrideRangeMin; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B282298D437722E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointDistanceCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointDistanceCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_METHOD_3_8B282298D437722E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64D8111335B81113(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointDistanceCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointDistanceCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTDISTANCECONDITION_METHOD_3_64D8111335B81113_OFFSET))(a1, a2);
		}
	};
}
