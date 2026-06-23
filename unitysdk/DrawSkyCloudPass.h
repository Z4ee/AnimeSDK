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

#define DRAWSKYCLOUDPASS_DRAWSKYEFFECT_OFFSET UNITYSDK_OFFSET(0x1D4D2620)
#define DRAWSKYCLOUDPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4D1ED0)
#define DRAWSKYCLOUDPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D4D2900)
#define DRAWSKYCLOUDPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1D4D1E80)
#define DRAWSKYCLOUDPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4D2950)
#define DRAWSKYCLOUDPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D1CF0)
#define DRAWSKYCLOUDPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D4D29B0)

inline static constexpr unsigned int DrawSkyCloudPass_TypeDefinitionIndex = 26936;

class DrawSkyCloudPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__SkyEffectOutlineParams2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawSkyCloudPass_TypeDefinitionIndex)->GetStaticField(0x6FF0);
	}
	static ::System::Int32* StaticGet__SkyEffectOutlineParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawSkyCloudPass_TypeDefinitionIndex)->GetStaticField(0x6FF4);
	}
	static ::System::Int32* StaticGet__SkyEffectOutlineColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawSkyCloudPass_TypeDefinitionIndex)->GetStaticField(0x6FF8);
	}
	// static const ::System::String* k_ProfilerTag; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
	::UnityEngine::MaterialPropertyBlock* m_SkyEffectMaterialPropertyBlock; // 0xB0
	::System::Boolean m_HasVolumetricCloudV2Pass; // 0xB8
	::UnityEngine::Rendering::FilteringSettings m_FilterSettingsForOpaqueAfterSkyCloud; // 0xBC

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS__CTOR_OFFSET))(this, evt);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS__CCTOR_OFFSET))();
	}

	::System::Void Setup(::System::Boolean hasVolumetricCloudV2Pass)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DRAWSKYCLOUDPASS_SETUP_OFFSET))(this, hasVolumetricCloudV2Pass);
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
