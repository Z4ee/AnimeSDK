#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EB66D0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB6660)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeMemoryMappedFileHandle_TypeDefinitionIndex = 3083;

	class SafeMemoryMappedFileHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor(::System::IntPtr preexistingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE__CTOR_OFFSET))(this, preexistingHandle, ownsHandle);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
