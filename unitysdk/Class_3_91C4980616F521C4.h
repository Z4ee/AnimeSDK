#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCharacterSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_91C4980616F521C4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1897E1F0)
#define CLASS_3_91C4980616F521C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1897E1C0)

inline static constexpr unsigned int Class_3_91C4980616F521C4_TypeDefinitionIndex = 54735;

class Class_3_91C4980616F521C4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCharacterSpeed*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + CLASS_3_91C4980616F521C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C4980616F521C4_EVALUATE_OFFSET))(this);
	}
};
