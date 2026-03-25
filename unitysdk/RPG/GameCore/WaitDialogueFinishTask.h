#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueFinish; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAFAE00)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAFAE40)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAFAF20)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_TICK_OFFSET UNITYSDK_OFFSET(0xAAFAFC0)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFADF0)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK__ONDIALOGUEFINISH_OFFSET UNITYSDK_OFFSET(0xAAFB020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueFinishTask_TypeDefinitionIndex = 47553;

	class WaitDialogueFinishTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::WaitDialogueFinish* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x28

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitDialogueFinish* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnDialogueFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK__ONDIALOGUEFINISH_OFFSET))(this, arg);
		}
	};
}
