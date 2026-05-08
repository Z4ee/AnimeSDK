#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1AC40110)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC40050)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC40010)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeWaitHandle_TypeDefinitionIndex = 105;

	class SafeWaitHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr existingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE__CTOR_1_OFFSET))(this, existingHandle, ownsHandle);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
