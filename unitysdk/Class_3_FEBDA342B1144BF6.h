#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareBattleEventID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FEBDA342B1144BF6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11E2C440)
#define CLASS_3_FEBDA342B1144BF6__CTOR_OFFSET UNITYSDK_OFFSET(0x11E2C410)

inline static constexpr unsigned int Class_3_FEBDA342B1144BF6_TypeDefinitionIndex = 50293;

class Class_3_FEBDA342B1144BF6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareBattleEventID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareBattleEventID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareBattleEventID*))((::PBYTE)hIl2Cpp + CLASS_3_FEBDA342B1144BF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FEBDA342B1144BF6_EVALUATE_OFFSET))(this);
	}
};
