#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsRootHitCallback; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CDF608E424ED2D8A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15F48850)
#define CLASS_3_CDF608E424ED2D8A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F48820)

inline static constexpr unsigned int Class_3_CDF608E424ED2D8A_TypeDefinitionIndex = 52206;

class Class_3_CDF608E424ED2D8A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRootHitCallback*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRootHitCallback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRootHitCallback*))((::PBYTE)hIl2Cpp + CLASS_3_CDF608E424ED2D8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDF608E424ED2D8A_EVALUATE_OFFSET))(this);
	}
};
