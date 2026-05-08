#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0x48CD40)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x304470)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DE4A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnit_TypeDefinitionIndex = 28524;

	struct alignas(1) AsyncUnit
	{
		static ::Cysharp::Threading::Tasks::AsyncUnit* StaticGet_Default()
		{
			return (::Cysharp::Threading::Tasks::AsyncUnit*)Il2CppClass::FromTypeDefinitionIndex(AsyncUnit_TypeDefinitionIndex)->GetStaticField(0x4AF0);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::Cysharp::Threading::Tasks::AsyncUnit other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cysharp::Threading::Tasks::AsyncUnit))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET))(this);
		}
	};
}
