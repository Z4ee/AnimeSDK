#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA842E0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1EA84390)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA84320)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EA84330)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilPromise___c_TypeDefinitionIndex = 42668;

	class UniTask_WaitUntilPromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilPromise___c_TypeDefinitionIndex)->GetStaticField(0x59330);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilPromise___c_TypeDefinitionIndex)->GetStaticField(0x59338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__11_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CREATE_B__11_0_OFFSET))(this, a1);
		}
	};
}
