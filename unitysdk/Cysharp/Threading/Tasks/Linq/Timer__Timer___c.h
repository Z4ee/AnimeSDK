#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA489A0)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA489E0)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C___CTOR_B__11_0_OFFSET UNITYSDK_OFFSET(0x1EA489F0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Timer__Timer___c_TypeDefinitionIndex = 44584;

	class Timer__Timer___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Timer__Timer___c_TypeDefinitionIndex)->GetStaticField(0x14E0);
		}
		static ::Cysharp::Threading::Tasks::Linq::Timer__Timer___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::Timer__Timer___c**)Il2CppClass::FromTypeDefinitionIndex(Timer__Timer___c_TypeDefinitionIndex)->GetStaticField(0x14E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__11_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C___CTOR_B__11_0_OFFSET))(this, a1);
		}
	};
}
