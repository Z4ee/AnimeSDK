#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlaySequenceDialogue; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE6A6B0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCE6A720)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCE6AD70)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_TICK_OFFSET UNITYSDK_OFFSET(0xCE6ADC0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xCE6A6A0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__GETSEQUENCEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xCE6AC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySequenceDialogueTask_TypeDefinitionIndex = 54477;

	class PlaySequenceDialogueTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::PlaySequenceDialogue* _ConfigRef; // 0x18
		::Class_1_5F51D4049EA87B7B* _dialogueTask; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext; // 0x28

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlaySequenceDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySequenceDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_TICK_OFFSET))(this, a1);
		}

		::System::String* _GetSequenceUniqueName(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__GETSEQUENCEUNIQUENAME_OFFSET))(this, a1, a2, a3);
		}
	};
}
