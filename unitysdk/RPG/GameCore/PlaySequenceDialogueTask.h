#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlaySequenceDialogue; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6B7A40)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE6B7B10)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE6B82F0)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK_TICK_OFFSET UNITYSDK_OFFSET(0xE6B8340)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xE6B7A30)
#define RPG_GAMECORE_PLAYSEQUENCEDIALOGUETASK__GETSEQUENCEUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xE6B8210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySequenceDialogueTask_TypeDefinitionIndex = 58432;

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
