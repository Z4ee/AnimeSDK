#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA83B70)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CREATE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1EA83C20)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83BB0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EA83BC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilCanceledPromise___c_TypeDefinitionIndex = 42676;

	class UniTask_WaitUntilCanceledPromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilCanceledPromise___c_TypeDefinitionIndex)->GetStaticField(0x59260);
		}
		static ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilCanceledPromise___c_TypeDefinitionIndex)->GetStaticField(0x59268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILCANCELEDPROMISE___C__CREATE_B__10_0_OFFSET))(this, a1);
		}
	};
}
