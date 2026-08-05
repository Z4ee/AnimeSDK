#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MICROSOFT_WIN32_EXPANDSTRING_EXPAND_OFFSET UNITYSDK_OFFSET(0x1E3FABB0)
#define MICROSOFT_WIN32_EXPANDSTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FABA0)
#define MICROSOFT_WIN32_EXPANDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FAB90)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int ExpandString_TypeDefinitionIndex = 95;

	class ExpandString : public ::System::Object
	{
	public:
		::System::String* value; // 0x10

		::System::Void _ctor(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_EXPANDSTRING__CTOR_OFFSET))(this, s);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_EXPANDSTRING_TOSTRING_OFFSET))(this);
		}

		::System::String* Expand()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_EXPANDSTRING_EXPAND_OFFSET))(this);
		}
	};
}
