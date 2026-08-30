#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByCheckMoveInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E05C03D776012D3C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AA42150)
#define CLASS_3_E05C03D776012D3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA42120)

inline static constexpr unsigned int Class_3_E05C03D776012D3C_TypeDefinitionIndex = 53381;

class Class_3_E05C03D776012D3C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByCheckMoveInput*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + CLASS_3_E05C03D776012D3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E05C03D776012D3C_EVALUATE_OFFSET))(this);
	}
};
