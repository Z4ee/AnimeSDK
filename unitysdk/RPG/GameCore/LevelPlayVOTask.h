#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelPlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELPLAYVOTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD29D80)
#define RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1DD29DC0)
#define RPG_GAMECORE_LEVELPLAYVOTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1DD29F70)
#define RPG_GAMECORE_LEVELPLAYVOTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1DD29FC0)
#define RPG_GAMECORE_LEVELPLAYVOTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD29D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayVOTask_TypeDefinitionIndex = 58337;

	class LevelPlayVOTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::LevelPlayVO* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelPlayVO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelPlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYVOTASK_TICK_OFFSET))(this, a1);
		}
	};
}
