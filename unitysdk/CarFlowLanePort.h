#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CarFlowRoad;
class Lane;

#define CARFLOWLANEPORT_METHOD_1_48FEF66A58B92F6B_OFFSET UNITYSDK_OFFSET(0x1A868380)
#define CARFLOWLANEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A868900)

inline static constexpr unsigned int CarFlowLanePort_TypeDefinitionIndex = 47531;

class CarFlowLanePort : public ::System::Object
{
public:
	::CarFlowRoad* Road; // 0x10
	::System::Int32 LaneIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWLANEPORT__CTOR_OFFSET))(this);
	}

	::Lane* Method_1_48FEF66A58B92F6B()
	{
		return ((::Lane*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWLANEPORT_METHOD_1_48FEF66A58B92F6B_OFFSET))(this);
	}
};
