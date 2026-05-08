#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DRAWSKYCLOUDPASS_DRAWSKYEFFECT_OFFSET UNITYSDK_OFFSET(0x1B35F7D0)
#define DRAWSKYCLOUDPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B35F140)
#define DRAWSKYCLOUDPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B35FAB0)
#define DRAWSKYCLOUDPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B35FB00)
#define DRAWSKYCLOUDPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35EFB0)
#define DRAWSKYCLOUDPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B35FB60)

inline static constexpr unsigned int DrawSkyCloudPass_TypeDefinitionIndex = 29608;

class DrawSkyCloudPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__SkyEffectOutlineParams2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawSkyCloudPass_TypeDefinitionIndex)->GetStaticField(0x72B0);
	}
	static ::System::Int32* StaticGet__SkyEffectOutlineParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawSkyCloudPass_TypeDefinitionIndex)->GetStaticField(0x72B4);
	}
	static ::System::Int32* StaticGet__SkyEffectOutlineColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawSkyCloudPass_TypeDefinitionIndex)->GetStaticField(0x72B8);
	}
	// static const ::System::String* k_ProfilerTag; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
	::UnityEngine::MaterialPropertyBlock* m_SkyEffectMaterialPropertyBlock; // 0xB0
	::UnityEngine::Rendering::FilteringSettings m_FilterSettingsForOpaqueAfterSkyCloud; // 0xB8

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS__CTOR_OFFSET))(this, evt);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS__CCTOR_OFFSET))();
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void DrawSkyEffect(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS_DRAWSKYEFFECT_OFFSET))(this, cmd, cameraData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
