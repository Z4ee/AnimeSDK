#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LYRAGIPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1D2EBB30)
#define LYRAGIPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D2EBDB0)
#define LYRAGIPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D2EBE20)
#define LYRAGIPASS_UPDATEBAKEDCLIPMAP_OFFSET UNITYSDK_OFFSET(0x1D2EBB80)
#define LYRAGIPASS_VISUALIZE_OFFSET UNITYSDK_OFFSET(0x1D2EBC80)
#define LYRAGIPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EBAA0)
#define LYRAGIPASS___BASE_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1D2EBE70)
#define LYRAGIPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D2EBE80)

inline static constexpr unsigned int LyraGIPass_TypeDefinitionIndex = 26862;

class LyraGIPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + LYRAGIPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
	}

	::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + LYRAGIPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
	}

	static ::System::Void UpdateBakedClipmap(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + LYRAGIPASS_UPDATEBAKEDCLIPMAP_OFFSET))(context, renderingData);
	}

	static ::System::Void Visualize(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle colorHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle depthHandle, ::UnityEngine::Rendering::CommandBuffer* cb, ::System::Int32 width, ::System::Int32 height)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRAGIPASS_VISUALIZE_OFFSET))(context, renderingData, colorHandle, depthHandle, cb, width, height);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + LYRAGIPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + LYRAGIPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void __base_Configure(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::NAPRenderPipeline0::RenderingData& P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + LYRAGIPASS___BASE_CONFIGURE_OFFSET))(this, P0, P1);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + LYRAGIPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
