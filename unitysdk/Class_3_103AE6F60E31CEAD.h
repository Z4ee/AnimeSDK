#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByEntityTimeScaleZero; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_103AE6F60E31CEAD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xACC1CB0)
#define CLASS_3_103AE6F60E31CEAD__CTOR_OFFSET UNITYSDK_OFFSET(0xACC1C80)

inline static constexpr unsigned int Class_3_103AE6F60E31CEAD_TypeDefinitionIndex = 49664;

class Class_3_103AE6F60E31CEAD : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByEntityTimeScaleZero*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByEntityTimeScaleZero* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByEntityTimeScaleZero*))((::PBYTE)hIl2Cpp + CLASS_3_103AE6F60E31CEAD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_103AE6F60E31CEAD_EVALUATE_OFFSET))(this);
	}
};
