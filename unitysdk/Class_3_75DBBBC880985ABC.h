#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_C33B8A52813B25A2;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace System { class Object; }

#define CLASS_3_75DBBBC880985ABC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBF70610)
#define CLASS_3_75DBBBC880985ABC__CTOR_OFFSET UNITYSDK_OFFSET(0xBF70590)

inline static constexpr unsigned int Class_3_75DBBBC880985ABC_TypeDefinitionIndex = 55974;

class Class_3_75DBBBC880985ABC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::UniversalHotFixBasePredicate*>
{
public:
	::System::Object* PGLHDMEECHP; // 0x28
	::System::Object* FFMHIBPLNDN; // 0x30
	::RPG::GameCore::UniversalHotFixBasePredicate* OPCCJDHNKEC; // 0x38
	::System::Object* IIOFACHKJGP; // 0x40
	::Class_1_C33B8A52813B25A2* CDMOKNNGKCC; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + CLASS_3_75DBBBC880985ABC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75DBBBC880985ABC_EVALUATE_OFFSET))(this);
	}
};
