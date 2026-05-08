#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GameplayTask/FGameplayTaskEventData.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::GameplayTask { class NPCGameplayTaskBase; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ADDTASKREADYFORACTIVATION_OFFSET UNITYSDK_OFFSET(0xCD4AFB0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ADDTASKTOPRIORITYQUEUE_OFFSET UNITYSDK_OFFSET(0xCD4D100)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_CANPROCESSEVENTS_OFFSET UNITYSDK_OFFSET(0xCD4C750)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ENDEVENTLOCK_OFFSET UNITYSDK_OFFSET(0xCD4C010)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_EVENTLOCK_OFFSET UNITYSDK_OFFSET(0xCD4BFD0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_GETSHOULDTICK_OFFSET UNITYSDK_OFFSET(0xCD4C5B0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_HASACTIVETASKS_OFFSET UNITYSDK_OFFSET(0xCD4CEA0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0xCD4C050)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xCD4C6C0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ONGAMEPLAYTASKACTIVATED_OFFSET UNITYSDK_OFFSET(0xCD4BB30)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ONGAMEPLAYTASKDEACTIVATED_OFFSET UNITYSDK_OFFSET(0xCD4B5F0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_PROCESSTASKEVENTS_OFFSET UNITYSDK_OFFSET(0xCD4C7B0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_REMOVETASKFROMPRIORITYQUEUE_OFFSET UNITYSDK_OFFSET(0xCD4CF70)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_REQUESTTICKING_OFFSET UNITYSDK_OFFSET(0xCD4C610)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xCD4C700)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_TICK_OFFSET UNITYSDK_OFFSET(0xCD4C1E0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_UPDATESHOULDTICK_OFFSET UNITYSDK_OFFSET(0xCD4C4F0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_UPDATETASKACTIVATIONS_OFFSET UNITYSDK_OFFSET(0xCD4D190)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD4D4C0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xCD4D4B0)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int NPCGameplayTaskContainer_TypeDefinitionIndex = 65145;

	class NPCGameplayTaskContainer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>** StaticGet_LocalTickingTasks()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>**)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainer_TypeDefinitionIndex)->GetStaticField(0x42520);
		}
		static ::System::Int32* StaticGet_MaxIterations()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainer_TypeDefinitionIndex)->GetStaticField(0xFFD0);
		}
		static ::System::Int32* StaticGet_INDEX_NONE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainer_TypeDefinitionIndex)->GetStaticField(0xFFD4);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>* TaskPriorityQueue; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::FGameplayTaskEventData>* TaskEvents; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>* TickingTasks; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>* KnownTasks; // 0x28
		::System::Int32 EventLockCounter; // 0x30
		::System::Boolean bIsNeedUpdate; // 0x34
		::System::Boolean bInEventProcessingInProgress; // 0x35
		::System::Boolean bIsActive; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER__CCTOR_OFFSET))();
		}

		::System::Void EventLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_EVENTLOCK_OFFSET))(this);
		}

		::System::Void EndEventLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ENDEVENTLOCK_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_INIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single DeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_TICK_OFFSET))(this, DeltaTime);
		}

		::System::Boolean GetShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_GETSHOULDTICK_OFFSET))(this);
		}

		::System::Void RequestTicking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_REQUESTTICKING_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ISACTIVE_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_SETACTIVE_OFFSET))(this, a);
		}

		::System::Void UpdateShouldTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_UPDATESHOULDTICK_OFFSET))(this);
		}

		::System::Boolean CanProcessEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_CANPROCESSEVENTS_OFFSET))(this);
		}

		::System::Void AddTaskReadyForActivation(::NPCCrowd::GameplayTask::NPCGameplayTaskBase* NewTask)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ADDTASKREADYFORACTIVATION_OFFSET))(this, NewTask);
		}

		::System::Boolean HasActiveTasks(::System::Type* TaskClass)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_HASACTIVETASKS_OFFSET))(this, TaskClass);
		}

		::System::Void ProcessTaskEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_PROCESSTASKEVENTS_OFFSET))(this);
		}

		::System::Void AddTaskToPriorityQueue(::NPCCrowd::GameplayTask::NPCGameplayTaskBase* NewTask)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ADDTASKTOPRIORITYQUEUE_OFFSET))(this, NewTask);
		}

		::System::Void RemoveTaskFromPriorityQueue(::NPCCrowd::GameplayTask::NPCGameplayTaskBase* Task)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_REMOVETASKFROMPRIORITYQUEUE_OFFSET))(this, Task);
		}

		::System::Void UpdateTaskActivations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_UPDATETASKACTIVATIONS_OFFSET))(this);
		}

		::System::Void OnGameplayTaskActivated(::NPCCrowd::GameplayTask::NPCGameplayTaskBase* Task)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ONGAMEPLAYTASKACTIVATED_OFFSET))(this, Task);
		}

		::System::Void OnGameplayTaskDeactivated(::NPCCrowd::GameplayTask::NPCGameplayTaskBase* Task)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::GameplayTask::NPCGameplayTaskBase*))((::PBYTE)hIl2Cpp + NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ONGAMEPLAYTASKDEACTIVATED_OFFSET))(this, Task);
		}
	};
}
