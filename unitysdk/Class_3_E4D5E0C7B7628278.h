#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E4D5E0C7B7628278_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11705070)
#define CLASS_3_E4D5E0C7B7628278__CTOR_OFFSET UNITYSDK_OFFSET(0x11705040)

inline static constexpr unsigned int Class_3_E4D5E0C7B7628278_TypeDefinitionIndex = 42591;

class Class_3_E4D5E0C7B7628278 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropID*))((::PBYTE)hIl2Cpp + CLASS_3_E4D5E0C7B7628278__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E4D5E0C7B7628278_EVALUATE_OFFSET))(this);
	}
};
