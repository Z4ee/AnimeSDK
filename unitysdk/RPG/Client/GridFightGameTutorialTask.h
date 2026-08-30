#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_426;
namespace RPG::Client { class GridFightTaskConfig; }

#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1BA40630)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_TASKCONFIG_OFFSET UNITYSDK_OFFSET(0x1BA40620)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_GET_TASKID_OFFSET UNITYSDK_OFFSET(0x1BA40610)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1BA40640)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SYNC_OFFSET UNITYSDK_OFFSET(0x1BA405B0)
#define RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA40530)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTutorialTask_TypeDefinitionIndex = 65567;

	class GridFightGameTutorialTask : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTaskConfig* _TaskConfig_k__BackingField; // 0x10
		::System::UInt32 _Progress_k__BackingField; // 0x18
		::System::UInt32 _TaskID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK__CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_426* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_426*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SYNC_OFFSET))(this, a1);
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

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETUTORIALTASK_SET_PROGRESS_OFFSET))(this, a1);
		}
	};
}
