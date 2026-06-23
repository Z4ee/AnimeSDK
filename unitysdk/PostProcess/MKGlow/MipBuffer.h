#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace PostProcess::MKGlow { class RenderContext; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define POSTPROCESS_MKGLOW_MIPBUFFER_CLEARTEMPORARY_OFFSET UNITYSDK_OFFSET(0x1B06F1C0)
#define POSTPROCESS_MKGLOW_MIPBUFFER_CREATETEMPORARY_OFFSET UNITYSDK_OFFSET(0x1B06F070)
#define POSTPROCESS_MKGLOW_MIPBUFFER_GET_RENDERTARGETS_OFFSET UNITYSDK_OFFSET(0x1B06EEA0)
#define POSTPROCESS_MKGLOW_MIPBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06EEB0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int MipBuffer_TypeDefinitionIndex = 26382;

	class MipBuffer : public ::System::Object
	{
	public:
		::Il2CppArray<::PostProcess::MKGlow::RenderTarget>* _renderTargets; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MIPBUFFER__CTOR_OFFSET))(this, name);
		}

		::Il2CppArray<::PostProcess::MKGlow::RenderTarget>* get_renderTargets()
		{
			return ((::Il2CppArray<::PostProcess::MKGlow::RenderTarget>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MIPBUFFER_GET_RENDERTARGETS_OFFSET))(this);
		}

		::System::Void CreateTemporary(::Il2CppArray<::PostProcess::MKGlow::RenderContext*>* renderContext, ::System::Int32 level, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureFormat format, ::System::Boolean useComputeShaders)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PostProcess::MKGlow::RenderContext*>*, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureFormat, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MIPBUFFER_CREATETEMPORARY_OFFSET))(this, renderContext, level, cmd, format, useComputeShaders);
		}

		::System::Void ClearTemporary(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_MIPBUFFER_CLEARTEMPORARY_OFFSET))(this, cmd, level);
		}
	};
}
