#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAttackType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DBA669B4EC578FB2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16153400)
#define CLASS_3_DBA669B4EC578FB2__CTOR_OFFSET UNITYSDK_OFFSET(0x161533D0)

inline static constexpr unsigned int Class_3_DBA669B4EC578FB2_TypeDefinitionIndex = 52013;

class Class_3_DBA669B4EC578FB2 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAttackType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAttackType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + CLASS_3_DBA669B4EC578FB2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBA669B4EC578FB2_EVALUATE_OFFSET))(this);
	}
};
