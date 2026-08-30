#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class SynchronizationContext; }

#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1EA5C6D0)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x154DE0)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BA9730)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9700)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA97B0)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA97C0)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5C710)
#define CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA96A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ReturnToSynchronizationContext_Awaiter_TypeDefinitionIndex = 42789;

	struct alignas(8) ReturnToSynchronizationContext_Awaiter
	{
		static ::System::Threading::SendOrPostCallback** StaticGet_switchToCallback()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(ReturnToSynchronizationContext_Awaiter_TypeDefinitionIndex)->GetStaticField(0x56740);
		}
		::System::Threading::SynchronizationContext* synchronizationContext; // 0x10
		::System::Boolean dontPostWhenSameContext; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x20

		::System::Void _ctor(::System::Threading::SynchronizationContext* a1, ::System::Boolean a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SynchronizationContext*, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER__CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_GETAWAITER_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}

		static ::System::Void Callback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_RETURNTOSYNCHRONIZATIONCONTEXT_AWAITER_CALLBACK_OFFSET))(a1);
		}
	};
}
