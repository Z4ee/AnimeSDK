#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskSynchronizationContext_Callback.h"
#include "unitysdk/System/Threading/SpinLock.h"
#include "unitysdk/System/Threading/SynchronizationContext.h"

namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1CE1CB70)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE1CB30)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_OPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1CE1CAF0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_POST_OFFSET UNITYSDK_OFFSET(0x1CE1C6E0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_RUN_OFFSET UNITYSDK_OFFSET(0x1CE1CB80)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_SEND_OFFSET UNITYSDK_OFFSET(0x1CE1C6B0)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE1D120)
#define CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1D110)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskSynchronizationContext_TypeDefinitionIndex = 42861;

	class UniTaskSynchronizationContext : public ::System::Threading::SynchronizationContext
	{
	public:
		static ::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>** StaticGet_actionList()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x62D80);
		}
		static ::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>** StaticGet_waitingList()
		{
			return (::Il2CppArray<::Cysharp::Threading::Tasks::UniTaskSynchronizationContext_Callback>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x62D88);
		}
		static ::System::Int32* StaticGet_waitingListCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x144B0);
		}
		static ::System::Threading::SpinLock* StaticGet_gate()
		{
			return (::System::Threading::SpinLock*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x144B4);
		}
		static ::System::Int32* StaticGet_opCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x144B8);
		}
		static ::System::Boolean* StaticGet_dequing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x144BC);
		}
		static ::System::Int32* StaticGet_actionListCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UniTaskSynchronizationContext_TypeDefinitionIndex)->GetStaticField(0x144C0);
		}
		// static const ::System::Int32 MaxArrayLength = 0x7FEFFFFF; // 0x0
		// static const ::System::Int32 InitialSize = 0x10; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT__CCTOR_OFFSET))();
		}

		::System::Void Send(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_SEND_OFFSET))(this, a1, a2);
		}

		::System::Void Post(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSYNCHRONIZATIONCONTEXT_POST_OFFSET))(this, a1, a2);
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
