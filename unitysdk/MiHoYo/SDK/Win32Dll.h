#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Win32Dll_PROCESS_MEMORY_COUNTERS.h"
#include "unitysdk/MiHoYo/SDK/Win32Dll_THREADENTRY32.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WIN32DLL_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x199CBA80)
#define MIHOYO_SDK_WIN32DLL_CREATETOOLHELP32SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x199CB810)
#define MIHOYO_SDK_WIN32DLL_GETPROCESSMEMORYINFO_OFFSET UNITYSDK_OFFSET(0x199CBBD0)
#define MIHOYO_SDK_WIN32DLL_OPENPROCESS_OFFSET UNITYSDK_OFFSET(0x199CBB40)
#define MIHOYO_SDK_WIN32DLL_THREAD32FIRST_OFFSET UNITYSDK_OFFSET(0x199CB8E0)
#define MIHOYO_SDK_WIN32DLL_THREAD32NEXT_OFFSET UNITYSDK_OFFSET(0x199CB9B0)
#define MIHOYO_SDK_WIN32DLL__CTOR_OFFSET UNITYSDK_OFFSET(0x199CBCA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Win32Dll_TypeDefinitionIndex = 18809;

	class Win32Dll : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr CreateToolhelp32Snapshot(::System::UInt32 dwFlags, ::System::UInt32 th32ProcessID)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_CREATETOOLHELP32SNAPSHOT_OFFSET))(dwFlags, th32ProcessID);
		}

		static ::System::Boolean Thread32First(::System::IntPtr hSnapshot, ::MiHoYo::SDK::Win32Dll_THREADENTRY32& lpte)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::Win32Dll_THREADENTRY32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_THREAD32FIRST_OFFSET))(hSnapshot, lpte);
		}

		static ::System::Boolean Thread32Next(::System::IntPtr hSnapshot, ::MiHoYo::SDK::Win32Dll_THREADENTRY32& lpte)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::Win32Dll_THREADENTRY32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_THREAD32NEXT_OFFSET))(hSnapshot, lpte);
		}

		static ::System::Boolean CloseHandle(::System::IntPtr hObject)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_CLOSEHANDLE_OFFSET))(hObject);
		}

		static ::System::IntPtr OpenProcess(::System::UInt32 dwDesiredAccess, ::System::Boolean bInheritHandle, ::System::Int32 dwProcessId)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_OPENPROCESS_OFFSET))(dwDesiredAccess, bInheritHandle, dwProcessId);
		}

		static ::System::Boolean GetProcessMemoryInfo(::System::IntPtr hProcess, ::MiHoYo::SDK::Win32Dll_PROCESS_MEMORY_COUNTERS& counters, ::System::UInt32 size)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::Win32Dll_PROCESS_MEMORY_COUNTERS&, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_GETPROCESSMEMORYINFO_OFFSET))(hProcess, counters, size);
		}
	};
}
