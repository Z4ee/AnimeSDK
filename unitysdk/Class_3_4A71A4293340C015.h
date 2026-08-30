#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsFirstInsertAbilityInQueue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4A71A4293340C015_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB4CB250)
#define CLASS_3_4A71A4293340C015__CTOR_OFFSET UNITYSDK_OFFSET(0xB4CB220)

inline static constexpr unsigned int Class_3_4A71A4293340C015_TypeDefinitionIndex = 54871;

class Class_3_4A71A4293340C015 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsFirstInsertAbilityInQueue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsFirstInsertAbilityInQueue*))((::PBYTE)hIl2Cpp + CLASS_3_4A71A4293340C015__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A71A4293340C015_EVALUATE_OFFSET))(this);
	}
};
