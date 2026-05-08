#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DRAWAFTERSKYBOXPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18FE3000)
#define DRAWAFTERSKYBOXPASS_SETCHARACTERTRANSPARENTALPHABLEND_OFFSET UNITYSDK_OFFSET(0x18FE2B90)
#define DRAWAFTERSKYBOXPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE2E70)

inline static constexpr unsigned int DrawAfterSkyboxPass_TypeDefinitionIndex = 29607;

class DrawAfterSkyboxPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	// static const ::System::String* k_ProfilerTag; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
	::UnityEngine::Rendering::FilteringSettings m_FilterSettingsForOpaqueAfterSkyCloud; // 0xB0

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + DRAWAFTERSKYBOXPASS__CTOR_OFFSET))(this, evt);
	}

	static ::System::Void SetCharacterTransparentAlphaBlend(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean forOffScreenRT)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DRAWAFTERSKYBOXPASS_SETCHARACTERTRANSPARENTALPHABLEND_OFFSET))(cmd, forOffScreenRT);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + DRAWAFTERSKYBOXPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}
};
