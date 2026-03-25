#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdventureByIsWeakTypeActive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E58F63795C38D714_EVALUATE_OFFSET UNITYSDK_OFFSET(0x116A7C80)
#define CLASS_3_E58F63795C38D714__CTOR_OFFSET UNITYSDK_OFFSET(0x116A7C50)

inline static constexpr unsigned int Class_3_E58F63795C38D714_TypeDefinitionIndex = 43550;

class Class_3_E58F63795C38D714 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdventureByIsWeakTypeActive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsWeakTypeActive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsWeakTypeActive*))((::PBYTE)hIl2Cpp + CLASS_3_E58F63795C38D714__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E58F63795C38D714_EVALUATE_OFFSET))(this);
	}
};
