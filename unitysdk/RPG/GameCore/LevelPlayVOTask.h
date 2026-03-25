#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelPlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELPLAYVOTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA98FDD0)
#define RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA98FE10)
#define RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA98FFA0)
#define RPG_GAMECORE_LEVELPLAYVOTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA98FFF0)
#define RPG_GAMECORE_LEVELPLAYVOTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA98FDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayVOTask_TypeDefinitionIndex = 46938;

	class LevelPlayVOTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelPlayVO* _ConfigRef; // 0x20

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
