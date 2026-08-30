#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA80D40)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CREATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1EA80DF0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA80D80)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EA80D90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayPromise___c_TypeDefinitionIndex = 42652;

	class UniTask_DelayPromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_DelayPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_DelayPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayPromise___c_TypeDefinitionIndex)->GetStaticField(0x58E60);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayPromise___c_TypeDefinitionIndex)->GetStaticField(0x58E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__13_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CREATE_B__13_0_OFFSET))(this, a1);
		}
	};
}
