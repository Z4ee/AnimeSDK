#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CarFlowIntersectionRule;
class CarFlowRoad;

#define CARFLOWROADMAPPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16B2D2F0)

inline static constexpr unsigned int CarFlowRoadMapPosition_TypeDefinitionIndex = 45299;

class CarFlowRoadMapPosition : public ::System::Object
{
public:
	::System::Boolean IsOnRoad; // 0x10
	::CarFlowRoad* Road; // 0x18
	::CarFlowIntersectionRule* Intersection; // 0x20
	::System::Int32 LaneIndex; // 0x28
	::System::Single Distance; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROADMAPPOSITION__CTOR_OFFSET))(this);
	}
};
