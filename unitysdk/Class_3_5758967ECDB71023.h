#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInfiniteBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5758967ECDB71023_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8C4A500)
#define CLASS_3_5758967ECDB71023__CTOR_OFFSET UNITYSDK_OFFSET(0x8C4A4D0)

inline static constexpr unsigned int Class_3_5758967ECDB71023_TypeDefinitionIndex = 44106;

class Class_3_5758967ECDB71023 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInfiniteBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInfiniteBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInfiniteBattle*))((::PBYTE)hIl2Cpp + CLASS_3_5758967ECDB71023__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5758967ECDB71023_EVALUATE_OFFSET))(this);
	}
};
