#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSwitchHandCatchItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ED9667A7CD3A2C5B_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB5C4A00)
#define CLASS_3_ED9667A7CD3A2C5B__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C49D0)

inline static constexpr unsigned int Class_3_ED9667A7CD3A2C5B_TypeDefinitionIndex = 53394;

class Class_3_ED9667A7CD3A2C5B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSwitchHandCatchItem*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + CLASS_3_ED9667A7CD3A2C5B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ED9667A7CD3A2C5B_EVALUATE_OFFSET))(this);
	}
};
