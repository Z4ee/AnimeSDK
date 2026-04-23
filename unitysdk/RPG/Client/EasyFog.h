#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_F6727781D6D80ED0_CustomColorBlendMode.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightTAMonoPluginBase_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_4_F6727781D6D80ED0;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EASYFOG_GET_FOGNORMALMAP_OFFSET UNITYSDK_OFFSET(0xA1AFD20)
#define RPG_CLIENT_EASYFOG_GET_OPACITYMAP_OFFSET UNITYSDK_OFFSET(0xA1AFCD0)
#define RPG_CLIENT_EASYFOG__CTOR_OFFSET UNITYSDK_OFFSET(0xA1AFD70)

namespace RPG::Client
{
	inline static constexpr unsigned int EasyFog_TypeDefinitionIndex = 65271;

	class EasyFog : public ::ScenenLightManager::SceneManagedLightTAMonoPluginBase_1<::Class_4_F6727781D6D80ED0*>
	{
	public:
		::UnityEngine::Material* easyFogTemplateMaterial; // 0x30
		::UnityEngine::Color baseColorTint; // 0x38
		::System::Single fogDensity; // 0x48
		::System::Boolean useCustomMap; // 0x4C
		::UnityEngine::Texture2D* opacityMap; // 0x50
		::UnityEngine::Texture2D* fogNormalMap; // 0x58
		::UnityEngine::Texture2D* customOpacityMap; // 0x60
		::UnityEngine::Texture2D* customfogNormalMap; // 0x68
		::System::Single normalFlip; // 0x70
		::System::Single normalIntensity; // 0x74
		::UnityEngine::Vector2 detailNoiseTiling; // 0x78
		::UnityEngine::Vector2 detailNoiseSpeed; // 0x80
		::System::Single detailNoiseContrast; // 0x88
		::UnityEngine::Vector2 distortTiling; // 0x8C
		::UnityEngine::Vector2 distortMapFlow; // 0x94
		::System::Single distortIntensity; // 0x9C
		::System::Single directionalLightIntensity; // 0xA0
		::UnityEngine::Color customDirectionalLightColor; // 0xA4
		::Class_4_F6727781D6D80ED0_CustomColorBlendMode directionalLightBlendMode; // 0xB4
		::UnityEngine::Color customAmbientColor; // 0xB8
		::Class_4_F6727781D6D80ED0_CustomColorBlendMode ambientLightBlendMode; // 0xC8
		::UnityEngine::Color customEmissiveColor; // 0xCC
		::System::Single softParticlesNearFadeDistance; // 0xDC
		::System::Single softParticlesFarFadeDistance; // 0xE0
		::System::Single cameraNearFadeDistance; // 0xE4
		::System::Single cameraFarFadeDistance; // 0xE8
		::System::Boolean blenderFogOn; // 0xEC
		::System::Boolean volumeFogOn; // 0xED
		::RPG::CustomRP::CustomLightQualityFilter lightQualityFilter; // 0xF0
		::System::Int32 LightQualityVersion; // 0xF4
		::System::Boolean overrideRenderQueue; // 0xF8
		::System::Int32 renderQueue; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EASYFOG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_OpacityMap()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EASYFOG_GET_OPACITYMAP_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_FogNormalMap()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EASYFOG_GET_FOGNORMALMAP_OFFSET))(this);
		}
	};
}
