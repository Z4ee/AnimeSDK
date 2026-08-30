#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByPlayerCurrentSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F94054C047570112_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17948A10)
#define CLASS_3_F94054C047570112__CTOR_OFFSET UNITYSDK_OFFSET(0x179489E0)

inline static constexpr unsigned int Class_3_F94054C047570112_TypeDefinitionIndex = 54687;

class Class_3_F94054C047570112 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByPlayerCurrentSkillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + CLASS_3_F94054C047570112__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F94054C047570112_EVALUATE_OFFSET))(this);
	}
};
