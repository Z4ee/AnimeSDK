#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckAdvModifierCallBackName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA4A70422619FDF7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFECDBE0)
#define CLASS_3_BA4A70422619FDF7__CTOR_OFFSET UNITYSDK_OFFSET(0xFECDBB0)

inline static constexpr unsigned int Class_3_BA4A70422619FDF7_TypeDefinitionIndex = 54493;

class Class_3_BA4A70422619FDF7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckAdvModifierCallBackName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + CLASS_3_BA4A70422619FDF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA4A70422619FDF7_EVALUATE_OFFSET))(this);
	}
};
