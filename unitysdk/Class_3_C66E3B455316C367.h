#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckCharacterFly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C66E3B455316C367_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A8D3B0)
#define CLASS_3_C66E3B455316C367__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8D380)

inline static constexpr unsigned int Class_3_C66E3B455316C367_TypeDefinitionIndex = 54707;

class Class_3_C66E3B455316C367 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckCharacterFly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + CLASS_3_C66E3B455316C367__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C66E3B455316C367_EVALUATE_OFFSET))(this);
	}
};
