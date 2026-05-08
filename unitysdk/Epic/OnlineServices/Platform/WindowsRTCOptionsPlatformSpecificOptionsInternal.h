#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Platform { class WindowsRTCOptionsPlatformSpecificOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E19D0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_GET_XAUDIO29DLLPATH_OFFSET UNITYSDK_OFFSET(0x8E1680)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E18B0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E17E0)
#define EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_SET_XAUDIO29DLLPATH_OFFSET UNITYSDK_OFFSET(0x8E1730)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int WindowsRTCOptionsPlatformSpecificOptionsInternal_TypeDefinitionIndex = 34800;

	struct alignas(8) WindowsRTCOptionsPlatformSpecificOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_XAudio29DllPath; // 0x18

		::System::String* get_XAudio29DllPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_GET_XAUDIO29DLLPATH_OFFSET))(this);
		}

		::System::Void set_XAudio29DllPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_SET_XAUDIO29DLLPATH_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Platform::WindowsRTCOptionsPlatformSpecificOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_WINDOWSRTCOPTIONSPLATFORMSPECIFICOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
