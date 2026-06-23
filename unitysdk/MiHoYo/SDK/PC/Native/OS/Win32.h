#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/Native/OS/Win32_TOKEN_INFORMATION_CLASS.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CHECKHANDHELD_OFFSET UNITYSDK_OFFSET(0x1BC91E80)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1BC90D80)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_CONVERTSIDTOSTRINGSID_OFFSET UNITYSDK_OFFSET(0x1BC90E00)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETCURRENTUSERSID_OFFSET UNITYSDK_OFFSET(0x1BC8D8A0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETSIDFROMPROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BC91180)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETTOKENINFORMATION_OFFSET UNITYSDK_OFFSET(0x1BC90C90)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_ISPROTOCOLREGISTERED_OFFSET UNITYSDK_OFFSET(0x1BC91830)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_LAUNCHURI_OFFSET UNITYSDK_OFFSET(0x1BC91960)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_LOCALFREE_OFFSET UNITYSDK_OFFSET(0x1BC90ED0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_OPENPROCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1BC90BC0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_RTLGETDEVICEFAMILYINFOENUM_OFFSET UNITYSDK_OFFSET(0x1BC910C0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32_SHELLEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC90FA0)
#define MIHOYO_SDK_PC_NATIVE_OS_WIN32__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC92010)

namespace MiHoYo::SDK::PC::Native::OS
{
	inline static constexpr unsigned int Win32_TypeDefinitionIndex = 20239;

	class Win32 : public ::System::Object
	{
	public:
		// static const ::System::Int32 TOKEN_QUERY = 0x8; // 0x0
		// static const ::System::Int32 SW_SHOWNORMAL = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32__CTOR_OFFSET))(this);
		}

		static ::System::Boolean OpenProcessToken(::System::IntPtr ProcessHandle, ::System::Int32 DesiredAccess, ::System::IntPtr& TokenHandle)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_OPENPROCESSTOKEN_OFFSET))(ProcessHandle, DesiredAccess, TokenHandle);
		}

		static ::System::Boolean GetTokenInformation(::System::IntPtr hToken, ::MiHoYo::SDK::PC::Native::OS::Win32_TOKEN_INFORMATION_CLASS tokenInfoClass, ::System::IntPtr TokenInformation, ::System::Int32 tokeInfoLength, ::System::Int32& reqLength)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::PC::Native::OS::Win32_TOKEN_INFORMATION_CLASS, ::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETTOKENINFORMATION_OFFSET))(hToken, tokenInfoClass, TokenInformation, tokeInfoLength, reqLength);
		}

		static ::System::Boolean CloseHandle(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CLOSEHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean ConvertSidToStringSid(::System::IntPtr pSid, ::System::IntPtr& strSid)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CONVERTSIDTOSTRINGSID_OFFSET))(pSid, strSid);
		}

		static ::System::IntPtr LocalFree(::System::IntPtr hMem)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_LOCALFREE_OFFSET))(hMem);
		}

		static ::System::IntPtr ShellExecute(::System::IntPtr hwnd, ::System::String* lpVerb, ::System::String* lpFile, ::System::String* lpParameters, ::System::String* lpDirectory, ::System::Int32 nShowCmd)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_SHELLEXECUTE_OFFSET))(hwnd, lpVerb, lpFile, lpParameters, lpDirectory, nShowCmd);
		}

		static ::System::Void RtlGetDeviceFamilyInfoEnum(::System::UInt64& UAPInfo, ::System::UInt32& DeviceFamily, ::System::UInt32& DeviceForm)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_RTLGETDEVICEFAMILYINFOENUM_OFFSET))(UAPInfo, DeviceFamily, DeviceForm);
		}

		static ::System::String* GetSidFromProcessToken(::System::IntPtr token)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETSIDFROMPROCESSTOKEN_OFFSET))(token);
		}

		static ::System::Boolean IsProtocolRegistered(::System::String* protocol)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_ISPROTOCOLREGISTERED_OFFSET))(protocol);
		}

		static ::System::String* GetCurrentUserSid()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_GETCURRENTUSERSID_OFFSET))();
		}

		static ::System::Boolean LaunchUri(::System::String* uri)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_LAUNCHURI_OFFSET))(uri);
		}

		static ::System::Boolean CheckHandheld()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_NATIVE_OS_WIN32_CHECKHANDHELD_OFFSET))();
		}
	};
}
