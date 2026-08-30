#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5E990)
#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE5E9D0)
#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1CE5E9E0)
#define CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_1_OFFSET UNITYSDK_OFFSET(0x1CE5E9F0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Subscribe___c_TypeDefinitionIndex = 44463;

	class Subscribe___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Linq::Subscribe___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::Subscribe___c**)Il2CppClass::FromTypeDefinitionIndex(Subscribe___c_TypeDefinitionIndex)->GetStaticField(0x14C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__8_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_0_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_SUBSCRIBE___C___CCTOR_B__8_1_OFFSET))(this);
		}
	};
}
