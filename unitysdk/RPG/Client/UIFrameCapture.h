#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class UIFrameCaptureParam; }
namespace RPG::Client { class UIFramePostProcessParam; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAMEWITHPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x172359C0)
#define RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x17235470)
#define RPG_CLIENT_UIFRAMECAPTURE_GET_CAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0x172356B0)
#define RPG_CLIENT_UIFRAMECAPTURE_GET_CAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0x17235CB0)
#define RPG_CLIENT_UIFRAMECAPTURE_GET_POSTPROCESSPARAM_OFFSET UNITYSDK_OFFSET(0x17235CD0)
#define RPG_CLIENT_UIFRAMECAPTURE_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0x17229FB0)
#define RPG_CLIENT_UIFRAMECAPTURE_SET_CAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0x17235CC0)
#define RPG_CLIENT_UIFRAMECAPTURE_SET_POSTPROCESSPARAM_OFFSET UNITYSDK_OFFSET(0x17235CE0)
#define RPG_CLIENT_UIFRAMECAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x17220560)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFrameCapture_TypeDefinitionIndex = 69720;

	class UIFrameCapture : public ::System::Object
	{
	public:
		::RPG::Client::UIFramePostProcessParam* _PostProcessParam_k__BackingField; // 0x10
		::RPG::Client::UIFrameCaptureParam* _CaptureParam_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* CaptureFrame(::RPG::Client::UIFrameCaptureParam* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::RPG::Client::UIFrameCaptureParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* CaptureFrameWithPostProcess(::RPG::Client::UIFrameCaptureParam* a1, ::RPG::Client::UIFramePostProcessParam* a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>*(*)(::PVOID, ::RPG::Client::UIFrameCaptureParam*, ::RPG::Client::UIFramePostProcessParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAMEWITHPOSTPROCESS_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_RELEASECAPTURE_OFFSET))(this);
		}

		::RPG::Client::FrameCaptureManager* get_CaptureManager()
		{
			return ((::RPG::Client::FrameCaptureManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_GET_CAPTUREMANAGER_OFFSET))(this);
		}

		::RPG::Client::UIFrameCaptureParam* get_CaptureParam()
		{
			return ((::RPG::Client::UIFrameCaptureParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_GET_CAPTUREPARAM_OFFSET))(this);
		}

		::System::Void set_CaptureParam(::RPG::Client::UIFrameCaptureParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFrameCaptureParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_SET_CAPTUREPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::UIFramePostProcessParam* get_PostProcessParam()
		{
			return ((::RPG::Client::UIFramePostProcessParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_GET_POSTPROCESSPARAM_OFFSET))(this);
		}

		::System::Void set_PostProcessParam(::RPG::Client::UIFramePostProcessParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFramePostProcessParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_SET_POSTPROCESSPARAM_OFFSET))(this, a1);
		}
	};
}
