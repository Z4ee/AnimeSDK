#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RtByCanMove; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1614D976A44879E7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x138BCDD0)
#define CLASS_3_1614D976A44879E7__CTOR_OFFSET UNITYSDK_OFFSET(0x138BCDA0)

inline static constexpr unsigned int Class_3_1614D976A44879E7_TypeDefinitionIndex = 50622;

class Class_3_1614D976A44879E7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RtByCanMove*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByCanMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByCanMove*))((::PBYTE)hIl2Cpp + CLASS_3_1614D976A44879E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1614D976A44879E7_EVALUATE_OFFSET))(this);
	}
};
