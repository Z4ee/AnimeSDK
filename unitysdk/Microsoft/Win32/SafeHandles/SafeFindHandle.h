#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1CE612A0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE61260)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE61220)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeFindHandle_TypeDefinitionIndex = 103;

	class SafeFindHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr preexistingHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE__CTOR_1_OFFSET))(this, preexistingHandle);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEFINDHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
