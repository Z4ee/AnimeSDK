#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEnergyBarEffect; }

#define CLASS_2_15E652668892A2EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A820000)
#define CLASS_2_15E652668892A2EC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A820040)
#define CLASS_2_15E652668892A2EC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A8201F0)
#define CLASS_2_15E652668892A2EC_TICK_OFFSET UNITYSDK_OFFSET(0x1A820240)
#define CLASS_2_15E652668892A2EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A81FFF0)

inline static constexpr unsigned int Class_2_15E652668892A2EC_TypeDefinitionIndex = 55925;

class Class_2_15E652668892A2EC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::TriggerEnergyBarEffect* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEnergyBarEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEnergyBarEffect*))((::PBYTE)hIl2Cpp + CLASS_2_15E652668892A2EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E652668892A2EC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E652668892A2EC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15E652668892A2EC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_15E652668892A2EC_TICK_OFFSET))(this, a1);
	}
};
