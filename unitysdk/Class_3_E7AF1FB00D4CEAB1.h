#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsContainAdventureModifier; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E7AF1FB00D4CEAB1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1937A200)
#define CLASS_3_E7AF1FB00D4CEAB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1937A1D0)

inline static constexpr unsigned int Class_3_E7AF1FB00D4CEAB1_TypeDefinitionIndex = 52167;

class Class_3_E7AF1FB00D4CEAB1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsContainAdventureModifier*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + CLASS_3_E7AF1FB00D4CEAB1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7AF1FB00D4CEAB1_EVALUATE_OFFSET))(this);
	}
};
