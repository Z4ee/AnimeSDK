#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F05A4A4A8567ABAB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC72F9D0)
#define CLASS_3_F05A4A4A8567ABAB__CTOR_OFFSET UNITYSDK_OFFSET(0xC72F9A0)

inline static constexpr unsigned int Class_3_F05A4A4A8567ABAB_TypeDefinitionIndex = 48557;

class Class_3_F05A4A4A8567ABAB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropState*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropState*))((::PBYTE)hIl2Cpp + CLASS_3_F05A4A4A8567ABAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F05A4A4A8567ABAB_EVALUATE_OFFSET))(this);
	}
};
