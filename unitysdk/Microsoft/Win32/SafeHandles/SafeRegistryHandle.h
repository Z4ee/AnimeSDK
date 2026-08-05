#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1DBEFB40)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBEFA80)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBEFA40)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeRegistryHandle_TypeDefinitionIndex = 104;

	class SafeRegistryHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr preexistingHandle, ::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE__CTOR_1_OFFSET))(this, preexistingHandle, ownsHandle);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEREGISTRYHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
