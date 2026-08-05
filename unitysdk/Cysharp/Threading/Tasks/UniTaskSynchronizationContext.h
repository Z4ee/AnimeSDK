#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskSynchronizationContext_Callback.h"
#include "unitysdk/System/Threading/SpinLock.h"
#include "unitysdk/System/Threading/SynchronizationContext.h"

namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1FA4EAB0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FA4EA50)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1FA4E9F0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1FA4E520)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x1FA4EAC0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1FA4E500)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4F080)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4F070)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskSynchronizationContext_TypeDefinitionIndex = 31924;

	class UniTaskSynchronizationContext : public ::System::Threading::SynchronizationContext
	{
	public:
		static ::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>** StaticGet_waitingList()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x27190);
		}
		static ::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>** StaticGet_actionList()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x27198);
		}
		static ::System::Int32* StaticGet_actionListCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x7BC0);
		}
		static ::System::Int32* StaticGet_waitingListCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x7BC4);
		}
		static ::System::Threading::SpinLock* StaticGet_gate()
		{
			return (::System::Threading::SpinLock*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x7BC8);
		}
		static ::System::Int32* StaticGet_opCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x7BCC);
		}
		static ::System::Boolean* StaticGet_dequing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x7BD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CCTOR_OFFSET))();
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(this, d, state);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, d, state);
		}

		::System::Void OperationStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET))(this);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET))(this);
		}

		::System::Threading::SynchronizationContext* CreateCopy()
		{
			return ((::System::Threading::SynchronizationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET))(this);
		}

		static ::System::Void Run()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET))();
		}
	};
}
