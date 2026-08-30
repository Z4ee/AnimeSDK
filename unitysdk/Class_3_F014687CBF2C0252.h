#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByContainResistBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F014687CBF2C0252_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15920E30)
#define CLASS_3_F014687CBF2C0252__CTOR_OFFSET UNITYSDK_OFFSET(0x15920E00)

inline static constexpr unsigned int Class_3_F014687CBF2C0252_TypeDefinitionIndex = 55101;

class Class_3_F014687CBF2C0252 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByContainResistBehaviorFlag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainResistBehaviorFlag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainResistBehaviorFlag*))((::PBYTE)hIl2Cpp + CLASS_3_F014687CBF2C0252__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F014687CBF2C0252_EVALUATE_OFFSET))(this);
	}
};
