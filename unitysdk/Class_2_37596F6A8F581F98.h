#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ModifyMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_37596F6A8F581F98_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A846070)
#define CLASS_2_37596F6A8F581F98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8460B0)
#define CLASS_2_37596F6A8F581F98_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A846390)
#define CLASS_2_37596F6A8F581F98_TICK_OFFSET UNITYSDK_OFFSET(0x1A8463E0)
#define CLASS_2_37596F6A8F581F98__CTOR_OFFSET UNITYSDK_OFFSET(0x1A846060)

inline static constexpr unsigned int Class_2_37596F6A8F581F98_TypeDefinitionIndex = 53302;

class Class_2_37596F6A8F581F98 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifyMazePuzzleChallenge* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::UInt32 DNCPEJNPCBC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_37596F6A8F581F98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37596F6A8F581F98_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37596F6A8F581F98_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37596F6A8F581F98_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37596F6A8F581F98_TICK_OFFSET))(this, a1);
	}
};
