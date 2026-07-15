#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareModifierCustomEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_961760E3CB47E509_EVALUATE_OFFSET UNITYSDK_OFFSET(0x183B4530)
#define CLASS_3_961760E3CB47E509__CTOR_OFFSET UNITYSDK_OFFSET(0x183B4500)

inline static constexpr unsigned int Class_3_961760E3CB47E509_TypeDefinitionIndex = 52399;

class Class_3_961760E3CB47E509 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareModifierCustomEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareModifierCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareModifierCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_961760E3CB47E509__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_961760E3CB47E509_EVALUATE_OFFSET))(this);
	}
};
