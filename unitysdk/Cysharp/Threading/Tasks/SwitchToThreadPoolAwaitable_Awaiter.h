#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading { class WaitCallback; }

#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1FB3EAB0)
#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x296F30)
#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xAC9620)
#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xAC9690)
#define CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB3EB10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToThreadPoolAwaitable_Awaiter_TypeDefinitionIndex = 31896;

	struct alignas(1) SwitchToThreadPoolAwaitable_Awaiter
	{
		static ::System::Threading::WaitCallback** StaticGet_switchToCallback()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(SwitchToThreadPoolAwaitable_Awaiter_TypeDefinitionIndex)->GetStaticField(0x272C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}

		static ::System::Void Callback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOTHREADPOOLAWAITABLE_AWAITER_CALLBACK_OFFSET))(state);
		}
	};
}
