#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FrameCaptureManager_CaptureUsage.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FrameCaptureManager_FrameBlendingEndOPDefault; }
namespace RPG::Client { class FrameCaptureManager_FrameCaptureEndOPDefault; }

#define RPG_CLIENT_FRAMECAPTUREMANAGER_CAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x9709F70)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_ISFRAMECAPTUREFULL_OFFSET UNITYSDK_OFFSET(0x9709EE0)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_RELEASECAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x970A070)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_STARTFRAMEBLENDING_OFFSET UNITYSDK_OFFSET(0x970A180)
#define RPG_CLIENT_FRAMECAPTUREMANAGER__CLEARCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x970A120)
#define RPG_CLIENT_FRAMECAPTUREMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9709E80)

namespace RPG::Client
{
	inline static constexpr unsigned int FrameCaptureManager_TypeDefinitionIndex = 57049;

	class FrameCaptureManager : public ::System::Object
	{
	public:
		::RPG::Client::FrameCaptureManager_FrameCaptureEndOPDefault* _FrameCaptureEndOp; // 0x10
		::RPG::Client::FrameCaptureManager_FrameBlendingEndOPDefault* _FrameBlendingEndOp; // 0x18
		::RPG::Client::FrameCaptureManager_CaptureUsage _CurrentCaptureUsage; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsFrameCaptureFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_ISFRAMECAPTUREFULL_OFFSET))(this);
		}

		::System::Boolean CaptureFrame(::RPG::CustomRP::FrameCapture_CaptureType eCaptureType, ::RPG::Client::FrameCaptureManager_CaptureUsage eUsage, ::RPG::CustomRP::FrameCapture_CaptureFeature eCaptureFeature, ::System::Single fRenderScale)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::Client::FrameCaptureManager_CaptureUsage, ::RPG::CustomRP::FrameCapture_CaptureFeature, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_CAPTUREFRAME_OFFSET))(this, eCaptureType, eUsage, eCaptureFeature, fRenderScale);
		}

		::System::Void ReleaseCaptureFrame(::RPG::Client::FrameCaptureManager_CaptureUsage usage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FrameCaptureManager_CaptureUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_RELEASECAPTUREFRAME_OFFSET))(this, usage);
		}

		::System::Void StartFrameBlending(::System::Single startWeight, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_STARTFRAMEBLENDING_OFFSET))(this, startWeight, duration);
		}

		::System::Void _ClearCaptureFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER__CLEARCAPTUREFRAME_OFFSET))(this);
		}
	};
}
