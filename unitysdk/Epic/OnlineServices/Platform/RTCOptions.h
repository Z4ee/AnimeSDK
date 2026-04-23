#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/RTCOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x8EEC700)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0x8EEC790)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0x8EEC720)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0x8EEC710)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EEC8C0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int RTCOptions_TypeDefinitionIndex = 42572;

	class RTCOptions : public ::System::Object
	{
	public:
		::System::IntPtr _PlatformSpecificOptions_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PlatformSpecificOptions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_GET_PLATFORMSPECIFICOPTIONS_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificOptions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptionsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_1_OFFSET))(this, other);
		}
	};
}
