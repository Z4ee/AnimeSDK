#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_3.h"

#define MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD91A20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_ResolutionChangedEvent_TypeDefinitionIndex = 35387;

	class BrowserWin32Helper_ResolutionChangedEvent : public ::UnityEngine::Events::UnityEvent_3<::System::Int32, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_RESOLUTIONCHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
