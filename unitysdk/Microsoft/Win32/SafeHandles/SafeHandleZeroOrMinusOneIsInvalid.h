#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x1A96D800)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96D750)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeHandleZeroOrMinusOneIsInvalid_TypeDefinitionIndex = 106;

	class SafeHandleZeroOrMinusOneIsInvalid : public ::System::Runtime::InteropServices::SafeHandle
	{
	public:
		::System::Void _ctor(::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID__CTOR_OFFSET))(this, ownsHandle);
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEHANDLEZEROORMINUSONEISINVALID_GET_ISINVALID_OFFSET))(this);
		}
	};
}
