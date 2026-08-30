#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareEvolveBuildProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_93FA18F05AD89280_EVALUATE_OFFSET UNITYSDK_OFFSET(0x199618F0)
#define CLASS_3_93FA18F05AD89280__CTOR_OFFSET UNITYSDK_OFFSET(0x199618C0)

inline static constexpr unsigned int Class_3_93FA18F05AD89280_TypeDefinitionIndex = 54745;

class Class_3_93FA18F05AD89280 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareEvolveBuildProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareEvolveBuildProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareEvolveBuildProperty*))((::PBYTE)hIl2Cpp + CLASS_3_93FA18F05AD89280__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93FA18F05AD89280_EVALUATE_OFFSET))(this);
	}
};
