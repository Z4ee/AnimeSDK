#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelLockFeature; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELLOCKFEATURETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA98F430)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA98F470)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA98F510)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_TICK_OFFSET UNITYSDK_OFFSET(0xA98F560)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA98F420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLockFeatureTask_TypeDefinitionIndex = 46936;

	class LevelLockFeatureTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::LevelLockFeature* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::LevelLockFeature* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
