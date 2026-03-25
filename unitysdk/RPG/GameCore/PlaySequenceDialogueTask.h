#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlaySequenceDialogue; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9FEE30)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA9FEEA0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA9FF4E0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_TICK_OFFSET UNITYSDK_OFFSET(0xA9FF530)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FEE20)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__GETSEQUENCEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA9FF400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySequenceDialogueTask_TypeDefinitionIndex = 47020;

	class PlaySequenceDialogueTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::RPG::GameCore::PlaySequenceDialogue* _ConfigRef; // 0x20
		::Class_1_5F51D4049EA87B7B* _dialogueTask; // 0x28

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::PlaySequenceDialogue* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySequenceDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::String* _GetSequenceUniqueName(::System::UInt32 floorID, ::System::UInt32 groupID, ::System::UInt32 entityID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__GETSEQUENCEUNIQUENAME_OFFSET))(this, floorID, groupID, entityID);
		}
	};
}
