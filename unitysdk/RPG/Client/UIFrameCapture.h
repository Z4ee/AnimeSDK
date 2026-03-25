#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FrameCaptureManager; }
namespace RPG::Client { class UIFrameCaptureParam; }
namespace RPG::Client { class UIFramePostProcessParam; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAMEWITHPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xA691850)
#define RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0xA6913E0)
#define RPG_CLIENT_UIFRAMECAPTURE_GET_CAPTUREMANAGER_OFFSET UNITYSDK_OFFSET(0xA691610)
#define RPG_CLIENT_UIFRAMECAPTURE_GET_CAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA691B00)
#define RPG_CLIENT_UIFRAMECAPTURE_GET_POSTPROCESSPARAM_OFFSET UNITYSDK_OFFSET(0xA691B20)
#define RPG_CLIENT_UIFRAMECAPTURE_RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0xA685FE0)
#define RPG_CLIENT_UIFRAMECAPTURE_SET_CAPTUREPARAM_OFFSET UNITYSDK_OFFSET(0xA691B10)
#define RPG_CLIENT_UIFRAMECAPTURE_SET_POSTPROCESSPARAM_OFFSET UNITYSDK_OFFSET(0xA691B30)
#define RPG_CLIENT_UIFRAMECAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0xA67DEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIFrameCapture_TypeDefinitionIndex = 59881;

	class UIFrameCapture : public ::System::Object
	{
	public:
		::RPG::Client::UIFramePostProcessParam* _PostProcessParam_k__BackingField; // 0x10
		::RPG::Client::UIFrameCaptureParam* _CaptureParam_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* CaptureFrame(::RPG::Client::UIFrameCaptureParam* captureParam)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::RPG::Client::UIFrameCaptureParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAME_OFFSET))(this, captureParam);
		}

		::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>* CaptureFrameWithPostProcess(::RPG::Client::UIFrameCaptureParam* captureParam, ::RPG::Client::UIFramePostProcessParam* postProcessParam)
		{
			return ((::RPG::Client::Promises::Promise_1<::UnityEngine::Texture*>*(*)(::PVOID, ::RPG::Client::UIFrameCaptureParam*, ::RPG::Client::UIFramePostProcessParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_CAPTUREFRAMEWITHPOSTPROCESS_OFFSET))(this, captureParam, postProcessParam);
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

		::System::Void set_CaptureParam(::RPG::Client::UIFrameCaptureParam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFrameCaptureParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_SET_CAPTUREPARAM_OFFSET))(this, value);
		}

		::RPG::Client::UIFramePostProcessParam* get_PostProcessParam()
		{
			return ((::RPG::Client::UIFramePostProcessParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_GET_POSTPROCESSPARAM_OFFSET))(this);
		}

		::System::Void set_PostProcessParam(::RPG::Client::UIFramePostProcessParam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFramePostProcessParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIFRAMECAPTURE_SET_POSTPROCESSPARAM_OFFSET))(this, value);
		}
	};
}
