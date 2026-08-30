#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsBattlePostureType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C63055CEB549DB23_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17070D00)
#define CLASS_3_C63055CEB549DB23__CTOR_OFFSET UNITYSDK_OFFSET(0x17070CD0)

inline static constexpr unsigned int Class_3_C63055CEB549DB23_TypeDefinitionIndex = 54676;

class Class_3_C63055CEB549DB23 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsBattlePostureType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + CLASS_3_C63055CEB549DB23__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C63055CEB549DB23_EVALUATE_OFFSET))(this);
	}
};
