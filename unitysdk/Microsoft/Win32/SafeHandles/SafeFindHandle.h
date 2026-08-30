#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1BB48C50)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB48C30)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeFindHandle_TypeDefinitionIndex = 115;

	class SafeFindHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
