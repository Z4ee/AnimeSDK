#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x16DDD700)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x16DDD540)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeHandleZeroOrMinusOneIsInvalid_TypeDefinitionIndex = 118;

	class SafeHandleZeroOrMinusOneIsInvalid : public ::System::Runtime::InteropServices::SafeHandle
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_GET_ISINVALID_OFFSET))(this);
		}
	};
}
