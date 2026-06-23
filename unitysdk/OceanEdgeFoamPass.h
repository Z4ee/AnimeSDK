#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterGenPass; }

#define OCEANEDGEFOAMPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C42BA10)
#define OCEANEDGEFOAMPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C42C470)
#define OCEANEDGEFOAMPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42C4C0)
#define OCEANEDGEFOAMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42B8E0)
#define OCEANEDGEFOAMPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1C42C520)

inline static constexpr unsigned int OceanEdgeFoamPass_TypeDefinitionIndex = 26775;

class OceanEdgeFoamPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	static ::System::Int32* StaticGet__OceanEdgeFoamScreenSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanEdgeFoamPass_TypeDefinitionIndex)->GetStaticField(0x7270);
	}
	static ::System::Int32* StaticGet__OceanEdgeFoamMask()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanEdgeFoamPass_TypeDefinitionIndex)->GetStaticField(0x7274);
	}
	static ::System::Int32* StaticGet__OceanEdgeFoamMask2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OceanEdgeFoamPass_TypeDefinitionIndex)->GetStaticField(0x7278);
	}
	// static const ::System::String* k_ProfilerTag; // 0x0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
	::UnityEngine::Rendering::Universal::Internal::WaterGenPass* m_WaterGenPass; // 0xB0
	::UnityEngine::ComputeShader* m_BlurCS; // 0xB8

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::ComputeShader* blurCS, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass* waterGenPass)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::Universal::Internal::WaterGenPass*))((::PBYTE)hIl2Cpp + OCEANEDGEFOAMPASS__CTOR_OFFSET))(this, evt, blurCS, waterGenPass);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANEDGEFOAMPASS__CCTOR_OFFSET))();
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + OCEANEDGEFOAMPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + OCEANEDGEFOAMPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + OCEANEDGEFOAMPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
