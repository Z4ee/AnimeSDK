#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E8FFFD6578CC58C9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13844900)
#define CLASS_3_E8FFFD6578CC58C9__CTOR_OFFSET UNITYSDK_OFFSET(0x138448D0)

inline static constexpr unsigned int Class_3_E8FFFD6578CC58C9_TypeDefinitionIndex = 50941;

class Class_3_E8FFFD6578CC58C9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckIsLimboRevivable*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + CLASS_3_E8FFFD6578CC58C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8FFFD6578CC58C9_EVALUATE_OFFSET))(this);
	}
};
