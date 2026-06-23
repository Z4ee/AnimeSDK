#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMEPROPERTYHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9CDF50)
#define MONO_RUNTIMEPROPERTYHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)

namespace Mono
{
	inline static constexpr unsigned int RuntimePropertyHandle_TypeDefinitionIndex = 12;

	struct alignas(8) RuntimePropertyHandle
	{
		::System::IntPtr value; // 0x10

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
