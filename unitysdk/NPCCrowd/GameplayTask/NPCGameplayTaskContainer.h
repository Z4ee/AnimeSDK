#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/GameplayTask/FGameplayTaskEventData.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::GameplayTask { class NPCGameplayTaskBase; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ADDTASKREADYFORACTIVATION_OFFSET UNITYSDK_OFFSET(0x10668F60)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ADDTASKTOPRIORITYQUEUE_OFFSET UNITYSDK_OFFSET(0x1066B0A0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_CANPROCESSEVENTS_OFFSET UNITYSDK_OFFSET(0x1066A700)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ENDEVENTLOCK_OFFSET UNITYSDK_OFFSET(0x10669FC0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_EVENTLOCK_OFFSET UNITYSDK_OFFSET(0x10669F80)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_GETSHOULDTICK_OFFSET UNITYSDK_OFFSET(0x1066A560)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_HASACTIVETASKS_OFFSET UNITYSDK_OFFSET(0x1066AE40)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_INIT_OFFSET UNITYSDK_OFFSET(0x1066A000)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1066A670)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ONGAMEPLAYTASKACTIVATED_OFFSET UNITYSDK_OFFSET(0x10669AE0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_ONGAMEPLAYTASKDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x106695A0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_PROCESSTASKEVENTS_OFFSET UNITYSDK_OFFSET(0x1066A760)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_REMOVETASKFROMPRIORITYQUEUE_OFFSET UNITYSDK_OFFSET(0x1066AF10)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_REQUESTTICKING_OFFSET UNITYSDK_OFFSET(0x1066A5C0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1066A6B0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_TICK_OFFSET UNITYSDK_OFFSET(0x1066A190)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_UPDATESHOULDTICK_OFFSET UNITYSDK_OFFSET(0x1066A4A0)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER_UPDATETASKACTIVATIONS_OFFSET UNITYSDK_OFFSET(0x1066B130)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1066B460)
#define NPCCROWD_GAMEPLAYTASK_NPCGAMEPLAYTASKCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1066B450)

namespace NPCCrowd::GameplayTask
{
	inline static constexpr unsigned int NPCGameplayTaskContainer_TypeDefinitionIndex = 69478;

	class NPCGameplayTaskContainer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>** StaticGet_LocalTickingTasks()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>**)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainer_TypeDefinitionIndex)->GetStaticField(0x49550);
		}
		static ::System::Int32* StaticGet_INDEX_NONE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainer_TypeDefinitionIndex)->GetStaticField(0x10E20);
		}
		static ::System::Int32* StaticGet_MaxIterations()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCGameplayTaskContainer_TypeDefinitionIndex)->GetStaticField(0x10E24);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>* TickingTasks; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>* TaskPriorityQueue; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::NPCGameplayTaskBase*>* KnownTasks; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::GameplayTask::FGameplayTaskEventData>* TaskEvents; // 0x28
		::System::Int32 EventLockCounter; // 0x30
		::System::Boolean bInEventProcessingInProgress; // 0x34
		::System::Boolean bIsActive; // 0x35
		::System::Boolean bIsNeedUpdate; // 0x36

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
