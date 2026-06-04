#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class BySwitchMascotCanShootTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5E901310C807892_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C72090)
#define CLASS_3_B5E901310C807892__CTOR_OFFSET UNITYSDK_OFFSET(0x10C72060)

inline static constexpr unsigned int Class_3_B5E901310C807892_TypeDefinitionIndex = 54192;

class Class_3_B5E901310C807892 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::BySwitchMascotCanShootTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + CLASS_3_B5E901310C807892__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5E901310C807892_EVALUATE_OFFSET))(this);
	}
};
