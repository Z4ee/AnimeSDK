#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AssistWayPointConditionMain; }
namespace RPG::GameCore { class AssistWayPointDistanceCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINT_METHOD_2_95F6BBC263B84930_OFFSET UNITYSDK_OFFSET(0x1947F520)
#define RPG_GAMECORE_ASSISTWAYPOINT_METHOD_2_C61DFDD2EB527E25_OFFSET UNITYSDK_OFFSET(0x1947EE00)
#define RPG_GAMECORE_ASSISTWAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1947F420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPoint_TypeDefinitionIndex = 18053;

	class AssistWayPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MissionWayPointType WayPointType; // 0x10
		::System::UInt32 WayPointGroupID; // 0x14
		::System::UInt32 WayPointEntityID; // 0x18
		::System::UInt32 WayPointLittleGameEntityID; // 0x1C
		::System::UInt32 SubmissionID; // 0x20
		::System::Boolean SkipWhenSubMissionFinish; // 0x24
		::System::Boolean UseDistance; // 0x25
		::RPG::GameCore::AssistWayPointDistanceCondition* DistanceCondition; // 0x28
		::System::Boolean CanBacktrace; // 0x30
		::RPG::GameCore::AssistWayPointConditionMain* FinishConditionMain; // 0x38
		::System::Boolean UsePropState; // 0x40
		::System::Boolean UsePropStateBacktrace; // 0x41
		::RPG::GameCore::PropState TargetPropState; // 0x44
		::System::Boolean UseLogicProp; // 0x48
		::System::UInt32 LogciWayPointGroupID; // 0x4C
		::System::UInt32 LogciWayPointEntityID; // 0x50
		::System::Boolean UseOverrideRangeMin; // 0x54
		::System::Int32 OverrideRangeMin; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C61DFDD2EB527E25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINT_METHOD_2_C61DFDD2EB527E25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_95F6BBC263B84930(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPoint*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINT_METHOD_2_95F6BBC263B84930_OFFSET))(a1, a2);
		}
	};
}
