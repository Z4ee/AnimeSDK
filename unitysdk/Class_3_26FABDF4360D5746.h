#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareTargetCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26FABDF4360D5746_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1255CA70)
#define CLASS_3_26FABDF4360D5746__CTOR_OFFSET UNITYSDK_OFFSET(0x1255CA40)

inline static constexpr unsigned int Class_3_26FABDF4360D5746_TypeDefinitionIndex = 50355;

class Class_3_26FABDF4360D5746 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareTargetCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTargetCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTargetCount*))((::PBYTE)hIl2Cpp + CLASS_3_26FABDF4360D5746__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26FABDF4360D5746_EVALUATE_OFFSET))(this);
	}
};
