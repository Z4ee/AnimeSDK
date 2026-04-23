#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class WindowsRTCOptions; }
namespace Epic::OnlineServices::Platform { class WindowsRTCOptionsPlatformSpecificOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5C6D0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x5C460)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5C6C0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x5C5C0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x5C4D0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int WindowsRTCOptionsInternal_TypeDefinitionIndex = 42579;

	struct alignas(8) WindowsRTCOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlatformSpecificOptions; // 0x18

		::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* get_PlatformSpecificOptions()
		{
			return ((::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificOptions(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::WindowsRTCOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
