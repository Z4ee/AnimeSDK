#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SDFResolution.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define OCEANSDFGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC13F20)

inline static constexpr unsigned int OceanSdfGenerator_TypeDefinitionIndex = 26953;

class OceanSdfGenerator : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 threadGroupWidth = 0x8; // 0x0
	::UnityEngine::Bounds bounds; // 0x18
	::SDFResolution sdfResolution; // 0x30
	::UnityEngine::Vector4 coastlineScaleOffset; // 0x34
	::UnityEngine::ComputeShader* computeShader; // 0x48
	::UnityEngine::Camera* captureCam; // 0x50
	::UnityEngine::GameObject* CaptureBG; // 0x58
	::UnityEngine::RenderTexture* captureRT; // 0x60
	::UnityEngine::RenderTexture* _sdfTexture; // 0x68
	::UnityEngine::RenderTexture* _floodTexture; // 0x70
	::UnityEngine::RenderTexture* _coastlineMap; // 0x78
	::UnityEngine::Material* slopeMat; // 0x80
	::WeatherConfig* weatherConfig; // 0x88
	::System::Single seaLevel; // 0x90
	::UnityEngine::Texture2D* sdf; // 0x98
	::System::Int32 _SeedKernel; // 0xA0
	::System::Int32 _FloodKernel; // 0xA4
	::System::Int32 _DistKernel; // 0xA8
	::System::Int32 _BlurKernel; // 0xAC
	::System::Int32 _DistanceSlopeKernel; // 0xB0
	::UnityEngine::Vector2Int _groupThreadCount; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSDFGENERATOR__CTOR_OFFSET))(this);
	}
};
