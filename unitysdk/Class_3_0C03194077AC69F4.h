#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInAnimZone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0C03194077AC69F4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x157CD480)
#define CLASS_3_0C03194077AC69F4__CTOR_OFFSET UNITYSDK_OFFSET(0x157CD450)

inline static constexpr unsigned int Class_3_0C03194077AC69F4_TypeDefinitionIndex = 50722;

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
