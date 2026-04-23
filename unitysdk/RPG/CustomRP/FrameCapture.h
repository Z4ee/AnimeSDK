#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FrameCaptureType.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"

namespace RPG::CustomRP { class CaptureCb; }
namespace RPG::CustomRP { class CaptureSetupCb; }
namespace RPG::CustomRP { class FrameCapture_IFrameCaptureEndOP; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1813EED0)
#define RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x1813EEC0)
#define RPG_CUSTOMRP_FRAMECAPTURE_CPPUPDATECAPTURERT_OFFSET UNITYSDK_OFFSET(0x1813E7E0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURERTDESC_OFFSET UNITYSDK_OFFSET(0x1813EDB0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURE_OFFSET UNITYSDK_OFFSET(0x1813E3E0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYCAPTURE_OFFSET UNITYSDK_OFFSET(0x1813E240)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYTEXDESC_OFFSET UNITYSDK_OFFSET(0x1813DDB0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x1813ED80)
#define RPG_CUSTOMRP_FRAMECAPTURE_GET_FLAGFROMIMMEDIATELYTASK_OFFSET UNITYSDK_OFFSET(0x1813EEE0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GET_ISNEARIMMEDIATELYCAPFRAME_OFFSET UNITYSDK_OFFSET(0x1813EF20)
#define RPG_CUSTOMRP_FRAMECAPTURE_HASFEATURE_OFFSET UNITYSDK_OFFSET(0x1813E7B0)
#define RPG_CUSTOMRP_FRAMECAPTURE_RELEASECAPTUREFROMIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1813EB70)
#define RPG_CUSTOMRP_FRAMECAPTURE_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x1813EBE0)
#define RPG_CUSTOMRP_FRAMECAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1813EF90)
#define RPG_CUSTOMRP_FRAMECAPTURE__CREATERT_OFFSET UNITYSDK_OFFSET(0x1813EA20)
#define RPG_CUSTOMRP_FRAMECAPTURE__HASFEATURE_OFFSET UNITYSDK_OFFSET(0x1813E3D0)
#define RPG_CUSTOMRP_FRAMECAPTURE__UPDATERTDESC_OFFSET UNITYSDK_OFFSET(0x1813DF40)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameCapture_TypeDefinitionIndex = 34999;

	class FrameCapture : public ::System::Object
	{
	public:
		static ::UnityEngine::RenderTexture** StaticGet__ReleaseRT()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		static ::UnityEngine::RenderTexture** StaticGet__CaptureTarget()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x129F8);
		}
		static ::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP** StaticGet__OP()
		{
			return (::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP**)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		static ::System::Int32* StaticGet__LastImmediatelyCapFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x5920);
		}
		static ::System::Single* StaticGet__PrevBlendingWeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x5924);
		}
		static ::RPG::CustomRP::FrameCapture_CaptureFeature* StaticGet__Feature()
		{
			return (::RPG::CustomRP::FrameCapture_CaptureFeature*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x5928);
		}
		static ::System::Boolean* StaticGet__FlagFromImmediatelyTask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x592C);
		}
		static ::UnityEngine::RenderTextureDescriptor* StaticGet__Desc()
		{
			return (::UnityEngine::RenderTextureDescriptor*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x5930);
		}
		static ::RPG::CustomRP::FrameCapture_CaptureType* StaticGet__Type()
		{
			return (::RPG::CustomRP::FrameCapture_CaptureType*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x5964);
		}
		static ::System::Int32* StaticGet__LastCapFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x5968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetImmediatelyTexDesc(::UnityEngine::Camera* camera, ::RPG::CustomRP::FrameCapture_CaptureType type, ::System::Int32 pixel, ::RPG::CustomRP::FrameCapture_CaptureFeature feature)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Camera*, ::RPG::CustomRP::FrameCapture_CaptureType, ::System::Int32, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYTEXDESC_OFFSET))(camera, type, pixel, feature);
		}

		static ::UnityEngine::RenderTexture* GetImmediatelyCapture(::UnityEngine::Camera* camera, ::RPG::CustomRP::FrameCapture_CaptureType type, ::System::Int32 pixel, ::RPG::CustomRP::FrameCapture_CaptureFeature feature)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Camera*, ::RPG::CustomRP::FrameCapture_CaptureType, ::System::Int32, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYCAPTURE_OFFSET))(camera, type, pixel, feature);
		}

		static ::UnityEngine::RenderTexture* GetCapture(::UnityEngine::Camera* camera, ::RPG::CustomRP::FrameCapture_CaptureType type, ::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP* op, ::RPG::CustomRP::FrameCapture_CaptureFeature feature, ::System::Single scale, ::System::Boolean reuseRT, ::System::Boolean bFromImmediatelyTask)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Camera*, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP*, ::RPG::CustomRP::FrameCapture_CaptureFeature, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURE_OFFSET))(camera, type, op, feature, scale, reuseRT, bFromImmediatelyTask);
		}

		static ::System::Boolean HasFeature(::RPG::CustomRP::FrameCapture_CaptureFeature feature)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_HASFEATURE_OFFSET))(feature);
		}

		static ::System::Boolean _HasFeature(::RPG::CustomRP::FrameCapture_CaptureFeature featureA, ::RPG::CustomRP::FrameCapture_CaptureFeature featureB)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::FrameCapture_CaptureFeature, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__HASFEATURE_OFFSET))(featureA, featureB);
		}

		static ::System::Void ReleaseCaptureFromImmediately()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_RELEASECAPTUREFROMIMMEDIATELY_OFFSET))();
		}

		static ::System::Void ReleaseCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_RELEASECAPTURE_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetTarget()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETTARGET_OFFSET))();
		}

		static ::UnityEngine::RenderTextureDescriptor GetCaptureRTDesc(::UnityEngine::Camera* camera, ::System::Single scale, ::RPG::CustomRP::FrameCapture_CaptureFeature feature)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::UnityEngine::Camera*, ::System::Single, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURERTDESC_OFFSET))(camera, scale, feature);
		}

		static ::System::Void CaptureFrame(::System::Int32 width, ::System::Int32 height, ::System::Boolean needPostProcess, ::UnityEngine::Experimental::Rendering::GraphicsFormat requestFormat, ::RPG::CustomRP::CaptureSetupCb* setupCb, ::RPG::CustomRP::CaptureSetupCb* recoverCb, ::RPG::CustomRP::CaptureCb* cb, ::System::Int32 rtID)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureCb*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREFRAME_OFFSET))(width, height, needPostProcess, requestFormat, setupCb, recoverCb, cb, rtID);
		}

		static ::System::Void CaptureBoundary(::System::Int32 width, ::System::Int32 height, ::System::Boolean needPostProcess, ::UnityEngine::Experimental::Rendering::GraphicsFormat requestFormat, ::RPG::CustomRP::CaptureSetupCb* setupCb, ::RPG::CustomRP::CaptureSetupCb* recoverCb, ::RPG::CustomRP::CaptureCb* cb, ::System::Int32 rtID, ::RPG::CustomRP::FrameCaptureType captureType, ::System::Single refDepth, ::System::Boolean isDebugCaptureBoundary, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureCb*, ::System::Int32, ::RPG::CustomRP::FrameCaptureType, ::System::Single, ::System::Boolean, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREBOUNDARY_OFFSET))(width, height, needPostProcess, requestFormat, setupCb, recoverCb, cb, rtID, captureType, refDepth, isDebugCaptureBoundary, format, readWrite);
		}

		static ::System::Void CPPUpdateCaptureRT(::System::Boolean resetFeature)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_CPPUPDATECAPTURERT_OFFSET))(resetFeature);
		}

		static ::System::Void _UpdateRTDesc(::UnityEngine::Camera* camera, ::System::Single scale, ::RPG::CustomRP::FrameCapture_CaptureFeature feature, ::UnityEngine::RenderTextureDescriptor& Desc, ::System::Int32 fixedPixel)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Single, ::RPG::CustomRP::FrameCapture_CaptureFeature, ::UnityEngine::RenderTextureDescriptor&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__UPDATERTDESC_OFFSET))(camera, scale, feature, Desc, fixedPixel);
		}

		static ::System::Void _CreateRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__CREATERT_OFFSET))();
		}

		static ::System::Boolean get_FlagFromImmediatelyTask()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GET_FLAGFROMIMMEDIATELYTASK_OFFSET))();
		}

		static ::System::Boolean get_IsNearImmediatelyCapFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GET_ISNEARIMMEDIATELYCAPFRAME_OFFSET))();
		}
	};
}
