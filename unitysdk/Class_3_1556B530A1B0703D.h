#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsFirstChallengeBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1556B530A1B0703D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11537E50)
#define CLASS_3_1556B530A1B0703D__CTOR_OFFSET UNITYSDK_OFFSET(0x11537E20)

inline static constexpr unsigned int Class_3_1556B530A1B0703D_TypeDefinitionIndex = 43734;

class Class_3_1556B530A1B0703D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsFirstChallengeBattle*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + CLASS_3_1556B530A1B0703D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1556B530A1B0703D_EVALUATE_OFFSET))(this);
	}
};
