#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MICROSOFT_WIN32_WIN32NATIVE_GETCURRENTPROCESSID_OFFSET UNITYSDK_OFFSET(0x16DDE5F0)
#define MICROSOFT_WIN32_WIN32NATIVE_GETMESSAGE_OFFSET UNITYSDK_OFFSET(0x16DDE590)
#define MICROSOFT_WIN32_WIN32NATIVE_MAKEHRFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x16DDE5E0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Win32Native_TypeDefinitionIndex = 112;

	class Win32Native : public ::System::Object
	{
	public:
		static ::System::String* GetMessage(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_GETMESSAGE_OFFSET))(a1);
		}

		static ::System::Int32 MakeHRFromErrorCode(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_MAKEHRFROMERRORCODE_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurrentProcessId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_GETCURRENTPROCESSID_OFFSET))();
		}
	};
}
