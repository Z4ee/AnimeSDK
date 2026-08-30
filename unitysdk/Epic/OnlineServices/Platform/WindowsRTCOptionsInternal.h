#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class WindowsRTCOptions; }
namespace Epic::OnlineServices::Platform { class WindowsRTCOptionsPlatformSpecificOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x64050)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x63DE0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x64040)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x63F40)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x63E50)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int WindowsRTCOptionsInternal_TypeDefinitionIndex = 46425;

	struct alignas(8) WindowsRTCOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlatformSpecificOptions; // 0x18

		::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* get_PlatformSpecificOptions()
		{
			return ((::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificOptions(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::WindowsRTCOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
