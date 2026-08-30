#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByDynamicValueDefined; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4397D72CC734C22C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15405E00)
#define CLASS_3_4397D72CC734C22C__CTOR_OFFSET UNITYSDK_OFFSET(0x15405DD0)

inline static constexpr unsigned int Class_3_4397D72CC734C22C_TypeDefinitionIndex = 55105;

class Class_3_4397D72CC734C22C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByDynamicValueDefined*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByDynamicValueDefined* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByDynamicValueDefined*))((::PBYTE)hIl2Cpp + CLASS_3_4397D72CC734C22C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4397D72CC734C22C_EVALUATE_OFFSET))(this);
	}
};
