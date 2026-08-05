#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Data/LookAtInCore_ByRotation.h"
#include "unitysdk/PipelineCamera/Data/LookAtInCore_ByRotationY.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_442;
namespace Nap::NapECS { class EcsWorld; }

#define STRUCT_2_5316ABF498596591_METHOD_2_022444B37184CD44_OFFSET UNITYSDK_OFFSET(0x11F97430)
#define STRUCT_2_5316ABF498596591_METHOD_2_FD7BEF609C0A539B_OFFSET UNITYSDK_OFFSET(0x78C290)
#define STRUCT_2_5316ABF498596591__CTOR_OFFSET UNITYSDK_OFFSET(0x78C280)

inline static constexpr unsigned int Struct_2_5316ABF498596591_TypeDefinitionIndex = 77345;

struct alignas(8) Struct_2_5316ABF498596591
{
	::Class_0_16E4307DCC419505_442* Field_2_2; // 0x10
	::Class_0_16E4307DCC419505_442* Field_2_1; // 0x18
	::Nap::NapECS::EcsWorld* Field_2_0; // 0x20
	::PipelineCamera::Data::LookAtInCore_ByRotationY Field_2_7; // 0x28
	::PipelineCamera::Data::LookAtInCore_ByRotation Field_2_6; // 0x9C
	::System::Boolean Field_2_5; // 0x104

	/*
	::System::Void _ctor(::Struct_2_7D08D6F1491E6873& a1, ::PipelineCamera::FinalCameraData& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_7D08D6F1491E6873&, ::PipelineCamera::FinalCameraData&))((::PBYTE)hIl2Cpp + STRUCT_2_5316ABF498596591__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	/*
	static ::System::Void Method_2_022444B37184CD44(::Struct_2_7D08D6F1491E6873& a1, ::PipelineCamera::FinalCameraData& a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::Struct_2_7D08D6F1491E6873&, ::PipelineCamera::FinalCameraData&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + STRUCT_2_5316ABF498596591_METHOD_2_022444B37184CD44_OFFSET))(a1, a2, a3);
	}
	*/

	/*
	::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> Method_2_FD7BEF609C0A539B()
	{
		return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5316ABF498596591_METHOD_2_FD7BEF609C0A539B_OFFSET))(this);
	}
	*/
};
