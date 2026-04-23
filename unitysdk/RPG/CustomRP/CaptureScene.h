#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/FramePassCaptureData.h"
#include "unitysdk/RPG/CustomRP/FramePassCapturer_CaptureTarget.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define RPG_CUSTOMRP_CAPTURESCENE_CAPTUREAMBIENTTEX_OFFSET UNITYSDK_OFFSET(0x18121400)
#define RPG_CUSTOMRP_CAPTURESCENE_CAPTUREPROBEOUTPUT_OFFSET UNITYSDK_OFFSET(0x18121360)
#define RPG_CUSTOMRP_CAPTURESCENE_CAPTURESCENEOUTPUT_OFFSET UNITYSDK_OFFSET(0x18121310)
#define RPG_CUSTOMRP_CAPTURESCENE_CAPTURE_OFFSET UNITYSDK_OFFSET(0x18120830)
#define RPG_CUSTOMRP_CAPTURESCENE_QACAPTUREALL_OFFSET UNITYSDK_OFFSET(0x18121450)
#define RPG_CUSTOMRP_CAPTURESCENE__CAPTURECOROUTINE_OFFSET UNITYSDK_OFFSET(0x181213B0)
#define RPG_CUSTOMRP_CAPTURESCENE__CAPTURESCENEOUTPUTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x181212B0)
#define RPG_CUSTOMRP_CAPTURESCENE__CBSCENE_OFFSET UNITYSDK_OFFSET(0x18120B50)
#define RPG_CUSTOMRP_CAPTURESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x18121510)
#define RPG_CUSTOMRP_CAPTURESCENE__DUMPPARAMS_OFFSET UNITYSDK_OFFSET(0x181209E0)
#define RPG_CUSTOMRP_CAPTURESCENE__QACAPTUREALL_OFFSET UNITYSDK_OFFSET(0x181214A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureScene_TypeDefinitionIndex = 34986;

	class CaptureScene : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 size; // 0x18
		::System::Int32 Width; // 0x24
		::System::Int32 Height; // 0x28
		::System::Int32 OutputWidth; // 0x2C
		::System::Int32 OutputHeight; // 0x30
		::System::Boolean needPostProcess; // 0x34
		::System::Boolean orthographic; // 0x35
		::System::Boolean debugCapture; // 0x36
		::System::String* QACaptureJson1; // 0x38
		::System::String* QACaptureJson2; // 0x40
		::UnityEngine::Vector3 posBackup; // 0x48
		::UnityEngine::Quaternion rotBackup; // 0x54
		::System::Single farPlaneBackup; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE__CTOR_OFFSET))(this);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE_CAPTURE_OFFSET))(this);
		}

		::System::String* _DumpParams(::RPG::CustomRP::FramePassCaptureData& data)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::CustomRP::FramePassCaptureData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE__DUMPPARAMS_OFFSET))(this, data);
		}

		::System::Void _CbScene(::Unity::Collections::NativeArray_1<::System::Byte>& data)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE__CBSCENE_OFFSET))(this, data);
		}

		::System::Collections::IEnumerator* _CaptureSceneOutputCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE__CAPTURESCENEOUTPUTCOROUTINE_OFFSET))(this);
		}

		::System::Void CaptureSceneOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE_CAPTURESCENEOUTPUT_OFFSET))(this);
		}

		::System::Void CaptureProbeOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE_CAPTUREPROBEOUTPUT_OFFSET))(this);
		}

		::System::Void CaptureAmbientTex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE_CAPTUREAMBIENTTEX_OFFSET))(this);
		}

		::System::Void QACaptureAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE_QACAPTUREALL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _CaptureCoroutine(::RPG::CustomRP::FramePassCapturer_CaptureTarget target)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::CustomRP::FramePassCapturer_CaptureTarget))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE__CAPTURECOROUTINE_OFFSET))(this, target);
		}

		::System::Collections::IEnumerator* _QACaptureAll()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTURESCENE__QACAPTUREALL_OFFSET))(this);
		}
	};
}
