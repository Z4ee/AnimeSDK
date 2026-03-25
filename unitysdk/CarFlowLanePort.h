#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CarFlowRoad;
class Lane;

#define CARFLOWLANEPORT_METHOD_1_28C1935D38F4FEB4_OFFSET UNITYSDK_OFFSET(0xA6D9D50)
#define CARFLOWLANEPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xA6DA2E0)

inline static constexpr unsigned int CarFlowLanePort_TypeDefinitionIndex = 37999;

class CarFlowLanePort : public ::System::Object
{
public:
	::CarFlowRoad* Road; // 0x10
	::System::Int32 LaneIndex; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWLANEPORT__CTOR_OFFSET))(this);
	}

	::Lane* Method_1_28C1935D38F4FEB4()
	{
		return ((::Lane*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWLANEPORT_METHOD_1_28C1935D38F4FEB4_OFFSET))(this);
	}
};
