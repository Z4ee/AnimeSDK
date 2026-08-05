#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DFEB9A1A221CB8BE;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_9057FE9832B9A687_METHOD_2_ACBEDEDB028023CD_OFFSET UNITYSDK_OFFSET(0x113E7640)
#define STRUCT_2_9057FE9832B9A687__CTOR_OFFSET UNITYSDK_OFFSET(0x72F2D0)

inline static constexpr unsigned int Struct_2_9057FE9832B9A687_TypeDefinitionIndex = 86496;

struct alignas(8) Struct_2_9057FE9832B9A687
{
	::Class_1_DFEB9A1A221CB8BE* Field_2_1; // 0x10
	::UnityEngine::Transform* Field_2_0; // 0x18
	::MoleMole::Vehicle::VehicleTestCameraMono* Field_2_7; // 0x20
	::System::Single Field_2_6; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + STRUCT_2_9057FE9832B9A687__CTOR_OFFSET))(this, a1);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_ACBEDEDB028023CD(::Struct_2_9057FE9832B9A687& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_9057FE9832B9A687&))((::PBYTE)hIl2Cpp + STRUCT_2_9057FE9832B9A687_METHOD_2_ACBEDEDB028023CD_OFFSET))(a1);
	}
	*/
};
