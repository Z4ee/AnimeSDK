#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask.h"
#include "unitysdk/NapSceneEffectLodProxy_SceneEffectRenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectLod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SceneEffectQuality.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class INapSceneEffectSimulator; }

#define NAPSCENEEFFECTLODPROXY_SCENEEFFECTLODCONFIG_SETLOD_OFFSET UNITYSDK_OFFSET(0x1AEBB7F0)
#define NAPSCENEEFFECTLODPROXY_SCENEEFFECTLODCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEBB240)

inline static constexpr unsigned int NapSceneEffectLodProxy_SceneEffectLodConfig_TypeDefinitionIndex = 26573;

class NapSceneEffectLodProxy_SceneEffectLodConfig : public ::System::Object
{
public:
	::UnityEngine::Rendering::Universal::SceneEffectLod m_Lod; // 0x10
	::NapSceneEffectLodProxy_SceneEffectRenderType m_EffectType; // 0x14
	::UnityEngine::Renderer* m_Renderer; // 0x18
	::UnityEngine::Rendering::Universal::Internal::INapSceneEffectSimulator* m_SceneEffectSimulator; // 0x20
	::NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask cachedModuleMask; // 0x28

	::System::Void _ctor(::UnityEngine::Renderer* renderer)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_SCENEEFFECTLODCONFIG__CTOR_OFFSET))(this, renderer);
	}

	::System::Void SetLod(::UnityEngine::Rendering::Universal::SceneEffectQuality targetQuality)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::SceneEffectQuality))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_SCENEEFFECTLODCONFIG_SETLOD_OFFSET))(this, targetQuality);
	}
};
