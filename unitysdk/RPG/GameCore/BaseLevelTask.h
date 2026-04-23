#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionTalkFinish; }

#define RPG_GAMECORE_BASELEVELTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5BECA0)
#define RPG_GAMECORE_BASELEVELTASK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB5BEC90)
#define RPG_GAMECORE_BASELEVELTASK_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB5BECE0)
#define RPG_GAMECORE_BASELEVELTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5BED30)
#define RPG_GAMECORE_BASELEVELTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5BED80)
#define RPG_GAMECORE_BASELEVELTASK_TICK_OFFSET UNITYSDK_OFFSET(0xB5BEDD0)
#define RPG_GAMECORE_BASELEVELTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xB5BEC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLevelTask_TypeDefinitionIndex = 53431;

	class BaseLevelTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitMissionTalkFinish* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELEVELTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
