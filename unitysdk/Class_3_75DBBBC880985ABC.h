#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_B798001FE639F577;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace System { class Object; }

#define CLASS_3_75DBBBC880985ABC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11BC54A0)
#define CLASS_3_75DBBBC880985ABC__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC5420)

inline static constexpr unsigned int Class_3_75DBBBC880985ABC_TypeDefinitionIndex = 51435;

class Class_3_75DBBBC880985ABC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::UniversalHotFixBasePredicate*>
{
public:
	::System::Object* Field_3_2; // 0x28
	::Class_1_B798001FE639F577* Field_3_1; // 0x30
	::RPG::GameCore::UniversalHotFixBasePredicate* Field_3_0; // 0x38
	::System::Object* Field_3_4; // 0x40
	::System::Object* Field_3_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + CLASS_3_75DBBBC880985ABC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75DBBBC880985ABC_EVALUATE_OFFSET))(this);
	}
};
