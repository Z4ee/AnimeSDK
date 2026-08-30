#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareDamageTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_69DCC80FE37603DF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1161F550)
#define CLASS_3_69DCC80FE37603DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1161F520)

inline static constexpr unsigned int Class_3_69DCC80FE37603DF_TypeDefinitionIndex = 55092;

class Class_3_69DCC80FE37603DF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareDamageTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDamageTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDamageTag*))((::PBYTE)hIl2Cpp + CLASS_3_69DCC80FE37603DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_69DCC80FE37603DF_EVALUATE_OFFSET))(this);
	}
};
