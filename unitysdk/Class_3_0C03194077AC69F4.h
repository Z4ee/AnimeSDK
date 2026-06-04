#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInAnimZone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0C03194077AC69F4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13B99CF0)
#define CLASS_3_0C03194077AC69F4__CTOR_OFFSET UNITYSDK_OFFSET(0x13B99CC0)

inline static constexpr unsigned int Class_3_0C03194077AC69F4_TypeDefinitionIndex = 49668;

class Class_3_0C03194077AC69F4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInAnimZone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + CLASS_3_0C03194077AC69F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C03194077AC69F4_EVALUATE_OFFSET))(this);
	}
};
