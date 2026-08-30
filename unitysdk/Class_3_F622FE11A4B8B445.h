#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTargetNatureID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F622FE11A4B8B445_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1524A7A0)
#define CLASS_3_F622FE11A4B8B445__CTOR_OFFSET UNITYSDK_OFFSET(0x1524A770)

inline static constexpr unsigned int Class_3_F622FE11A4B8B445_TypeDefinitionIndex = 54793;

class Class_3_F622FE11A4B8B445 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTargetNatureID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTargetNatureID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTargetNatureID*))((::PBYTE)hIl2Cpp + CLASS_3_F622FE11A4B8B445__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F622FE11A4B8B445_EVALUATE_OFFSET))(this);
	}
};
