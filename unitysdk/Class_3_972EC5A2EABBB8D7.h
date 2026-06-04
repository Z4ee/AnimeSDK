#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMissionCustomValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_972EC5A2EABBB8D7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA677670)
#define CLASS_3_972EC5A2EABBB8D7__CTOR_OFFSET UNITYSDK_OFFSET(0xA677640)

inline static constexpr unsigned int Class_3_972EC5A2EABBB8D7_TypeDefinitionIndex = 49175;

class Class_3_972EC5A2EABBB8D7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMissionCustomValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMissionCustomValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMissionCustomValue*))((::PBYTE)hIl2Cpp + CLASS_3_972EC5A2EABBB8D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_972EC5A2EABBB8D7_EVALUATE_OFFSET))(this);
	}
};
