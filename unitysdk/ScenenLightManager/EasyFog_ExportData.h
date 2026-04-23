#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F6727781D6D80ED0_CustomColorBlendMode.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class EasyFog_ExtraExportData; }

#define SCENENLIGHTMANAGER_EASYFOG_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB936870)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EasyFog_ExportData_TypeDefinitionIndex = 45707;

	class EasyFog_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::RPG::Client::EasyFog_ExtraExportData* extraExportData; // 0x10
		::UnityEngine::Color baseColorTint; // 0x18
		::System::Single fogDensity; // 0x28
		::System::Single normalFlip; // 0x2C
		::System::Single normalIntensity; // 0x30
		::UnityEngine::Vector2 detailNoiseTiling; // 0x34
		::UnityEngine::Vector2 detailNoiseSpeed; // 0x3C
		::System::Single detailNoiseContrast; // 0x44
		::UnityEngine::Vector2 distortTiling; // 0x48
		::UnityEngine::Vector2 distortMapFlow; // 0x50
		::System::Single distortIntensity; // 0x58
		::System::Single directionalLightIntensity; // 0x5C
		::UnityEngine::Color customDirectionalLightColor; // 0x60
		::Class_4_F6727781D6D80ED0_CustomColorBlendMode directionalLightBlendMode; // 0x70
		::UnityEngine::Color customAmbientColor; // 0x74
		::Class_4_F6727781D6D80ED0_CustomColorBlendMode ambientLightBlendMode; // 0x84
		::UnityEngine::Color customEmissiveColor; // 0x88
		::System::Single softParticlesNearFadeDistance; // 0x98
		::System::Single softParticlesFarFadeDistance; // 0x9C
		::System::Single cameraNearFadeDistance; // 0xA0
		::System::Single cameraFarFadeDistance; // 0xA4
		::System::Boolean blenderFogOn; // 0xA8
		::System::Boolean volumeFogOn; // 0xA9
		::RPG::CustomRP::CustomLightQualityFilter lightQualityFilter; // 0xAC
		::System::Boolean overrideRenderQueue; // 0xB0
		::System::Int32 renderQueue; // 0xB4
		::System::Boolean useCustomMap; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_EASYFOG_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
