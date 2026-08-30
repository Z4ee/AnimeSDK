#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareQuestProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CFDF99D21E5860FC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x163749D0)
#define CLASS_3_CFDF99D21E5860FC__CTOR_OFFSET UNITYSDK_OFFSET(0x163749A0)

inline static constexpr unsigned int Class_3_CFDF99D21E5860FC_TypeDefinitionIndex = 53393;

class Class_3_CFDF99D21E5860FC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareQuestProgress*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + CLASS_3_CFDF99D21E5860FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CFDF99D21E5860FC_EVALUATE_OFFSET))(this);
	}
};
