#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEX509CHAINHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x1DAA82E0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEX509CHAINHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAA8330)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEX509CHAINHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8280)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeX509ChainHandle_TypeDefinitionIndex = 2654;

	class SafeX509ChainHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Void _ctor(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEX509CHAINHANDLE__CTOR_OFFSET))(this, handle);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEX509CHAINHANDLE__CTOR_1_OFFSET))(this);
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEX509CHAINHANDLE_RELEASEHANDLE_OFFSET))(this);
		}
	};
}
