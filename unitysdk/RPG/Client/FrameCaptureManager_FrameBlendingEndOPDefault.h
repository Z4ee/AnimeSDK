#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FrameCaptureManager; }

#define RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMEBLENDINGENDOPDEFAULT_ONBLENDINGEND_OFFSET UNITYSDK_OFFSET(0xA3CA680)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMEBLENDINGENDOPDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CA2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FrameCaptureManager_FrameBlendingEndOPDefault_TypeDefinitionIndex = 64303;

	class FrameCaptureManager_FrameBlendingEndOPDefault : public ::System::Object
	{
	public:
		::RPG::Client::FrameCaptureManager* _FrameCaptureMgrRef; // 0x10

		::System::Void _ctor(::RPG::Client::FrameCaptureManager* frameCaptureMgr)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FrameCaptureManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMEBLENDINGENDOPDEFAULT__CTOR_OFFSET))(this, frameCaptureMgr);
		}

		::System::Void OnBlendingEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMEBLENDINGENDOPDEFAULT_ONBLENDINGEND_OFFSET))(this);
		}
	};
}
