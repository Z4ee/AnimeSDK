#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_12C3ED04B580CAC3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1000AEA0)
#define CLASS_3_12C3ED04B580CAC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1000AE70)

inline static constexpr unsigned int Class_3_12C3ED04B580CAC3_TypeDefinitionIndex = 50320;

class Class_3_12C3ED04B580CAC3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareModifierValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareModifierValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareModifierValue*))((::PBYTE)hIl2Cpp + CLASS_3_12C3ED04B580CAC3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_12C3ED04B580CAC3_EVALUATE_OFFSET))(this);
	}
};
