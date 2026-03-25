#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareMonsterTemplateID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_44C62CBD082E0714_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C903A0)
#define CLASS_3_44C62CBD082E0714__CTOR_OFFSET UNITYSDK_OFFSET(0x10C90370)

inline static constexpr unsigned int Class_3_44C62CBD082E0714_TypeDefinitionIndex = 43627;

class Class_3_44C62CBD082E0714 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareMonsterTemplateID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMonsterTemplateID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMonsterTemplateID*))((::PBYTE)hIl2Cpp + CLASS_3_44C62CBD082E0714__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44C62CBD082E0714_EVALUATE_OFFSET))(this);
	}
};
