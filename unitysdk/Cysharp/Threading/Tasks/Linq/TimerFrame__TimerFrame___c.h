#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA49270)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA492B0)
#define CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1EA492C0)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TimerFrame__TimerFrame___c_TypeDefinitionIndex = 44587;

	class TimerFrame__TimerFrame___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TimerFrame__TimerFrame___c_TypeDefinitionIndex)->GetStaticField(0x14F0);
		}
		static ::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::TimerFrame__TimerFrame___c**)Il2CppClass::FromTypeDefinitionIndex(TimerFrame__TimerFrame___c_TypeDefinitionIndex)->GetStaticField(0x14F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__9_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMERFRAME__TIMERFRAME___C___CTOR_B__9_0_OFFSET))(this, a1);
		}
	};
}
