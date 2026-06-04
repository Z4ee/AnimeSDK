#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByInAttackDistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65B83FEFCEF842FA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13792240)
#define CLASS_3_65B83FEFCEF842FA__CTOR_OFFSET UNITYSDK_OFFSET(0x137921B0)

inline static constexpr unsigned int Class_3_65B83FEFCEF842FA_TypeDefinitionIndex = 48813;

class Class_3_65B83FEFCEF842FA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByInAttackDistance*>
{
public:
	::System::Single Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + CLASS_3_65B83FEFCEF842FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65B83FEFCEF842FA_EVALUATE_OFFSET))(this);
	}
};
