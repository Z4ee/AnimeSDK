#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsFirstInsertAbilityInQueue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4A71A4293340C015_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11A3CA00)
#define CLASS_3_4A71A4293340C015__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3C9D0)

inline static constexpr unsigned int Class_3_4A71A4293340C015_TypeDefinitionIndex = 50434;

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
