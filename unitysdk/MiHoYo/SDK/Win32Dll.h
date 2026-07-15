#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Win32Dll_PROCESS_MEMORY_COUNTERS.h"
#include "unitysdk/MiHoYo/SDK/Win32Dll_THREADENTRY32.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WIN32DLL_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D105BF0)
#define MIHOYO_SDK_WIN32DLL_CREATETOOLHELP32SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1D105980)
#define MIHOYO_SDK_WIN32DLL_GETPROCESSMEMORYINFO_OFFSET UNITYSDK_OFFSET(0x1D105D40)
#define MIHOYO_SDK_WIN32DLL_OPENPROCESS_OFFSET UNITYSDK_OFFSET(0x1D105CB0)
#define MIHOYO_SDK_WIN32DLL_THREAD32FIRST_OFFSET UNITYSDK_OFFSET(0x1D105A50)
#define MIHOYO_SDK_WIN32DLL_THREAD32NEXT_OFFSET UNITYSDK_OFFSET(0x1D105B20)
#define MIHOYO_SDK_WIN32DLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D105E10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Win32Dll_TypeDefinitionIndex = 7896;

	class Win32Dll : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr CreateToolhelp32Snapshot(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_CREATETOOLHELP32SNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::Boolean Thread32First(::System::IntPtr a1, ::MiHoYo::SDK::Win32Dll_THREADENTRY32& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::Win32Dll_THREADENTRY32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_THREAD32FIRST_OFFSET))(a1, a2);
		}

		static ::System::Boolean Thread32Next(::System::IntPtr a1, ::MiHoYo::SDK::Win32Dll_THREADENTRY32& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::Win32Dll_THREADENTRY32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_THREAD32NEXT_OFFSET))(a1, a2);
		}

		static ::System::Boolean CloseHandle(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_CLOSEHANDLE_OFFSET))(a1);
		}

		static ::System::IntPtr OpenProcess(::System::UInt32 a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_OPENPROCESS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetProcessMemoryInfo(::System::IntPtr a1, ::MiHoYo::SDK::Win32Dll_PROCESS_MEMORY_COUNTERS& a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::MiHoYo::SDK::Win32Dll_PROCESS_MEMORY_COUNTERS&, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN32DLL_GETPROCESSMEMORYINFO_OFFSET))(a1, a2, a3);
		}
	};
}
