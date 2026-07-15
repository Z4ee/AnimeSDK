#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_146CB9679DD1A056_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18EF88C0)
#define CLASS_3_146CB9679DD1A056__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF8890)

inline static constexpr unsigned int Class_3_146CB9679DD1A056_TypeDefinitionIndex = 52417;

class Class_3_146CB9679DD1A056 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInCustomTeamFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_3_146CB9679DD1A056__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_146CB9679DD1A056_EVALUATE_OFFSET))(this);
	}
};
