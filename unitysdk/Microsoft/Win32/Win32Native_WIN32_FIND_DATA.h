#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MICROSOFT_WIN32_WIN32NATIVE_WIN32_FIND_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58F140)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Win32Native_WIN32_FIND_DATA_TypeDefinitionIndex = 101;

	class Win32Native_WIN32_FIND_DATA : public ::System::Object
	{
	public:
		::System::String* cFileName; // 0x10
		::System::Int32 dwFileAttributes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_WIN32NATIVE_WIN32_FIND_DATA__CTOR_OFFSET))(this);
		}
	};
}
