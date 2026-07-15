#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CaptureState.h"
#include "unitysdk/RPG/CustomRP/FrameCaptureType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"

namespace RPG::CustomRP { class CaptureCb; }
namespace RPG::CustomRP { class CaptureSetupCb; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureContext_TypeDefinitionIndex = 36072;

	struct alignas(8) CaptureContext
	{
		// static const ::System::Int32 _MAX_WAIT_COUNT = 0xA; // 0x0
		::System::Boolean _BeforePostProcess; // 0x10
		::RPG::CustomRP::CaptureState _CaptureState; // 0x14
		::RPG::CustomRP::CaptureSetupCb* _SetupCaptureCb; // 0x18
		::RPG::CustomRP::CaptureSetupCb* _RecoverCaptureCb; // 0x20
		::RPG::CustomRP::CaptureCb* _CaptureCb; // 0x28
		::System::Int32 _Width; // 0x30
		::System::Int32 _Heigtht; // 0x34
		::System::Int32 _WaitCount; // 0x38
		::System::Int32 _CaptureRTID; // 0x3C
		::System::String* RTName; // 0x40
		::System::Boolean hasRequest; // 0x48
		::System::Boolean asyncShaderCompilation; // 0x49
		::UnityEngine::RenderTexture* _CaptureRT; // 0x50
		::UnityEngine::Experimental::Rendering::GraphicsFormat _RequestFormat; // 0x58
		::RPG::CustomRP::FrameCaptureType captureType; // 0x5C
		::System::Single _RefDepth; // 0x60
		::UnityEngine::RenderTextureFormat renderTextureFormat; // 0x64
		::UnityEngine::RenderTextureReadWrite renderTextureReadWrite; // 0x68
	};
}
