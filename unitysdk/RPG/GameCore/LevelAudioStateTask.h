#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELAUDIOSTATETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDEEBE0)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BDEEC20)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BDEF100)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK_TICK_OFFSET UNITYSDK_OFFSET(0x1BDEF150)
#define RPG_GAMECORE_LEVELAUDIOSTATETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDEEBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioStateTask_TypeDefinitionIndex = 55601;

	class LevelAudioStateTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::LevelAudioState* _ConfigRef; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelAudioState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATETASK_TICK_OFFSET))(this, a1);
		}
	};
}
