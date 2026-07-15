#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7FFEA3BE48B0F62F_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF17D530)
#define CLASS_3_7FFEA3BE48B0F62F__CTOR_OFFSET UNITYSDK_OFFSET(0xF17D500)

inline static constexpr unsigned int Class_3_7FFEA3BE48B0F62F_TypeDefinitionIndex = 52113;

class Class_3_7FFEA3BE48B0F62F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareValue*))((::PBYTE)hIl2Cpp + CLASS_3_7FFEA3BE48B0F62F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7FFEA3BE48B0F62F_EVALUATE_OFFSET))(this);
	}
};
