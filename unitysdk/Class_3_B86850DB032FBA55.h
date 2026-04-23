#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsInCharmAction; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B86850DB032FBA55_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9573610)
#define CLASS_3_B86850DB032FBA55__CTOR_OFFSET UNITYSDK_OFFSET(0x95735E0)

inline static constexpr unsigned int Class_3_B86850DB032FBA55_TypeDefinitionIndex = 50440;

class Class_3_B86850DB032FBA55 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsInCharmAction*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInCharmAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInCharmAction*))((::PBYTE)hIl2Cpp + CLASS_3_B86850DB032FBA55__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B86850DB032FBA55_EVALUATE_OFFSET))(this);
	}
};
