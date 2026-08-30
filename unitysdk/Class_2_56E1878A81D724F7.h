#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerFightFestBattleInMission; }

#define CLASS_2_56E1878A81D724F7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188284A0)
#define CLASS_2_56E1878A81D724F7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188284E0)
#define CLASS_2_56E1878A81D724F7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18828590)
#define CLASS_2_56E1878A81D724F7_TICK_OFFSET UNITYSDK_OFFSET(0x188285E0)
#define CLASS_2_56E1878A81D724F7__CTOR_OFFSET UNITYSDK_OFFSET(0x18828490)

inline static constexpr unsigned int Class_2_56E1878A81D724F7_TypeDefinitionIndex = 58933;

class Class_2_56E1878A81D724F7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerFightFestBattleInMission* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerFightFestBattleInMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerFightFestBattleInMission*))((::PBYTE)hIl2Cpp + CLASS_2_56E1878A81D724F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E1878A81D724F7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E1878A81D724F7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E1878A81D724F7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56E1878A81D724F7_TICK_OFFSET))(this, a1);
	}
};
