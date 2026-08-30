#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueFinish; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A36EC40)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A36EC80)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A36EDE0)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1A36EEA0)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36EC30)
#define RPG_GAMECORE_WAITDIALOGUEFINISHTASK__ONDIALOGUEFINISH_OFFSET UNITYSDK_OFFSET(0x1A36EF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueFinishTask_TypeDefinitionIndex = 59032;

	class WaitDialogueFinishTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::WaitDialogueFinish* _ConfigRef; // 0x20
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x28

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnDialogueFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEFINISHTASK__ONDIALOGUEFINISH_OFFSET))(this, a1);
		}
	};
}
