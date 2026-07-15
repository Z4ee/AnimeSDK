#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAlertValueInRange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D230D8D04ECD865F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16E6E360)
#define CLASS_3_D230D8D04ECD865F__CTOR_OFFSET UNITYSDK_OFFSET(0x16E6E330)

inline static constexpr unsigned int Class_3_D230D8D04ECD865F_TypeDefinitionIndex = 51983;

class Class_3_D230D8D04ECD865F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAlertValueInRange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAlertValueInRange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAlertValueInRange*))((::PBYTE)hIl2Cpp + CLASS_3_D230D8D04ECD865F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D230D8D04ECD865F_EVALUATE_OFFSET))(this);
	}
};
