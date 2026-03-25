#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class RTCOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5B1F0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5B180)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9650)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x8D10)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int RTCOptionsInternal_TypeDefinitionIndex = 36747;

	struct alignas(8) RTCOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlatformSpecificOptions; // 0x18

		::System::IntPtr get_PlatformSpecificOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_GET_PLATFORMSPECIFICOPTIONS_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificOptions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::RTCOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::RTCOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
