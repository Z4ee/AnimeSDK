#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x16161C70)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x161611B0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeRegistryHandle_TypeDefinitionIndex = 116;

	class SafeRegistryHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor(::System::IntPtr preexistingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE__CTOR_OFFSET))(this, preexistingHandle, ownsHandle);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
