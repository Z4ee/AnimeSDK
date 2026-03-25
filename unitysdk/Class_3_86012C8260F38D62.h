#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_86012C8260F38D62_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8A8A960)
#define CLASS_3_86012C8260F38D62__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8A930)

inline static constexpr unsigned int Class_3_86012C8260F38D62_TypeDefinitionIndex = 46756;

class Class_3_86012C8260F38D62 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + CLASS_3_86012C8260F38D62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86012C8260F38D62_EVALUATE_OFFSET))(this);
	}
};
