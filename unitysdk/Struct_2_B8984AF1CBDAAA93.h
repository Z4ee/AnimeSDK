#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/Struct_2_4E049E2562254C08.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B8984AF1CBDAAA93__CTOR_OFFSET UNITYSDK_OFFSET(0x7E1620)

inline static constexpr unsigned int Struct_2_B8984AF1CBDAAA93_TypeDefinitionIndex = 81983;

struct alignas(4) Struct_2_B8984AF1CBDAAA93
{
	::Struct_2_4E049E2562254C08 Field_2_0; // 0x10
	::PipelineCamera::WorldBasicCameraData Field_2_1; // 0x64

	::System::Void _ctor(::Struct_2_4E049E2562254C08 a1, ::PipelineCamera::WorldBasicCameraData a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4E049E2562254C08, ::PipelineCamera::WorldBasicCameraData))((::PBYTE)hIl2Cpp + STRUCT_2_B8984AF1CBDAAA93__CTOR_OFFSET))(this, a1, a2);
	}
};
