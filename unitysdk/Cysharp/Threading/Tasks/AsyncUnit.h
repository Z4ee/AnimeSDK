#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0x84BD50)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182D0)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BDE970)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7445B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnit_TypeDefinitionIndex = 42547;

	struct alignas(1) AsyncUnit
	{
		static ::Cysharp::Threading::Tasks::AsyncUnit* StaticGet_Default()
		{
			return (::Cysharp::Threading::Tasks::AsyncUnit*)Il2CppClass::FromTypeDefinitionIndex(AsyncUnit_TypeDefinitionIndex)->GetStaticField(0x140F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::Cysharp::Threading::Tasks::AsyncUnit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cysharp::Threading::Tasks::AsyncUnit))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET))(this);
		}
	};
}
