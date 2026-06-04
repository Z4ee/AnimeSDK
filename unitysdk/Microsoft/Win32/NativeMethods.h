#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }
namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System::Runtime::InteropServices { class SafeHandle; }

#define MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET UNITYSDK_OFFSET(0x1AF01C00)
#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1AF019B0)
#define MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF01830)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x1AF01BF0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x1AF01AF0)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1AF01B20)
#define MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET UNITYSDK_OFFSET(0x1AF01B00)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int NativeMethods_TypeDefinitionIndex = 2444;

	class NativeMethods : public ::System::Object
	{
	public:
		static ::System::Boolean DuplicateHandle(::System::Runtime::InteropServices::HandleRef a1, ::System::Runtime::InteropServices::SafeHandle* a2, ::System::Runtime::InteropServices::HandleRef a3, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*& a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::SafeHandle*, ::System::Runtime::InteropServices::HandleRef, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*&, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean DuplicateHandle_1(::System::Runtime::InteropServices::HandleRef a1, ::System::Runtime::InteropServices::HandleRef a2, ::System::Runtime::InteropServices::HandleRef a3, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::System::Runtime::InteropServices::HandleRef, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*&, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_DUPLICATEHANDLE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::IntPtr GetCurrentProcess()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESS_OFFSET))();
		}

		static ::System::Boolean GetExitCodeProcess(::System::IntPtr a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetExitCodeProcess_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32&))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETEXITCODEPROCESS_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetCurrentProcessId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_GETCURRENTPROCESSID_OFFSET))();
		}

		static ::System::Boolean CloseProcess(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_NATIVEMETHODS_CLOSEPROCESS_OFFSET))(a1);
		}
	};
}
