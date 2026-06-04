#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CPPCaptureData.h"
#include "unitysdk/RPG/CustomRP/FramePassCaptureData.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/RPG/CustomRP/QACaptureData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_CAPTUREFRAMEANDPARAMS_OFFSET UNITYSDK_OFFSET(0x18EE5E50)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CAPTUREDDATA_OFFSET UNITYSDK_OFFSET(0x18EE5DE0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CPPCAPTUREDDATA_OFFSET UNITYSDK_OFFSET(0x18EE5E30)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_ISCAPTUREENDED_OFFSET UNITYSDK_OFFSET(0x18EE5DD0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_QACAPTUREDDATA_OFFSET UNITYSDK_OFFSET(0x18EE5E00)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREALL_OFFSET UNITYSDK_OFFSET(0x18EE5EB0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0x18EE5F10)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTURECB_OFFSET UNITYSDK_OFFSET(0x18EE5FC0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EE5DC0)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE6130)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__LOADIMAGE_OFFSET UNITYSDK_OFFSET(0x18EE6050)
#define RPG_CUSTOMRP_FRAMEPASSCAPTURER__STARTCAPTUREFRAMEANDPARAMS_OFFSET UNITYSDK_OFFSET(0x18EE5F60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer_TypeDefinitionIndex = 35295;

	class FramePassCapturer : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::FramePassCaptureData* StaticGet__captureData()
		{
			return (::RPG::CustomRP::FramePassCaptureData*)Il2CppClass::FromTypeDefinitionIndex(FramePassCapturer_TypeDefinitionIndex)->GetStaticField(0x61630);
		}
		static ::RPG::CustomRP::CPPCaptureData* StaticGet__cppCaptureData()
		{
			return (::RPG::CustomRP::CPPCaptureData*)Il2CppClass::FromTypeDefinitionIndex(FramePassCapturer_TypeDefinitionIndex)->GetStaticField(0x61648);
		}
		static ::RPG::CustomRP::QACaptureData* StaticGet__qaCaptureData()
		{
			return (::RPG::CustomRP::QACaptureData*)Il2CppClass::FromTypeDefinitionIndex(FramePassCapturer_TypeDefinitionIndex)->GetStaticField(0x61658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsCaptureEnded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_ISCAPTUREENDED_OFFSET))();
		}

		static ::RPG::CustomRP::FramePassCaptureData get_CapturedData()
		{
			return ((::RPG::CustomRP::FramePassCaptureData(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CAPTUREDDATA_OFFSET))();
		}

		static ::RPG::CustomRP::QACaptureData get_QACapturedData()
		{
			return ((::RPG::CustomRP::QACaptureData(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_QACAPTUREDDATA_OFFSET))();
		}

		static ::RPG::CustomRP::CPPCaptureData get_cppCapturedData()
		{
			return ((::RPG::CustomRP::CPPCaptureData(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_GET_CPPCAPTUREDDATA_OFFSET))();
		}

		static ::System::Collections::IEnumerator* CaptureFrameAndParams(::RPG::CustomRP::FramePassCapturer_CaptureTarget a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::CustomRP::FramePassCapturer_CaptureTarget, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_CAPTUREFRAMEANDPARAMS_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::IEnumerator* QACaptureAll(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREALL_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* QACaptureParam()
		{
			return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER_QACAPTUREPARAM_OFFSET))();
		}

		static ::System::Collections::IEnumerator* _StartCaptureFrameAndParams(::RPG::CustomRP::FramePassCapturer_CaptureTarget a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::RPG::CustomRP::FramePassCapturer_CaptureTarget, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__STARTCAPTUREFRAMEANDPARAMS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _CaptureCb(::Unity::Collections::NativeArray_1<::System::Byte>& a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__CAPTURECB_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Texture2D* _LoadImage(::System::String* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FRAMEPASSCAPTURER__LOADIMAGE_OFFSET))(a1);
		}
	};
}
