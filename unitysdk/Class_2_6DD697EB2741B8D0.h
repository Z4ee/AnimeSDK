#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggeBattleLoadFinishPerformance; }

#define CLASS_2_6DD697EB2741B8D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5ADCB0)
#define CLASS_2_6DD697EB2741B8D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5ADE60)
#define CLASS_2_6DD697EB2741B8D0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5ADD80)
#define CLASS_2_6DD697EB2741B8D0_TICK_OFFSET UNITYSDK_OFFSET(0xE5AE3B0)
#define CLASS_2_6DD697EB2741B8D0__CTOR_OFFSET UNITYSDK_OFFSET(0xE5ADCA0)

inline static constexpr unsigned int Class_2_6DD697EB2741B8D0_TypeDefinitionIndex = 55900;

class Class_2_6DD697EB2741B8D0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* ECAHDDPJIAE; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::TriggeBattleLoadFinishPerformance* OFKGLJOAMLD; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_TICK_OFFSET))(this, a1);
	}
};
