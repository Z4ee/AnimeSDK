#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTargetEntityType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_80FA1C3C548C0443_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A47210)
#define CLASS_3_80FA1C3C548C0443__CTOR_OFFSET UNITYSDK_OFFSET(0x13A471E0)

inline static constexpr unsigned int Class_3_80FA1C3C548C0443_TypeDefinitionIndex = 52240;

class Class_3_80FA1C3C548C0443 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTargetEntityType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetEntityType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetEntityType*))((::PBYTE)hIl2Cpp + CLASS_3_80FA1C3C548C0443__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_80FA1C3C548C0443_EVALUATE_OFFSET))(this);
	}
};
