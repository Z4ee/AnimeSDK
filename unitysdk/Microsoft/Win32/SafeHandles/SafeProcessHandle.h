#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_INITIALSETHANDLE_OFFSET UNITYSDK_OFFSET(0x19E219D0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x19E219E0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E21A00)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E218D0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19E21910)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E21890)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeProcessHandle_TypeDefinitionIndex = 2654;

	class SafeProcessHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		static ::Microsoft::Win32::SafeHandles::SafeProcessHandle** StaticGet_InvalidHandle()
		{
			return (::Microsoft::Win32::SafeHandles::SafeProcessHandle**)Il2CppClass::FromTypeDefinitionIndex(SafeProcessHandle_TypeDefinitionIndex)->GetStaticField(0x3220);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_1_OFFSET))(this, handle);
		}

		::System::Void _ctor_2(::System::IntPtr existingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CTOR_2_OFFSET))(this, existingHandle, ownsHandle);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE__CCTOR_OFFSET))();
		}

		::System::Void InitialSetHandle(::System::IntPtr h)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_INITIALSETHANDLE_OFFSET))(this, h);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
