#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareGroupProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A3A59C3FCE5624A1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15920AB0)
#define CLASS_3_A3A59C3FCE5624A1__CTOR_OFFSET UNITYSDK_OFFSET(0x15920A80)

inline static constexpr unsigned int Class_3_A3A59C3FCE5624A1_TypeDefinitionIndex = 52841;

class Class_3_A3A59C3FCE5624A1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareGroupProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGroupProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGroupProperty*))((::PBYTE)hIl2Cpp + CLASS_3_A3A59C3FCE5624A1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3A59C3FCE5624A1_EVALUATE_OFFSET))(this);
	}
};
