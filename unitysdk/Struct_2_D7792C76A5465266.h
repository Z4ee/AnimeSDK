#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DFEB9A1A221CB8BE;
namespace MoleMole::Vehicle { class VehicleTestCameraMono; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_D7792C76A5465266_METHOD_2_77931BB776583BD4_OFFSET UNITYSDK_OFFSET(0x134BCCF0)
#define STRUCT_2_D7792C76A5465266__CTOR_OFFSET UNITYSDK_OFFSET(0x7B1560)

inline static constexpr unsigned int Struct_2_D7792C76A5465266_TypeDefinitionIndex = 43918;

struct alignas(8) Struct_2_D7792C76A5465266
{
	::Class_1_DFEB9A1A221CB8BE* Field_2_0; // 0x10
	::UnityEngine::Transform* Field_2_1; // 0x18
	::MoleMole::Vehicle::VehicleTestCameraMono* Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleTestCameraMono*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleTestCameraMono*&))((::PBYTE)hIl2Cpp + STRUCT_2_D7792C76A5465266__CTOR_OFFSET))(this, a1);
	}

	/*
	static ::PipelineCamera::WorldBasicCameraData Method_2_77931BB776583BD4(::Struct_2_D7792C76A5465266& a1)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::Struct_2_D7792C76A5465266&))((::PBYTE)hIl2Cpp + STRUCT_2_D7792C76A5465266_METHOD_2_77931BB776583BD4_OFFSET))(a1);
	}
	*/
};
