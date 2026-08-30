#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByCompareDimensionID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D08A48505CB945BE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x190FA020)
#define CLASS_3_D08A48505CB945BE__CTOR_OFFSET UNITYSDK_OFFSET(0x190F9FF0)

inline static constexpr unsigned int Class_3_D08A48505CB945BE_TypeDefinitionIndex = 53367;

class Class_3_D08A48505CB945BE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCompareDimensionID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + CLASS_3_D08A48505CB945BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D08A48505CB945BE_EVALUATE_OFFSET))(this);
	}
};
