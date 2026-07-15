#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/WindowsRTCOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Platform { class WindowsRTCOptionsPlatformSpecificOptions; }

#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C237830)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0x1C2379B0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0x1C237850)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C237840)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C237B60)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int WindowsRTCOptions_TypeDefinitionIndex = 44242;

	class WindowsRTCOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* _PlatformSpecificOptions_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* get_PlatformSpecificOptions()
		{
			return ((::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_GET_PLATFORMSPECIFICOPTIONS_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificOptions(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONS_SET_1_OFFSET))(this, a1);
		}
	};
}
