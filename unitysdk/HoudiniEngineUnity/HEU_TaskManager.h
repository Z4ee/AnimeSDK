#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Task_TaskResult.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_Task; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_ADDTASK_OFFSET UNITYSDK_OFFSET(0x17F5D050)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_COMPLETETASK_OFFSET UNITYSDK_OFFSET(0x17F5D7F0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_EXECUTETASK_OFFSET UNITYSDK_OFFSET(0x17F5D7C0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_GETTASK_OFFSET UNITYSDK_OFFSET(0x17F5CEE0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_INTERNALCOMPLETETASK_OFFSET UNITYSDK_OFFSET(0x17F5D820)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_1_OFFSET UNITYSDK_OFFSET(0x17F5D720)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_OFFSET UNITYSDK_OFFSET(0x17F5D300)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x17F5D480)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17F5CED0)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F5CE10)
#define HOUDINIENGINEUNITY_HEU_TASKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F5D880)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TaskManager_TypeDefinitionIndex = 37641;

	class HEU_TaskManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>** StaticGet__pendingAdd()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_TaskManager_TypeDefinitionIndex)->GetStaticField(0x10530);
		}
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>** StaticGet__tasks()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_TaskManager_TypeDefinitionIndex)->GetStaticField(0x10538);
		}
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>** StaticGet__pendingRemove()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Task*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_TaskManager_TypeDefinitionIndex)->GetStaticField(0x10540);
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

		static ::HoudiniEngineUnity::HEU_Task* GetTask(::System::Guid a1)
		{
			return ((::HoudiniEngineUnity::HEU_Task*(*)(::System::Guid))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_GETTASK_OFFSET))(a1);
		}

		static ::System::Void AddTask(::HoudiniEngineUnity::HEU_Task* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_ADDTASK_OFFSET))(a1);
		}

		static ::System::Void KillTask(::HoudiniEngineUnity::HEU_Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_OFFSET))(a1, a2);
		}

		static ::System::Void KillTask_1(::System::Guid a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_KILLTASK_1_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveTask(::HoudiniEngineUnity::HEU_Task* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_REMOVETASK_OFFSET))(a1);
		}

		static ::System::Void ExecuteTask(::HoudiniEngineUnity::HEU_Task* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_EXECUTETASK_OFFSET))(a1);
		}

		static ::System::Void CompleteTask(::HoudiniEngineUnity::HEU_Task* a1, ::HoudiniEngineUnity::HEU_Task_TaskResult a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*, ::HoudiniEngineUnity::HEU_Task_TaskResult))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_COMPLETETASK_OFFSET))(a1, a2);
		}

		static ::System::Void InternalCompleteTask(::HoudiniEngineUnity::HEU_Task* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_Task*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASKMANAGER_INTERNALCOMPLETETASK_OFFSET))(a1);
		}
	};
}
