#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderDimension.h"
#include "unitysdk/PostProcess/MKGlow/RenderTarget.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace PostProcess::MKGlow { class ICameraData; }
namespace PostProcess::MKGlow { class RenderContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_1_OFFSET UNITYSDK_OFFSET(0x19279550)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_2_OFFSET UNITYSDK_OFFSET(0x192797B0)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_3_OFFSET UNITYSDK_OFFSET(0x19279850)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_OFFSET UNITYSDK_OFFSET(0x19279360)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_GETTEMPORARY_OFFSET UNITYSDK_OFFSET(0x19279C50)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_GET_SCREENMESH_OFFSET UNITYSDK_OFFSET(0x19278E60)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_SETKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x19279300)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x19279280)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_SINGLEPASSSTEREODOWNSCALE_OFFSET UNITYSDK_OFFSET(0x192798D0)
#define POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_UPDATEMIPRENDERCONTEXT_OFFSET UNITYSDK_OFFSET(0x192799E0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineExtensions_TypeDefinitionIndex = 29660;

	class PipelineExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet__screenMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(PipelineExtensions_TypeDefinitionIndex)->GetStaticField(0x233A0);
		}

		static ::UnityEngine::Mesh* get_screenMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_GET_SCREENMESH_OFFSET))();
		}

		static ::System::Void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_SETKEYWORD_OFFSET))(cmd, keyword, enable);
		}

		static ::System::Void SetKeyword_1(::System::String* keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_SETKEYWORD_1_OFFSET))(keyword, enable);
		}

		static ::System::Void Draw(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* destinations, ::UnityEngine::Material* material, ::System::Boolean useGeometryShader, ::System::Int32 pass, ::UnityEngine::Rect viewport)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>*, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_OFFSET))(cmd, destinations, material, useGeometryShader, pass, viewport);
		}

		static ::System::Void Draw_1(::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* destinations, ::UnityEngine::Material* material, ::System::Boolean useGeometryShader, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>*, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_1_OFFSET))(destinations, material, useGeometryShader, pass);
		}

		static ::System::Void Draw_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* destinations, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::PostProcess::MKGlow::RenderDimension computeThreadGroups)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>*, ::UnityEngine::ComputeShader*, ::System::Int32, ::PostProcess::MKGlow::RenderDimension))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_2_OFFSET))(cmd, destinations, computeShader, kernelIndex, computeThreadGroups);
		}

		static ::System::Void Draw_3(::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>* destinations, ::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::PostProcess::MKGlow::RenderDimension computeThreadGroups)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::PostProcess::MKGlow::RenderTarget>*, ::UnityEngine::ComputeShader*, ::System::Int32, ::PostProcess::MKGlow::RenderDimension))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_DRAW_3_OFFSET))(destinations, computeShader, kernelIndex, computeThreadGroups);
		}

		static ::System::Int32 SinglePassStereoDownscale(::System::Boolean cameraIsStereo, ::System::Int32 size, ::System::Int32 scale)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_SINGLEPASSSTEREODOWNSCALE_OFFSET))(cameraIsStereo, size, scale);
		}

		static ::System::Void UpdateMipRenderContext(::PostProcess::MKGlow::ICameraData* cameraData, ::Il2CppArray<::PostProcess::MKGlow::RenderContext*>* renderContexts, ::PostProcess::MKGlow::RenderDimension rawDimension, ::System::Int32 levels, ::UnityEngine::RenderTextureFormat format, ::System::Int32 depthBufferBits, ::System::Boolean enableRandomWrite)
		{
			return ((::System::Void(*)(::PostProcess::MKGlow::ICameraData*, ::Il2CppArray<::PostProcess::MKGlow::RenderContext*>*, ::PostProcess::MKGlow::RenderDimension, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_UPDATEMIPRENDERCONTEXT_OFFSET))(cameraData, renderContexts, rawDimension, levels, format, depthBufferBits, enableRandomWrite);
		}

		static ::UnityEngine::RenderTexture* GetTemporary(::PostProcess::MKGlow::RenderContext* renderContext, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PostProcess::MKGlow::RenderContext*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEEXTENSIONS_GETTEMPORARY_OFFSET))(renderContext, format);
		}
	};
}
