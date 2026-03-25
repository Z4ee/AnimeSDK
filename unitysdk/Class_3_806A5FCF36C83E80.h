#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareGridFightProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_806A5FCF36C83E80_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8BD3410)
#define CLASS_3_806A5FCF36C83E80__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD33E0)

inline static constexpr unsigned int Class_3_806A5FCF36C83E80_TypeDefinitionIndex = 43615;

class Class_3_806A5FCF36C83E80 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareGridFightProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareGridFightProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareGridFightProperty*))((::PBYTE)hIl2Cpp + CLASS_3_806A5FCF36C83E80__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_806A5FCF36C83E80_EVALUATE_OFFSET))(this);
	}
};
