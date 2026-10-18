#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F11E000)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F11E0B0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F11E040)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITUNTILPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F11E050)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitUntilPromise___c_TypeDefinitionIndex = 38253;

	class UniTask_WaitUntilPromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilPromise___c_TypeDefinitionIndex)->GetStaticField(0x39FB0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitUntilPromise___c_TypeDefinitionIndex)->GetStaticField(0x39FB8);
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
