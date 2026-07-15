#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierCallBackIsSelf; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_637269D2BE97D214_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18F24190)
#define CLASS_3_637269D2BE97D214__CTOR_OFFSET UNITYSDK_OFFSET(0x18F24160)

inline static constexpr unsigned int Class_3_637269D2BE97D214_TypeDefinitionIndex = 52031;

class Class_3_637269D2BE97D214 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierCallBackIsSelf*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackIsSelf* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackIsSelf*))((::PBYTE)hIl2Cpp + CLASS_3_637269D2BE97D214__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637269D2BE97D214_EVALUATE_OFFSET))(this);
	}
};
