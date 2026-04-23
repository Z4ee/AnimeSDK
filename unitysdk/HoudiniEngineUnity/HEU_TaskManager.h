#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Task_TaskResult.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_Task; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_ADDTASK_OFFSET UNITYSDK_OFFSET(0x8CBED40)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_COMPLETETASK_OFFSET UNITYSDK_OFFSET(0x8CBF1F0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_EXECUTETASK_OFFSET UNITYSDK_OFFSET(0x8CBF1C0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_GETTASK_OFFSET UNITYSDK_OFFSET(0x8CBEBA0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_INTERNALCOMPLETETASK_OFFSET UNITYSDK_OFFSET(0x8CBF220)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_1_OFFSET UNITYSDK_OFFSET(0x8CBF120)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_OFFSET UNITYSDK_OFFSET(0x8CBEEC0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x8CBEFC0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8CBEB90)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CBEAD0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBF270)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TaskManager_TypeDefinitionIndex = 43665;

	class HEU_TaskManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>** StaticGet__pendingAdd()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_TaskManager_TypeDefinitionIndex)->GetStaticField(0x43AB0);
		}
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>** StaticGet__pendingRemove()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_TaskManager_TypeDefinitionIndex)->GetStaticField(0x43AB8);
		}
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>** StaticGet__tasks()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_TaskManager_TypeDefinitionIndex)->GetStaticField(0x43AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_UPDATE_OFFSET))();
		}

		static ::HoudiniEngineUnity::HEU_Task* GetTask(::System::Guid taskGuid)
		{
			return ((::HoudiniEngineUnity::HEU_Task*(*)(::System::Guid))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_GETTASK_OFFSET))(taskGuid);
		}

		static ::System::Void AddTask(::HoudiniEngineUnity::HEU_Task* task)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_ADDTASK_OFFSET))(task);
		}

		static ::System::Void KillTask(::HoudiniEngineUnity::HEU_Task* task, ::System::Boolean bRemove)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_OFFSET))(task, bRemove);
		}

		static ::System::Void KillTask_1(::System::Guid taskGuid, ::System::Boolean bRemove)
		{
			return ((::System::Void(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_1_OFFSET))(taskGuid, bRemove);
		}

		static ::System::Void RemoveTask(::HoudiniEngineUnity::HEU_Task* task)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_REMOVETASK_OFFSET))(task);
		}

		static ::System::Void ExecuteTask(::HoudiniEngineUnity::HEU_Task* task)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_EXECUTETASK_OFFSET))(task);
		}

		static ::System::Void CompleteTask(::HoudiniEngineUnity::HEU_Task* task, ::HoudiniEngineUnity::HEU_Task_TaskResult result)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*, ::HoudiniEngineUnity::HEU_Task_TaskResult))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_COMPLETETASK_OFFSET))(task, result);
		}

		static ::System::Void InternalCompleteTask(::HoudiniEngineUnity::HEU_Task* task)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_INTERNALCOMPLETETASK_OFFSET))(task);
		}
	};
}
