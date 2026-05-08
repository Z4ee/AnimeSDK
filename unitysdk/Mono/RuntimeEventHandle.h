#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x814580)
#define MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E87C0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeEventHandle_TypeDefinitionIndex = 11;

	struct alignas(8) RuntimeEventHandle
	{
		::System::IntPtr value; // 0x10

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET))(this);
		}
	};
}
