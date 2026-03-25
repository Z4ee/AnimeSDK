#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/VLB/AttenuationEquation.h"
#include "unitysdk/VLB/BlendingMode.h"
#include "unitysdk/VLB/ColorMode.h"
#include "unitysdk/VLB/MeshType.h"

class Class_4_0200DDD1DEC4CA99_ExtraExportData;
namespace UnityEngine { class Gradient; }

#define SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABC3840)

namespace ScenenLightManager
{
	inline static constexpr unsigned int VolumetricLightBeam_ExportData_TypeDefinitionIndex = 39794;

	class VolumetricLightBeam_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::VLB::ColorMode colorMode; // 0x10
		::System::Int32 RenderQueue; // 0x14
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x18
		::UnityEngine::Color color; // 0x1C
		::UnityEngine::Gradient* colorGradient; // 0x30
		::System::Single alphaInside; // 0x38
		::System::Single alphaOutside; // 0x3C
		::VLB::BlendingMode blendingMode; // 0x40
		::System::Boolean spotAngleFromLight; // 0x44
		::System::Single spotAngle; // 0x48
		::System::Single coneRadiusStart; // 0x4C
		::VLB::MeshType geomMeshType; // 0x50
		::System::Int32 geomCustomSides; // 0x54
		::System::Int32 geomCustomSegments; // 0x58
		::System::Boolean geomCap; // 0x5C
		::System::Single FadeInRange; // 0x60
		::System::Boolean skew; // 0x64
		::System::Boolean fadeEndFromLight; // 0x65
		::VLB::AttenuationEquation attenuationEquation; // 0x68
		::System::Single attenuationCustomBlending; // 0x6C
		::System::Single fadeStart; // 0x70
		::System::Single fadeEnd; // 0x74
		::System::Single depthBlendDistance; // 0x78
		::System::Single cameraClippingDistance; // 0x7C
		::System::Single glareFrontal; // 0x80
		::System::Single glareBehind; // 0x84
		::System::Single fresnelPow; // 0x88
		::System::Boolean noiseEnabled; // 0x8C
		::System::Single noiseIntensity; // 0x90
		::System::Boolean noiseScaleUseGlobal; // 0x94
		::System::Single noiseScaleLocal; // 0x98
		::System::Boolean noiseVelocityUseGlobal; // 0x9C
		::System::Boolean cookieMapEnabled; // 0x9D
		::System::Boolean reverseFresnelEnabled; // 0x9E
		::System::Single reverseFresnelPow; // 0xA0
		::System::Single reverseFresnelSoftRange; // 0xA4
		::System::Single reverseFresnelWeightRange; // 0xA8
		::System::Single FlareScale; // 0xAC
		::System::Single FlareScaleRoughness; // 0xB0
		::Class_4_0200DDD1DEC4CA99_ExtraExportData* extraExportData; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
