#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsCharacterWeaknessActivated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FF25C66139B96961_EVALUATE_OFFSET UNITYSDK_OFFSET(0x104F5D60)
#define CLASS_3_FF25C66139B96961__CTOR_OFFSET UNITYSDK_OFFSET(0x104F5D30)

inline static constexpr unsigned int Class_3_FF25C66139B96961_TypeDefinitionIndex = 43716;

class Class_3_FF25C66139B96961 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsCharacterWeaknessActivated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCharacterWeaknessActivated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCharacterWeaknessActivated*))((::PBYTE)hIl2Cpp + CLASS_3_FF25C66139B96961__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF25C66139B96961_EVALUATE_OFFSET))(this);
	}
};
