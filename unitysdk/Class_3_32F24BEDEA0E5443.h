#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDamageSourceContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_32F24BEDEA0E5443_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8B5C430)
#define CLASS_3_32F24BEDEA0E5443__CTOR_OFFSET UNITYSDK_OFFSET(0x8B5C400)

inline static constexpr unsigned int Class_3_32F24BEDEA0E5443_TypeDefinitionIndex = 43680;

class Class_3_32F24BEDEA0E5443 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDamageSourceContainBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDamageSourceContainBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_32F24BEDEA0E5443__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32F24BEDEA0E5443_EVALUATE_OFFSET))(this);
	}
};
