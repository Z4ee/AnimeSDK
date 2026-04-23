#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelPlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELPLAYVOTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6DDFF0)
#define RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6DE030)
#define RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6DE1C0)
#define RPG_GAMECORE_LEVELPLAYVOTASK_TICK_OFFSET UNITYSDK_OFFSET(0xB6DE210)
#define RPG_GAMECORE_LEVELPLAYVOTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DDFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayVOTask_TypeDefinitionIndex = 53670;

	class LevelPlayVOTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::LevelPlayVO* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::LevelPlayVO* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
