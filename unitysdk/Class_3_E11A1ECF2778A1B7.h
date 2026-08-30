#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierDeathSource; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E11A1ECF2778A1B7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB4F6A0)
#define CLASS_3_E11A1ECF2778A1B7__CTOR_OFFSET UNITYSDK_OFFSET(0xBB4F670)

inline static constexpr unsigned int Class_3_E11A1ECF2778A1B7_TypeDefinitionIndex = 54754;

class Class_3_E11A1ECF2778A1B7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierDeathSource*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + CLASS_3_E11A1ECF2778A1B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E11A1ECF2778A1B7_EVALUATE_OFFSET))(this);
	}
};
