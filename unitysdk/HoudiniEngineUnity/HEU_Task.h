#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Task_TaskResult.h"
#include "unitysdk/HoudiniEngineUnity/HEU_Task_TaskStatus.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_Task_TaskCallback; }

#define HOUDINIENGINEUNITY_HEU_TASK_GET_TASKGUID_OFFSET UNITYSDK_OFFSET(0x1B153800)
#define HOUDINIENGINEUNITY_HEU_TASK_UPDATETASK_OFFSET UNITYSDK_OFFSET(0x1B153840)
#define HOUDINIENGINEUNITY_HEU_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B153810)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Task_TypeDefinitionIndex = 39302;

	class HEU_Task : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_Task_TaskCallback* _taskCompletedDelegate; // 0x10
		::System::Guid _guid; // 0x18
		::HoudiniEngineUnity::HEU_Task_TaskResult _result; // 0x28
		::HoudiniEngineUnity::HEU_Task_TaskStatus _status; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK__CTOR_OFFSET))(this);
		}

		::System::Guid get_TaskGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_GET_TASKGUID_OFFSET))(this);
		}

		::System::Void UpdateTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TASK_UPDATETASK_OFFSET))(this);
		}
	};
}
