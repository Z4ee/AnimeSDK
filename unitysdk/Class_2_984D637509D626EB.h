#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BattleAudioSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_984D637509D626EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB653BF0)
#define CLASS_2_984D637509D626EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB653C30)
#define CLASS_2_984D637509D626EB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB653EA0)
#define CLASS_2_984D637509D626EB_TICK_OFFSET UNITYSDK_OFFSET(0xB653EF0)
#define CLASS_2_984D637509D626EB__CTOR_OFFSET UNITYSDK_OFFSET(0xB653BE0)

inline static constexpr unsigned int Class_2_984D637509D626EB_TypeDefinitionIndex = 57947;

class Class_2_984D637509D626EB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::BattleAudioSwitch* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleAudioSwitch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleAudioSwitch*))((::PBYTE)hIl2Cpp + CLASS_2_984D637509D626EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_984D637509D626EB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_984D637509D626EB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_984D637509D626EB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_984D637509D626EB_TICK_OFFSET))(this, a1);
	}
};
