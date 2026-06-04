#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/Native/OS/Win32_TOKEN_INFORMATION_CLASS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1837E880)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CONVERTSIDTOSTRINGSID_OFFSET UNITYSDK_OFFSET(0x1837E900)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETCURRENTUSERSID_OFFSET UNITYSDK_OFFSET(0x1837F5C0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETSIDFROMPROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1837EBC0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETTOKENINFORMATION_OFFSET UNITYSDK_OFFSET(0x1837E790)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_ISPROTOCOLREGISTERED_OFFSET UNITYSDK_OFFSET(0x1837F490)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_LAUNCHURI_OFFSET UNITYSDK_OFFSET(0x1837F890)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_LOCALFREE_OFFSET UNITYSDK_OFFSET(0x1837E9D0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_OPENPROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1837E6C0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_SHELLEXECUTE_OFFSET UNITYSDK_OFFSET(0x1837EAA0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32__CTOR_OFFSET UNITYSDK_OFFSET(0x1837FDA0)

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32_TypeDefinitionIndex = 8399;

	class Win32 : public ::System::Object
	{
	public:
		// static const ::System::Int32 TOKEN_QUERY = 0x8; // 0x0
		// static const ::System::Int32 SW_SHOWNORMAL = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32__CTOR_OFFSET))(this);
		}

		static ::System::Boolean OpenProcessToken(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_OPENPROCESSTOKEN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetTokenInformation(::System::IntPtr a1, ::MiHoYo::SDK::PC::Native::OS::Win32_TOKEN_INFORMATION_CLASS a2, ::System::IntPtr a3, ::System::Int32 a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::PC::Native::OS::Win32_TOKEN_INFORMATION_CLASS, ::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETTOKENINFORMATION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CloseHandle(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CLOSEHANDLE_OFFSET))(a1);
		}

		static ::System::Boolean ConvertSidToStringSid(::System::IntPtr a1, ::System::IntPtr& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CONVERTSIDTOSTRINGSID_OFFSET))(a1, a2);
		}

		static ::System::IntPtr LocalFree(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_LOCALFREE_OFFSET))(a1);
		}

		static ::System::IntPtr ShellExecute(::System::IntPtr a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_SHELLEXECUTE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* GetSidFromProcessToken(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETSIDFROMPROCESSTOKEN_OFFSET))(a1);
		}

		static ::System::Boolean IsProtocolRegistered(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_ISPROTOCOLREGISTERED_OFFSET))(a1);
		}

		static ::System::String* GetCurrentUserSid()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETCURRENTUSERSID_OFFSET))();
		}

		static ::System::Boolean LaunchUri(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_LAUNCHURI_OFFSET))(a1);
		}
	};
}
