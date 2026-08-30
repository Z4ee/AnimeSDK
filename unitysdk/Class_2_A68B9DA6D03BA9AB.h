#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureMonsterTriggerMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A68B9DA6D03BA9AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A1480)
#define CLASS_2_A68B9DA6D03BA9AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4A14C0)
#define CLASS_2_A68B9DA6D03BA9AB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4A1840)
#define CLASS_2_A68B9DA6D03BA9AB_TICK_OFFSET UNITYSDK_OFFSET(0xB4A1930)
#define CLASS_2_A68B9DA6D03BA9AB__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A1470)

inline static constexpr unsigned int Class_2_A68B9DA6D03BA9AB_TypeDefinitionIndex = 58059;

class Class_2_A68B9DA6D03BA9AB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureMonsterTriggerMove* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureMonsterTriggerMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureMonsterTriggerMove*))((::PBYTE)hIl2Cpp + CLASS_2_A68B9DA6D03BA9AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A68B9DA6D03BA9AB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A68B9DA6D03BA9AB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A68B9DA6D03BA9AB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A68B9DA6D03BA9AB_TICK_OFFSET))(this, a1);
	}
};
