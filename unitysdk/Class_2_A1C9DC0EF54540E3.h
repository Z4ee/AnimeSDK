#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LevelWaitSecond; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSecond; }

#define CLASS_2_A1C9DC0EF54540E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FB1F0)
#define CLASS_2_A1C9DC0EF54540E3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB8FB240)
#define CLASS_2_A1C9DC0EF54540E3_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB8FB7F0)
#define CLASS_2_A1C9DC0EF54540E3_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB8FB7A0)
#define CLASS_2_A1C9DC0EF54540E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FB250)
#define CLASS_2_A1C9DC0EF54540E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8FB390)
#define CLASS_2_A1C9DC0EF54540E3_TICK_OFFSET UNITYSDK_OFFSET(0xB8FB480)
#define CLASS_2_A1C9DC0EF54540E3__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FB1B0)

inline static constexpr unsigned int Class_2_A1C9DC0EF54540E3_TypeDefinitionIndex = 59073;

class Class_2_A1C9DC0EF54540E3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::LevelWaitSecond* COEBDGBFIFJ; // 0x20
	::RPG::GameCore::WaitSecond* OFKGLJOAMLD; // 0x28
	::System::Single BOBKAKEJPEI; // 0x30
	::System::Single DKOFFPPGEFI; // 0x34
	::System::UInt64 HCOLAKNHFPO; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSecond* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSecond*))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A1C9DC0EF54540E3_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}
};
