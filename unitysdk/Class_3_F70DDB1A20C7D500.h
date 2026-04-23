#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasInsertAbilityPending; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F70DDB1A20C7D500_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD9EC610)
#define CLASS_3_F70DDB1A20C7D500__CTOR_OFFSET UNITYSDK_OFFSET(0xD9EC5E0)

inline static constexpr unsigned int Class_3_F70DDB1A20C7D500_TypeDefinitionIndex = 50389;

class Class_3_F70DDB1A20C7D500 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasInsertAbilityPending*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasInsertAbilityPending* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasInsertAbilityPending*))((::PBYTE)hIl2Cpp + CLASS_3_F70DDB1A20C7D500__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F70DDB1A20C7D500_EVALUATE_OFFSET))(this);
	}
};
