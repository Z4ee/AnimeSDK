#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCurrentModifierStatusType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_21FAD37D2F60A666_EVALUATE_OFFSET UNITYSDK_OFFSET(0x178318E0)
#define CLASS_3_21FAD37D2F60A666__CTOR_OFFSET UNITYSDK_OFFSET(0x178318B0)

inline static constexpr unsigned int Class_3_21FAD37D2F60A666_TypeDefinitionIndex = 52054;

class Class_3_21FAD37D2F60A666 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCurrentModifierStatusType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + CLASS_3_21FAD37D2F60A666__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_21FAD37D2F60A666_EVALUATE_OFFSET))(this);
	}
};
