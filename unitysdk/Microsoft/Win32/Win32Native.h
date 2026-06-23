#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MICROSOFT_WIN32_WIN32NATIVE_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C9C05A0)
#define MICROSOFT_WIN32_WIN32NATIVE_MAKEHRFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x1C9C05F0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Win32Native_TypeDefinitionIndex = 100;

	class Win32Native : public ::System::Object
	{
	public:
		static ::System::String* GetMessage(::System::Int32 hr)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_GETMESSAGE_OFFSET))(hr);
		}

		static ::System::Int32 MakeHRFromErrorCode(::System::Int32 errorCode)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_MAKEHRFROMERRORCODE_OFFSET))(errorCode);
		}
	};
}
