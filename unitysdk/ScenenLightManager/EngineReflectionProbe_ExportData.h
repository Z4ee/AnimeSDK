#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/ProbeBlendFlag.h"
#include "unitysdk/RPG/CustomRP/ProbeRangeMode.h"
#include "unitysdk/RPG/CustomRP/ProbeStencilMode.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE90E2B0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineReflectionProbe_ExportData_TypeDefinitionIndex = 49528;

	class EngineReflectionProbe_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Single blendDistance; // 0x14
		::System::Boolean hdr; // 0x18
		::System::Boolean boxProjection; // 0x19
		::System::Int32 importance; // 0x1C
		::System::Single intensity; // 0x20
		::System::Int32 resolution; // 0x24
		::System::String* customBakedTexture; // 0x28
		::UnityEngine::Vector3 size; // 0x30
		::UnityEngine::Vector3 center; // 0x3C
		::System::Single Weight; // 0x48
		::RPG::CustomRP::ProbeRangeMode ProbeRange; // 0x4C
		::System::String* RampTex; // 0x50
		::System::Single RampIntensity; // 0x58
		::System::Single ProbeRampBlend; // 0x5C
		::RPG::CustomRP::ProbeBlendFlag ProbeBlendMode; // 0x60
		::UnityEngine::Vector3 StencilCenter; // 0x64
		::UnityEngine::Vector3 StencilSize; // 0x70
		::System::Boolean UseAddStencil; // 0x7C
		::RPG::CustomRP::ProbeStencilMode StencilMode; // 0x80
		::System::Single RotAngle; // 0x84
		::UnityEngine::Vector3 StencilRotation; // 0x88
		::System::Single InnerRangePercent; // 0x94
		::System::Boolean BlendOnBase; // 0x98
		::RPG::CustomRP::CustomLightQualityFilter customProbeQualityFilter; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
