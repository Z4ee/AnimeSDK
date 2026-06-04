#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4421D390114308EF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14165B90)
#define CLASS_3_4421D390114308EF__CTOR_OFFSET UNITYSDK_OFFSET(0x14165B60)

inline static constexpr unsigned int Class_3_4421D390114308EF_TypeDefinitionIndex = 51051;

class Class_3_4421D390114308EF : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasAssistAvatar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + CLASS_3_4421D390114308EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4421D390114308EF_EVALUATE_OFFSET))(this);
	}
};
