#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderDimension.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace PostProcess::MKGlow { class ICameraData; }

#define POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C410700)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_ENABLERANDOMWRITE_OFFSET UNITYSDK_OFFSET(0x1C410730)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C405EF0)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_RENDERDIMENSION_OFFSET UNITYSDK_OFFSET(0x1C407230)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1C405EE0)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT_SINGLEPASSSTEREOADJUSTWIDTH_OFFSET UNITYSDK_OFFSET(0x1C405E00)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT_UPDATERENDERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C405630)
#define POSTPROCESS_MKGLOW_RENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C404230)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderContext_TypeDefinitionIndex = 27094;

	class RenderContext : public ::System::Object
	{
	public:
		::UnityEngine::RenderTextureDescriptor _descriptor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::RenderTextureDescriptor get_descriptor()
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PostProcess::MKGlow::RenderDimension get_renderDimension()
		{
			return ((::PostProcess::MKGlow::RenderDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_RENDERDIMENSION_OFFSET))(this);
		}

		::System::Boolean get_enableRandomWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_ENABLERANDOMWRITE_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void SinglePassStereoAdjustWidth(::System::Boolean stereoEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_SINGLEPASSSTEREOADJUSTWIDTH_OFFSET))(this, stereoEnabled);
		}

		::System::Void UpdateRenderContext(::PostProcess::MKGlow::ICameraData* cameraData, ::UnityEngine::RenderTextureFormat format, ::System::Int32 depthBufferBits, ::System::Boolean enableRandomWrite, ::PostProcess::MKGlow::RenderDimension dimension)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::ICameraData*, ::UnityEngine::RenderTextureFormat, ::System::Int32, ::System::Boolean, ::PostProcess::MKGlow::RenderDimension))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERCONTEXT_UPDATERENDERCONTEXT_OFFSET))(this, cameraData, format, depthBufferBits, enableRandomWrite, dimension);
		}
	};
}
