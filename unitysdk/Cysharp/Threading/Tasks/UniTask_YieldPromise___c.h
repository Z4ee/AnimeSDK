#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE13A00)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CREATE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1CE13AB0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE13A40)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CE13A50)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_YieldPromise___c_TypeDefinitionIndex = 42644;

	class UniTask_YieldPromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_YieldPromise___c_TypeDefinitionIndex)->GetStaticField(0x62940);
		}
		static ::Cysharp::Threading::Tasks::UniTask_YieldPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_YieldPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_YieldPromise___c_TypeDefinitionIndex)->GetStaticField(0x62948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CREATE_B__10_0_OFFSET))(this, a1);
		}
	};
}
