#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x19A265E0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A26550)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeMemoryMappedFileHandle_TypeDefinitionIndex = 3095;

	class SafeMemoryMappedFileHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEMEMORYMAPPEDFILEHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
