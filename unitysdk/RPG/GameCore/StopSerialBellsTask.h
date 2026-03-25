#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopSerialBells; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_STOPSERIALBELLSTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA50450)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA50490)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA504F0)
#define RPG_GAMECORE_STOPSERIALBELLSTASK_TICK_OFFSET UNITYSDK_OFFSET(0xAA50540)
#define RPG_GAMECORE_STOPSERIALBELLSTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAA50440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSerialBellsTask_TypeDefinitionIndex = 47417;

	class StopSerialBellsTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::StopSerialBells* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::StopSerialBells* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLSTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
