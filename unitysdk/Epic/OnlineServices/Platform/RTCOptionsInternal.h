#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class RTCOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x60EA0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x60D0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x60E20)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9F00)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x95B0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int RTCOptionsInternal_TypeDefinitionIndex = 43376;

	struct alignas(8) RTCOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlatformSpecificOptions; // 0x18

		::System::IntPtr get_PlatformSpecificOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificOptions(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::RTCOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::RTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
