#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET UNITYSDK_OFFSET(0x1A090B30)
#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1A090900)
#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A090780)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x1A090B20)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x1A090A20)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1A090A50)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET UNITYSDK_OFFSET(0x1A090A30)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 2444;

	class NativeMethods : public ::System::Object
	{
	public:
		static ::System::Boolean DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::SafeHandle* hSourceHandle, ::System::Runtime::InteropServices::HandleRef hTargetProcess, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*& targetHandle, ::System::Int32 dwDesiredAccess, ::System::Boolean bInheritHandle, ::System::Int32 dwOptions)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::SafeHandle*, ::System::Runtime::InteropServices::HandleRef, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*&, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET))(hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
		}

		static ::System::Boolean DuplicateHandle_1(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef hSourceHandle, ::System::Runtime::InteropServices::HandleRef hTargetProcess, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& targetHandle, ::System::Int32 dwDesiredAccess, ::System::Boolean bInheritHandle, ::System::Int32 dwOptions)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*&, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_1_OFFSET))(hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
		}

		static ::System::IntPtr GetCurrentProcess()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET))();
		}

		static ::System::Boolean GetExitCodeProcess(::System::IntPtr processHandle, ::System::Int32& exitCode)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET))(processHandle, exitCode);
		}

		static ::System::Boolean GetExitCodeProcess_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ::System::Int32& exitCode)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_1_OFFSET))(processHandle, exitCode);
		}

		static ::System::Int32 GetCurrentProcessId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET))();
		}

		static ::System::Boolean CloseProcess(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET))(handle);
		}
	};
}
