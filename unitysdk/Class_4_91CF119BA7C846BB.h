#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_75DBBBC880985ABC.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateB; }

#define CLASS_4_91CF119BA7C846BB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1824C860)
#define CLASS_4_91CF119BA7C846BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1824C7E0)

inline static constexpr unsigned int Class_4_91CF119BA7C846BB_TypeDefinitionIndex = 53265;

class Class_4_91CF119BA7C846BB : public ::Class_3_75DBBBC880985ABC
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateB*))((::PBYTE)hIl2Cpp + CLASS_4_91CF119BA7C846BB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_91CF119BA7C846BB_EVALUATE_OFFSET))(this);
	}
};
