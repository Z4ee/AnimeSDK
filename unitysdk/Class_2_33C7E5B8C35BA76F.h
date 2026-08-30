#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class DebateManager; }
namespace RPG::GameCore { class DebateCostChangce; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_33C7E5B8C35BA76F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16203E20)
#define CLASS_2_33C7E5B8C35BA76F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16203C20)
#define CLASS_2_33C7E5B8C35BA76F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16203E70)
#define CLASS_2_33C7E5B8C35BA76F_TICK_OFFSET UNITYSDK_OFFSET(0x16203EC0)
#define CLASS_2_33C7E5B8C35BA76F__CTOR_OFFSET UNITYSDK_OFFSET(0x16203C10)

inline static constexpr unsigned int Class_2_33C7E5B8C35BA76F_TypeDefinitionIndex = 52999;

class Class_2_33C7E5B8C35BA76F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::DebateManager* OGPNBADIHKM; // 0x20
	::RPG::GameCore::DebateCostChangce* OFKGLJOAMLD; // 0x28
	::System::Single PGMIOKKLHIE; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DebateCostChangce* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DebateCostChangce*))((::PBYTE)hIl2Cpp + CLASS_2_33C7E5B8C35BA76F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C7E5B8C35BA76F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C7E5B8C35BA76F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C7E5B8C35BA76F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_33C7E5B8C35BA76F_TICK_OFFSET))(this, a1);
	}
};
