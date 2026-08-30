#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0E500)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CREATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CE0E5B0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0E540)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CE0E550)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayIgnoreTimeScalePromise___c_TypeDefinitionIndex = 42654;

	class UniTask_DelayIgnoreTimeScalePromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayIgnoreTimeScalePromise___c_TypeDefinitionIndex)->GetStaticField(0x62610);
		}
		static ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayIgnoreTimeScalePromise___c_TypeDefinitionIndex)->GetStaticField(0x62618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__13_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CREATE_B__13_0_OFFSET))(this, a1);
		}
	};
}
