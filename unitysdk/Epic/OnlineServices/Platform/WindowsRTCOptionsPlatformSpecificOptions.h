#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/WindowsRTCOptionsPlatformSpecificOptionsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_GET_XAUDIO29DLLPATH_OFFSET UNITYSDK_OFFSET(0x1CC59C40)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_SET_1_OFFSET UNITYSDK_OFFSET(0x1CC59DA0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_SET_OFFSET UNITYSDK_OFFSET(0x1CC59C60)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_SET_XAUDIO29DLLPATH_OFFSET UNITYSDK_OFFSET(0x1CC59C50)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC59FC0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int WindowsRTCOptionsPlatformSpecificOptions_TypeDefinitionIndex = 36362;

	class WindowsRTCOptionsPlatformSpecificOptions : public ::System::Object
	{
	public:
		::System::String* _XAudio29DllPath_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_XAudio29DllPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_GET_XAUDIO29DLLPATH_OFFSET))(this);
		}

		::System::Void set_XAudio29DllPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_SET_XAUDIO29DLLPATH_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptionsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONS_SET_1_OFFSET))(this, other);
		}
	};
}
