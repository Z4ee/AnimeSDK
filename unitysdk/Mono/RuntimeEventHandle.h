#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AA63E0)
#define MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define MONO_RUNTIMEEVENTHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x161E0)
#define MONO_RUNTIMEEVENTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace Mono
{
	inline static constexpr unsigned int RuntimeEventHandle_TypeDefinitionIndex = 8;

	struct alignas(8) RuntimeEventHandle
	{
		::System::IntPtr value; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE__CTOR_OFFSET))(this, a1);
		}

		::System::IntPtr get_Value()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
