#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_10B699A7F42E042B;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixBasePredicate; }
namespace System { class Object; }

#define CLASS_3_75DBBBC880985ABC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE4FA90)
#define CLASS_3_75DBBBC880985ABC__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4FA10)

inline static constexpr unsigned int Class_3_75DBBBC880985ABC_TypeDefinitionIndex = 55786;

class Class_3_75DBBBC880985ABC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::UniversalHotFixBasePredicate*>
{
public:
	::System::Object* PGLHDMEECHP; // 0x28
	::System::Object* IIOFACHKJGP; // 0x30
	::System::Object* FFMHIBPLNDN; // 0x38
	::RPG::GameCore::UniversalHotFixBasePredicate* OPCCJDHNKEC; // 0x40
	::Class_1_10B699A7F42E042B* CDMOKNNGKCC; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixBasePredicate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixBasePredicate*))((::PBYTE)hIl2Cpp + CLASS_3_75DBBBC880985ABC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_75DBBBC880985ABC_EVALUATE_OFFSET))(this);
	}
};
