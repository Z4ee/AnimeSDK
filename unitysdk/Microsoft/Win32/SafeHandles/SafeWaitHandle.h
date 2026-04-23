#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1778D9F0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1778D980)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeWaitHandle_TypeDefinitionIndex = 117;

	class SafeWaitHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor(::System::IntPtr existingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE__CTOR_OFFSET))(this, existingHandle, ownsHandle);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEWAITHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
