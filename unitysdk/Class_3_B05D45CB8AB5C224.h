#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_07CB640A20D6F01A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerEffectForUI; }

#define CLASS_3_B05D45CB8AB5C224__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B7610)

inline static constexpr unsigned int Class_3_B05D45CB8AB5C224_TypeDefinitionIndex = 55918;

class Class_3_B05D45CB8AB5C224 : public ::Class_2_07CB640A20D6F01A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + CLASS_3_B05D45CB8AB5C224__CTOR_OFFSET))(this, a1, a2);
	}
};
