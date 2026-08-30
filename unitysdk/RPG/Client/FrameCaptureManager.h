#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FrameCaptureManager_CaptureUsage.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureFeature.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FrameCaptureManager_FrameBlendingEndOPDefault; }
namespace RPG::Client { class FrameCaptureManager_FrameCaptureEndOPDefault; }

#define RPG_CLIENT_FRAMECAPTUREMANAGER_CAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x190E7250)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_ISFRAMECAPTUREFULL_OFFSET UNITYSDK_OFFSET(0x190E71C0)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_RELEASECAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x190E7350)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_STARTFRAMEBLENDING_OFFSET UNITYSDK_OFFSET(0x190E7460)
#define RPG_CLIENT_FRAMECAPTUREMANAGER__CLEARCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x190E7400)
#define RPG_CLIENT_FRAMECAPTUREMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x190E7160)

namespace RPG::Client
{
	inline static constexpr unsigned int FrameCaptureManager_TypeDefinitionIndex = 69729;

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

		::System::Boolean CaptureFrame(::RPG::CustomRP::FrameCapture_CaptureType a1, ::RPG::Client::FrameCaptureManager_CaptureUsage a2, ::RPG::CustomRP::FrameCapture_CaptureFeature a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType, ::RPG::Client::FrameCaptureManager_CaptureUsage, ::RPG::CustomRP::FrameCapture_CaptureFeature, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_CAPTUREFRAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReleaseCaptureFrame(::RPG::Client::FrameCaptureManager_CaptureUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FrameCaptureManager_CaptureUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_RELEASECAPTUREFRAME_OFFSET))(this, a1);
		}

		::System::Void StartFrameBlending(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_STARTFRAMEBLENDING_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearCaptureFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER__CLEARCAPTUREFRAME_OFFSET))(this);
		}
	};
}
