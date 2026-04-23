#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelAudioSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6CA8C0)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6CA900)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6CAA60)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xB6CAAB0)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CA8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioSwitchTask_TypeDefinitionIndex = 53666;

	class LevelAudioSwitchTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelAudioSwitch* _ConfigRef; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::LevelAudioSwitch* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelAudioSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
