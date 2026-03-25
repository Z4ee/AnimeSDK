#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueBegin; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAFA9A0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAAFAA60)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAAFAB40)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET UNITYSDK_OFFSET(0xAAFABE0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFA910)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET UNITYSDK_OFFSET(0xAAFAC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueBeginTask_TypeDefinitionIndex = 47551;

	class WaitDialogueBeginTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::WaitDialogueBegin* _ConfigRef; // 0x18
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext; // 0x28
		::Class_3_5775A4FEC79026BC* _BeginCallback; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitDialogueBegin* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnDialogueBegin(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET))(this, arg);
		}
	};
}
