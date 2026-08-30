#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerBranchByActivitySwordTrainingStoryLine; }

#define CLASS_2_CDAAF618DCDCF634_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE892550)
#define CLASS_2_CDAAF618DCDCF634_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE892590)
#define CLASS_2_CDAAF618DCDCF634_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE892760)
#define CLASS_2_CDAAF618DCDCF634_TICK_OFFSET UNITYSDK_OFFSET(0xE8927B0)
#define CLASS_2_CDAAF618DCDCF634__CTOR_OFFSET UNITYSDK_OFFSET(0xE892540)

inline static constexpr unsigned int Class_2_CDAAF618DCDCF634_TypeDefinitionIndex = 58920;

class Class_2_CDAAF618DCDCF634 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerBranchByActivitySwordTrainingStoryLine*))((::PBYTE)hIl2Cpp + CLASS_2_CDAAF618DCDCF634__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDAAF618DCDCF634_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDAAF618DCDCF634_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CDAAF618DCDCF634_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CDAAF618DCDCF634_TICK_OFFSET))(this, a1);
	}
};
