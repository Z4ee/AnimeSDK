#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CakeRaceWaitVoteEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E9390A06216886CF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134CBD20)
#define CLASS_2_E9390A06216886CF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x134CBEE0)
#define CLASS_2_E9390A06216886CF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x134CC140)
#define CLASS_2_E9390A06216886CF_TICK_OFFSET UNITYSDK_OFFSET(0x134CC190)
#define CLASS_2_E9390A06216886CF__CTOR_OFFSET UNITYSDK_OFFSET(0x134CBD10)
#define CLASS_2_E9390A06216886CF__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x134CC1F0)

inline static constexpr unsigned int Class_2_E9390A06216886CF_TypeDefinitionIndex = 52901;

class Class_2_E9390A06216886CF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CakeRaceWaitVoteEnd* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitVoteEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitVoteEnd*))((::PBYTE)hIl2Cpp + CLASS_2_E9390A06216886CF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9390A06216886CF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9390A06216886CF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9390A06216886CF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9390A06216886CF_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9390A06216886CF__ONTASKBEGIN_B__4_0_OFFSET))(this);
	}
};
