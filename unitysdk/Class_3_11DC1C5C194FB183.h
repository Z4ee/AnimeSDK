#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareItemNumber; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_11DC1C5C194FB183_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17A90510)
#define CLASS_3_11DC1C5C194FB183__CTOR_OFFSET UNITYSDK_OFFSET(0x17A904E0)

inline static constexpr unsigned int Class_3_11DC1C5C194FB183_TypeDefinitionIndex = 49714;

class Class_3_11DC1C5C194FB183 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareItemNumber*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + CLASS_3_11DC1C5C194FB183__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_11DC1C5C194FB183_EVALUATE_OFFSET))(this);
	}
};
