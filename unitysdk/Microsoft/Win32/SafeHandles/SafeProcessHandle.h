#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A090B70)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A090B90)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0909B0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A090B50)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeProcessHandle_TypeDefinitionIndex = 2445;

	class SafeProcessHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		static ::Microsoft::Win32::SafeHandles::SafeProcessHandle** StaticGet_InvalidHandle()
		{
			return (::Microsoft::Win32::SafeHandles::SafeProcessHandle**)Il2CppClass::FromTypeDefinitionIndex(SafeProcessHandle_TypeDefinitionIndex)->GetStaticField(0x115D0);
		}

		::System::Void _ctor(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_OFFSET))(this, handle);
		}

		::System::Void _ctor_1(::System::IntPtr existingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_1_OFFSET))(this, existingHandle, ownsHandle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
