#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelAudioTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDEF4A0)
#define RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BDEF4E0)
#define RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BDEF5F0)
#define RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1BDEF640)
#define RPG_GAMECORE_LEVELAUDIOTRIGGERTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDEF490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioTriggerTask_TypeDefinitionIndex = 55603;

	class LevelAudioTriggerTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::LevelAudioTrigger* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelAudioTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelAudioTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGERTASK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGERTASK_TICK_OFFSET))(this, a1);
		}
	};
}
