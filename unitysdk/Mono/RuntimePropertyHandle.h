#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMEPROPERTYHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x382CCB0)
#define MONO_RUNTIMEPROPERTYHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define MONO_RUNTIMEPROPERTYHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5B60)
#define MONO_RUNTIMEPROPERTYHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace Mono
{
	inline static constexpr unsigned int RuntimePropertyHandle_TypeDefinitionIndex = 9;

	struct alignas(8) RuntimePropertyHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
