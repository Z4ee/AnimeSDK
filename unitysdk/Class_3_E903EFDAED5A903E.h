#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class AdvByCompareDynamicValue; }
namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E903EFDAED5A903E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13C3FE60)
#define CLASS_3_E903EFDAED5A903E__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3FCB0)

inline static constexpr unsigned int Class_3_E903EFDAED5A903E_TypeDefinitionIndex = 50895;

class Class_3_E903EFDAED5A903E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByCompareDynamicValue*>
{
public:
	// static const ::RPG::GameCore::DynamicValueContextScope Field_3_0; // 0x0
	::RPG::GameCore::ByCompareDynamicValue* Field_3_1; // 0x28
	::RPG::GameCore::StringHash Field_3_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_E903EFDAED5A903E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E903EFDAED5A903E_EVALUATE_OFFSET))(this);
	}
};
