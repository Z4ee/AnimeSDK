#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareStageType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7BF6AA271E8C54EE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1703F3E0)
#define CLASS_3_7BF6AA271E8C54EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1703F3B0)

inline static constexpr unsigned int Class_3_7BF6AA271E8C54EE_TypeDefinitionIndex = 52099;

class Class_3_7BF6AA271E8C54EE : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareStageType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareStageType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareStageType*))((::PBYTE)hIl2Cpp + CLASS_3_7BF6AA271E8C54EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF6AA271E8C54EE_EVALUATE_OFFSET))(this);
	}
};
