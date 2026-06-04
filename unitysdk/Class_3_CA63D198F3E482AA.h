#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA63D198F3E482AA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAC67210)
#define CLASS_3_CA63D198F3E482AA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC671E0)

inline static constexpr unsigned int Class_3_CA63D198F3E482AA_TypeDefinitionIndex = 49185;

class Class_3_CA63D198F3E482AA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropType*))((::PBYTE)hIl2Cpp + CLASS_3_CA63D198F3E482AA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA63D198F3E482AA_EVALUATE_OFFSET))(this);
	}
};
