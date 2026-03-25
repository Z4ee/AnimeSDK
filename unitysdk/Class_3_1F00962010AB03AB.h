#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_Chess_ByInAttackRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F00962010AB03AB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB28CDB0)
#define CLASS_3_1F00962010AB03AB__CTOR_OFFSET UNITYSDK_OFFSET(0xB28CD80)

inline static constexpr unsigned int Class_3_1F00962010AB03AB_TypeDefinitionIndex = 45179;

class Class_3_1F00962010AB03AB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_Chess_ByInAttackRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Chess_ByInAttackRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Chess_ByInAttackRange*))((::PBYTE)hIl2Cpp + CLASS_3_1F00962010AB03AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F00962010AB03AB_EVALUATE_OFFSET))(this);
	}
};
