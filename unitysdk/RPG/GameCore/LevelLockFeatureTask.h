#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelLockFeature; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELLOCKFEATURETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE4B7F0)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCE4B830)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCE4B8D0)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK_TICK_OFFSET UNITYSDK_OFFSET(0xCE4B920)
#define RPG_GAMECORE_LEVELLOCKFEATURETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4B7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLockFeatureTask_TypeDefinitionIndex = 54381;

	class LevelLockFeatureTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelLockFeature* _ConfigRef; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelLockFeature* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelLockFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOCKFEATURETASK_TICK_OFFSET))(this, a1);
		}
	};
}
