#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Data/LookAtInCore_ByRotation.h"
#include "unitysdk/PipelineCamera/Data/LookAtInCore_ByRotationY.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_232;
namespace Nap::NapECS { class EcsWorld; }

#define STRUCT_2_2193452B3479DA84_METHOD_2_5A9F372844237AF3_OFFSET UNITYSDK_OFFSET(0x11D43B70)
#define STRUCT_2_2193452B3479DA84_METHOD_2_FD7BEF609C0A539B_OFFSET UNITYSDK_OFFSET(0x764610)
#define STRUCT_2_2193452B3479DA84__CTOR_OFFSET UNITYSDK_OFFSET(0x764600)

inline static constexpr unsigned int Struct_2_2193452B3479DA84_TypeDefinitionIndex = 43608;

struct alignas(8) Struct_2_2193452B3479DA84
{
	::Class_0_16E4307DCC419505_232* Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_232* Field_2_1; // 0x18
	::Nap::NapECS::EcsWorld* Field_2_2; // 0x20
	::PipelineCamera::Data::LookAtInCore_ByRotationY Field_2_3; // 0x28
	::PipelineCamera::Data::LookAtInCore_ByRotation Field_2_4; // 0x9C
	::System::Boolean Field_2_5; // 0x104

	/*
	::System::Void _ctor(::Struct_2_7D08D6F1491E6873& a1, ::PipelineCamera::FinalCameraData& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&, ::PipelineCamera::FinalCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_2193452B3479DA84__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	/*
	static ::System::Void Method_2_5A9F372844237AF3(::Struct_2_7D08D6F1491E6873& a1, ::PipelineCamera::FinalCameraData& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::Struct_2_7D08D6F1491E6873&, ::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + STRUCT_2_2193452B3479DA84_METHOD_2_5A9F372844237AF3_OFFSET))(a1, a2, a3);
	}
	*/

	/*
	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Method_2_FD7BEF609C0A539B()
	{
		return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2193452B3479DA84_METHOD_2_FD7BEF609C0A539B_OFFSET))(this);
	}
	*/
};
