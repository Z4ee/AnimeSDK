#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_360;
namespace RPG::Client { class GridFightTaskConfig; }

#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA4E8140)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_TASKCONFIG_OFFSET UNITYSDK_OFFSET(0xA4E8130)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_TASKID_OFFSET UNITYSDK_OFFSET(0xA4E8120)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA4E8150)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SYNC_OFFSET UNITYSDK_OFFSET(0xA4E80C0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E8040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTutorialTask_TypeDefinitionIndex = 60305;

	class GridFightGameTutorialTask : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTaskConfig* _TaskConfig_k__BackingField; // 0x10
		::System::UInt32 _Progress_k__BackingField; // 0x18
		::System::UInt32 _TaskID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 taskID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK__CTOR_OFFSET))(this, taskID);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_360* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SYNC_OFFSET))(this, serverData);
		}

		::System::UInt32 get_TaskID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_TASKID_OFFSET))(this);
		}

		::RPG::Client::GridFightTaskConfig* get_TaskConfig()
		{
			return ((::RPG::Client::GridFightTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_TASKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SET_PROGRESS_OFFSET))(this, value);
		}
	};
}
