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

#define RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREBOUNDARY_OFFSET UNITYSDK_OFFSET(0x16BEB3C0)
#define RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x16BEB3B0)
#define RPG_CUSTOMRP_FRAMECAPTURE_CPPUPDATECAPTURERT_OFFSET UNITYSDK_OFFSET(0x16BEAD80)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURERTDESC_OFFSET UNITYSDK_OFFSET(0x16BEB2C0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURE_OFFSET UNITYSDK_OFFSET(0x16BEA980)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYCAPTURE_OFFSET UNITYSDK_OFFSET(0x16BEA7E0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYTEXDESC_OFFSET UNITYSDK_OFFSET(0x16BEA360)
#define RPG_CUSTOMRP_FRAMECAPTURE_GETTARGET_OFFSET UNITYSDK_OFFSET(0x16BEB290)
#define RPG_CUSTOMRP_FRAMECAPTURE_GET_FLAGFROMIMMEDIATELYTASK_OFFSET UNITYSDK_OFFSET(0x16BEB3D0)
#define RPG_CUSTOMRP_FRAMECAPTURE_GET_ISNEARIMMEDIATELYCAPFRAME_OFFSET UNITYSDK_OFFSET(0x16BEB410)
#define RPG_CUSTOMRP_FRAMECAPTURE_HASFEATURE_OFFSET UNITYSDK_OFFSET(0x16BEAD50)
#define RPG_CUSTOMRP_FRAMECAPTURE_RELEASECAPTUREFROMIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x16BEB020)
#define RPG_CUSTOMRP_FRAMECAPTURE_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x16BEB090)
#define RPG_CUSTOMRP_FRAMECAPTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BEB480)
#define RPG_CUSTOMRP_FRAMECAPTURE__CREATERT_OFFSET UNITYSDK_OFFSET(0x16BEAED0)
#define RPG_CUSTOMRP_FRAMECAPTURE__HASFEATURE_OFFSET UNITYSDK_OFFSET(0x16BEA970)
#define RPG_CUSTOMRP_FRAMECAPTURE__UPDATERTDESC_OFFSET UNITYSDK_OFFSET(0x16BEA4E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameCapture_TypeDefinitionIndex = 36066;

	class FrameCapture : public ::System::Object
	{
	public:
		static ::UnityEngine::RenderTexture** StaticGet__ReleaseRT()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0xE3B0);
		}
		static ::UnityEngine::RenderTexture** StaticGet__CaptureTarget()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0xE3B8);
		}
		static ::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP** StaticGet__OP()
		{
			return (::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP**)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0xE3C0);
		}
		static ::RPG::CustomRP::FrameCapture_CaptureFeature* StaticGet__Feature()
		{
			return (::RPG::CustomRP::FrameCapture_CaptureFeature*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E40);
		}
		static ::RPG::CustomRP::FrameCapture_CaptureType* StaticGet__Type()
		{
			return (::RPG::CustomRP::FrameCapture_CaptureType*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E44);
		}
		static ::System::Single* StaticGet__PrevBlendingWeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E48);
		}
		static ::System::Int32* StaticGet__LastImmediatelyCapFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E4C);
		}
		static ::System::Int32* StaticGet__LastCapFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E50);
		}
		static ::System::Boolean* StaticGet__FlagFromImmediatelyTask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E54);
		}
		static ::UnityEngine::RenderTextureDescriptor* StaticGet__Desc()
		{
			return (::UnityEngine::RenderTextureDescriptor*)Il2CppClass::FromTypeDefinitionIndex(FrameCapture_TypeDefinitionIndex)->GetStaticField(0x4E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* GetImmediatelyTexDesc(::UnityEngine::Camera* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::System::Int32 a3, ::RPG::CustomRP::FrameCapture_CaptureFeature a4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Camera*, ::RPG::CustomRP::FrameCapture_CaptureType, ::System::Int32, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYTEXDESC_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::RenderTexture* GetImmediatelyCapture(::UnityEngine::Camera* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::System::Int32 a3, ::RPG::CustomRP::FrameCapture_CaptureFeature a4)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Camera*, ::RPG::CustomRP::FrameCapture_CaptureType, ::System::Int32, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETIMMEDIATELYCAPTURE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::RenderTexture* GetCapture(::UnityEngine::Camera* a1, ::RPG::CustomRP::FrameCapture_CaptureType a2, ::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP* a3, ::RPG::CustomRP::FrameCapture_CaptureFeature a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Camera*, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::CustomRP::FrameCapture_IFrameCaptureEndOP*, ::RPG::CustomRP::FrameCapture_CaptureFeature, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean HasFeature(::RPG::CustomRP::FrameCapture_CaptureFeature a1)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_HASFEATURE_OFFSET))(a1);
		}

		static ::System::Boolean _HasFeature(::RPG::CustomRP::FrameCapture_CaptureFeature a1, ::RPG::CustomRP::FrameCapture_CaptureFeature a2)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::FrameCapture_CaptureFeature, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__HASFEATURE_OFFSET))(a1, a2);
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

		static ::UnityEngine::RenderTextureDescriptor GetCaptureRTDesc(::UnityEngine::Camera* a1, ::System::Single a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3)
		{
			return ((::UnityEngine::RenderTextureDescriptor(*)(::UnityEngine::Camera*, ::System::Single, ::RPG::CustomRP::FrameCapture_CaptureFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_GETCAPTURERTDESC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CaptureFrame(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::RPG::CustomRP::CaptureSetupCb* a5, ::RPG::CustomRP::CaptureSetupCb* a6, ::RPG::CustomRP::CaptureCb* a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureCb*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREFRAME_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void CaptureBoundary(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::UnityEngine::Experimental::Rendering::GraphicsFormat a4, ::RPG::CustomRP::CaptureSetupCb* a5, ::RPG::CustomRP::CaptureSetupCb* a6, ::RPG::CustomRP::CaptureCb* a7, ::System::Int32 a8, ::RPG::CustomRP::FrameCaptureType a9, ::System::Single a10, ::System::Boolean a11, ::UnityEngine::RenderTextureFormat a12, ::UnityEngine::RenderTextureReadWrite a13)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureSetupCb*, ::RPG::CustomRP::CaptureCb*, ::System::Int32, ::RPG::CustomRP::FrameCaptureType, ::System::Single, ::System::Boolean, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_CAPTUREBOUNDARY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		static ::System::Void CPPUpdateCaptureRT(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE_CPPUPDATECAPTURERT_OFFSET))(a1);
		}

		static ::System::Void _UpdateRTDesc(::UnityEngine::Camera* a1, ::System::Single a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3, ::UnityEngine::RenderTextureDescriptor& a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Single, ::RPG::CustomRP::FrameCapture_CaptureFeature, ::UnityEngine::RenderTextureDescriptor&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMECAPTURE__UPDATERTDESC_OFFSET))(a1, a2, a3, a4, a5);
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
