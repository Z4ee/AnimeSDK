#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelAudioSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE685C20)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE685C60)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE685E30)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xE685E80)
#define RPG_GAMECORE_LEVELAUDIOSWITCHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xE685C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioSwitchTask_TypeDefinitionIndex = 58333;

	class LevelAudioSwitchTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::LevelAudioSwitch* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelAudioSwitch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelAudioSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCHTASK_TICK_OFFSET))(this, a1);
		}
	};
}
