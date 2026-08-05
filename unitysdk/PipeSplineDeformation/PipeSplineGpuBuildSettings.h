#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipeSplineDeformation/RemainderPolicy.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUILDSETTINGS_FROMMESH_OFFSET UNITYSDK_OFFSET(0x1C4CBD50)
#define PIPESPLINEDEFORMATION_PIPESPLINEGPUBUILDSETTINGS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1C4CBCC0)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineGpuBuildSettings_TypeDefinitionIndex = 27488;

	struct alignas(4) PipeSplineGpuBuildSettings
	{
		::System::Single sampleSpacing; // 0x10
		::System::Int32 maxCurveSamples; // 0x14
		::System::Single pipeSectionLength; // 0x18
		::PipeSplineDeformation::RemainderPolicy remainderPolicy; // 0x1C
		::UnityEngine::Vector3 preferredUp; // 0x20
		::System::Single rollOffset; // 0x2C
		::System::Single radiusScale; // 0x30
		::System::Single meshMinX; // 0x34
		::System::Single meshLength; // 0x38
		::System::Single boundsPadding; // 0x3C

		static ::PipeSplineDeformation::PipeSplineGpuBuildSettings get_Default()
		{
			return ((::PipeSplineDeformation::PipeSplineGpuBuildSettings(*)())((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUILDSETTINGS_GET_DEFAULT_OFFSET))();
		}

		static ::PipeSplineDeformation::PipeSplineGpuBuildSettings FromMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::PipeSplineDeformation::PipeSplineGpuBuildSettings(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEGPUBUILDSETTINGS_FROMMESH_OFFSET))(mesh);
		}
	};
}
