#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CarFlowIntersection;
class CarFlowRoad;

#define CARFLOWROADMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC73C3B0)

inline static constexpr unsigned int CarFlowRoadMapInfo_TypeDefinitionIndex = 44426;

class CarFlowRoadMapInfo : public ::System::Object
{
public:
	::Il2CppArray<::CarFlowRoad*>* Roads; // 0x10
	::Il2CppArray<::CarFlowIntersection*>* Intersections; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWROADMAPINFO__CTOR_OFFSET))(this);
	}
};
