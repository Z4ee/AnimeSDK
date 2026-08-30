#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7E61104234A02BD7.h"

namespace RPG::GameCore { class BattleSingleClickQTEConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_12EDC20CD781556E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A417630)

inline static constexpr unsigned int Class_2_12EDC20CD781556E_TypeDefinitionIndex = 56379;

class Class_2_12EDC20CD781556E : public ::Class_1_7E61104234A02BD7
{
public:
	::System::Boolean HNDKDLMDKBJ; // 0x48

	::System::Void _ctor(::RPG::GameCore::BattleSingleClickQTEConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleSingleClickQTEConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_12EDC20CD781556E__CTOR_OFFSET))(this, a1, a2);
	}
};
