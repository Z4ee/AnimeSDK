#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DFEB9A1A221CB8BE;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_623FF5E40A505A0A_METHOD_2_46FFA9AC7F193643_OFFSET UNITYSDK_OFFSET(0x1415A5F0)
#define STRUCT_2_623FF5E40A505A0A__CTOR_OFFSET UNITYSDK_OFFSET(0x77B7F0)

inline static constexpr unsigned int Struct_2_623FF5E40A505A0A_TypeDefinitionIndex = 44866;

struct alignas(8) Struct_2_623FF5E40A505A0A
{
	::Class_1_DFEB9A1A221CB8BE* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18
	::MoleMole::Vehicle::VehicleTestCameraMono* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + STRUCT_2_623FF5E40A505A0A__CTOR_OFFSET))(this, a1);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_46FFA9AC7F193643(::Struct_2_623FF5E40A505A0A& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_623FF5E40A505A0A&))((::PBYTE)hIl2Cpp + STRUCT_2_623FF5E40A505A0A_METHOD_2_46FFA9AC7F193643_OFFSET))(a1);
	}
	*/
};
