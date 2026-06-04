#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueBegin; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFAEB60)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCFAEC20)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCFAED10)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET UNITYSDK_OFFSET(0xCFAEDD0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xCFAEAD0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET UNITYSDK_OFFSET(0xCFAEE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueBeginTask_TypeDefinitionIndex = 55015;

	class WaitDialogueBeginTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::WaitDialogueBegin* _ConfigRef; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::Class_3_07C3C4D2990C49EE* _BeginCallback; // 0x28
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDialogueBegin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnDialogueBegin(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET))(this, a1);
		}
	};
}
