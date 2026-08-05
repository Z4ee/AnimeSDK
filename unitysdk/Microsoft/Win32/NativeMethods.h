#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6F1450)
#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1C6F0D60)
#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6F0BC0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x1C6F12E0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6F0E70)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1C6F0EA0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6F0E80)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETPRIORITYCLASS_1_OFFSET UNITYSDK_OFFSET(0x1C6F1300)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETPRIORITYCLASS_OFFSET UNITYSDK_OFFSET(0x1C6F12F0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSTIMES_1_OFFSET UNITYSDK_OFFSET(0x1C6F1240)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSTIMES_OFFSET UNITYSDK_OFFSET(0x1C6F1230)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSWORKINGSETSIZE_1_OFFSET UNITYSDK_OFFSET(0x1C6F10E0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSWORKINGSETSIZE_OFFSET UNITYSDK_OFFSET(0x1C6F10D0)
#define MICROSOFT_WIN32_NATIVEMETHODS_SETPRIORITYCLASS_1_OFFSET UNITYSDK_OFFSET(0x1C6F13B0)
#define MICROSOFT_WIN32_NATIVEMETHODS_SETPRIORITYCLASS_OFFSET UNITYSDK_OFFSET(0x1C6F13A0)
#define MICROSOFT_WIN32_NATIVEMETHODS_SETPROCESSWORKINGSETSIZE_1_OFFSET UNITYSDK_OFFSET(0x1C6F1190)
#define MICROSOFT_WIN32_NATIVEMETHODS_SETPROCESSWORKINGSETSIZE_OFFSET UNITYSDK_OFFSET(0x1C6F1180)
#define MICROSOFT_WIN32_NATIVEMETHODS_TERMINATEPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1C6F0F80)
#define MICROSOFT_WIN32_NATIVEMETHODS_TERMINATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6F0F70)
#define MICROSOFT_WIN32_NATIVEMETHODS_WAITFORINPUTIDLE_1_OFFSET UNITYSDK_OFFSET(0x1C6F1030)
#define MICROSOFT_WIN32_NATIVEMETHODS_WAITFORINPUTIDLE_OFFSET UNITYSDK_OFFSET(0x1C6F1020)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 2652;

	class NativeMethods : public ::System::Object
	{
	public:
		// static const ::System::Int32 E_ABORT = 0x80004004; // 0x0
		// static const ::System::Int32 PROCESS_TERMINATE = 0x1; // 0x0
		// static const ::System::Int32 PROCESS_CREATE_THREAD = 0x2; // 0x0
		// static const ::System::Int32 PROCESS_SET_SESSIONID = 0x4; // 0x0
		// static const ::System::Int32 PROCESS_VM_OPERATION = 0x8; // 0x0
		// static const ::System::Int32 PROCESS_VM_READ = 0x10; // 0x0
		// static const ::System::Int32 PROCESS_VM_WRITE = 0x20; // 0x0
		// static const ::System::Int32 PROCESS_DUP_HANDLE = 0x40; // 0x0
		// static const ::System::Int32 PROCESS_CREATE_PROCESS = 0x80; // 0x0
		// static const ::System::Int32 PROCESS_SET_QUOTA = 0x100; // 0x0
		// static const ::System::Int32 PROCESS_SET_INFORMATION = 0x200; // 0x0
		// static const ::System::Int32 PROCESS_QUERY_INFORMATION = 0x400; // 0x0
		// static const ::System::Int32 PROCESS_QUERY_LIMITED_INFORMATION = 0x1000; // 0x0
		// static const ::System::Int32 STANDARD_RIGHTS_REQUIRED = 0xF0000; // 0x0
		// static const ::System::Int32 Field_1_19 = 0x100000; // 0x0
		// static const ::System::Int32 PROCESS_ALL_ACCESS = 0x1F0FFF; // 0x0
		// static const ::System::Int32 DUPLICATE_CLOSE_SOURCE = 0x1; // 0x0
		// static const ::System::Int32 DUPLICATE_SAME_ACCESS = 0x2; // 0x0
		// static const ::System::Int32 STILL_ACTIVE = 0x103; // 0x0
		// static const ::System::Int32 WAIT_OBJECT_0 = 0x0; // 0x0
		// static const ::System::Int32 WAIT_FAILED = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 WAIT_TIMEOUT = 0x102; // 0x0
		// static const ::System::Int32 WAIT_ABANDONED = 0x80; // 0x0
		// static const ::System::Int32 WAIT_ABANDONED_0 = 0x80; // 0x0
		// static const ::System::Int32 ERROR_FILE_NOT_FOUND = 0x2; // 0x0
		// static const ::System::Int32 ERROR_PATH_NOT_FOUND = 0x3; // 0x0
		// static const ::System::Int32 ERROR_ACCESS_DENIED = 0x5; // 0x0
		// static const ::System::Int32 ERROR_INVALID_HANDLE = 0x6; // 0x0
		// static const ::System::Int32 ERROR_SHARING_VIOLATION = 0x20; // 0x0
		// static const ::System::Int32 ERROR_INVALID_NAME = 0x7B; // 0x0
		// static const ::System::Int32 ERROR_ALREADY_EXISTS = 0xB7; // 0x0
		// static const ::System::Int32 ERROR_FILENAME_EXCED_RANGE = 0xCE; // 0x0

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

		static ::System::Boolean TerminateProcess(::System::IntPtr processHandle, ::System::Int32 exitCode)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_TERMINATEPROCESS_OFFSET))(processHandle, exitCode);
		}

		static ::System::Boolean TerminateProcess_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ::System::Int32 exitCode)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_TERMINATEPROCESS_1_OFFSET))(processHandle, exitCode);
		}

		static ::System::Int32 WaitForInputIdle(::System::IntPtr handle, ::System::Int32 milliseconds)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_WAITFORINPUTIDLE_OFFSET))(handle, milliseconds);
		}

		static ::System::Int32 WaitForInputIdle_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::System::Int32 milliseconds)
		{
			return ((::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_WAITFORINPUTIDLE_1_OFFSET))(handle, milliseconds);
		}

		static ::System::Boolean GetProcessWorkingSetSize(::System::IntPtr handle, ::System::IntPtr& min, ::System::IntPtr& max)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSWORKINGSETSIZE_OFFSET))(handle, min, max);
		}

		static ::System::Boolean GetProcessWorkingSetSize_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::System::IntPtr& min, ::System::IntPtr& max)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSWORKINGSETSIZE_1_OFFSET))(handle, min, max);
		}

		static ::System::Boolean SetProcessWorkingSetSize(::System::IntPtr handle, ::System::IntPtr min, ::System::IntPtr max)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_SETPROCESSWORKINGSETSIZE_OFFSET))(handle, min, max);
		}

		static ::System::Boolean SetProcessWorkingSetSize_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::System::IntPtr min, ::System::IntPtr max)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_SETPROCESSWORKINGSETSIZE_1_OFFSET))(handle, min, max);
		}

		static ::System::Boolean GetProcessTimes(::System::IntPtr handle, ::System::Int64& creation, ::System::Int64& exit, ::System::Int64& kernel, ::System::Int64& user)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int64&, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSTIMES_OFFSET))(handle, creation, exit, kernel, user);
		}

		static ::System::Boolean GetProcessTimes_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::System::Int64& creation, ::System::Int64& exit, ::System::Int64& kernel, ::System::Int64& user)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int64&, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETPROCESSTIMES_1_OFFSET))(handle, creation, exit, kernel, user);
		}

		static ::System::Int32 GetCurrentProcessId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET))();
		}

		static ::System::Int32 GetPriorityClass(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETPRIORITYCLASS_OFFSET))(handle);
		}

		static ::System::Int32 GetPriorityClass_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle)
		{
			return ((::System::Int32(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETPRIORITYCLASS_1_OFFSET))(handle);
		}

		static ::System::Boolean SetPriorityClass(::System::IntPtr handle, ::System::Int32 priorityClass)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_SETPRIORITYCLASS_OFFSET))(handle, priorityClass);
		}

		static ::System::Boolean SetPriorityClass_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::System::Int32 priorityClass)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_SETPRIORITYCLASS_1_OFFSET))(handle, priorityClass);
		}

		static ::System::Boolean CloseProcess(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET))(handle);
		}
	};
}
