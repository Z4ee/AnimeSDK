#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/RTCOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_GET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0xB3BEFD0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0xB3BF060)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0xB3BEFF0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_PLATFORMSPECIFICOPTIONS_OFFSET UNITYSDK_OFFSET(0xB3BEFE0)
#define EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB3BF1A0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int RTCOptions_TypeDefinitionIndex = 46418;

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

		::System::Void set_PlatformSpecificOptions(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_PLATFORMSPECIFICOPTIONS_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptionsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::RTCOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RTCOPTIONS_SET_1_OFFSET))(this, a1);
		}
	};
}
