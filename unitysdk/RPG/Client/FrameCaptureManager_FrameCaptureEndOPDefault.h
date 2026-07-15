#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMECAPTUREENDOPDEFAULT_ONFRAMECAPTUREEND_OFFSET UNITYSDK_OFFSET(0x16D1A0B0)
#define RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMECAPTUREENDOPDEFAULT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D19CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FrameCaptureManager_FrameCaptureEndOPDefault_TypeDefinitionIndex = 66633;

	class FrameCaptureManager_FrameCaptureEndOPDefault : public ::System::Object
	{
	public:
		::UnityEngine::UI::RawImage* RTOwner; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMECAPTUREENDOPDEFAULT__CTOR_OFFSET))(this);
		}

		::System::Void OnFrameCaptureEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRAMECAPTUREMANAGER_FRAMECAPTUREENDOPDEFAULT_ONFRAMECAPTUREEND_OFFSET))(this);
		}
	};
}
