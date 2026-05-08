#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MONO_SAFESTRINGMARSHAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B7780)
#define MONO_SAFESTRINGMARSHAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8B7740)
#define MONO_SAFESTRINGMARSHAL_GFREE_OFFSET UNITYSDK_OFFSET(0x1A096BF0)
#define MONO_SAFESTRINGMARSHAL_STRINGTOUTF8_OFFSET UNITYSDK_OFFSET(0x1A096BE0)
#define MONO_SAFESTRINGMARSHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x469CD0)

namespace Mono
{
	inline static constexpr unsigned int SafeStringMarshal_TypeDefinitionIndex = 25;

	struct alignas(8) SafeStringMarshal
	{
		::System::String* str; // 0x10
		::System::IntPtr marshaled_string; // 0x18

		::System::Void _ctor(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL__CTOR_OFFSET))(this, str);
		}

		static ::System::IntPtr StringToUtf8(::System::String* str)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_STRINGTOUTF8_OFFSET))(str);
		}

		static ::System::Void GFree(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_GFREE_OFFSET))(ptr);
		}

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SAFESTRINGMARSHAL_DISPOSE_OFFSET))(this);
		}
	};
}
