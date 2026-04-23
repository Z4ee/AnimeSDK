#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_9D4DD2F4235F8658;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A374247BAE4A43F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x98C0540)
#define CLASS_3_2A374247BAE4A43F__CTOR_OFFSET UNITYSDK_OFFSET(0x98C0460)

inline static constexpr unsigned int Class_3_2A374247BAE4A43F_TypeDefinitionIndex = 48178;

class Class_3_2A374247BAE4A43F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByEnterCombat*>
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_0; // 0x28
	::RPG::GameCore::NPCComponent* Field_3_1; // 0x30
	::Class_2_C14C025AFA60DCA2* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + CLASS_3_2A374247BAE4A43F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A374247BAE4A43F_EVALUATE_OFFSET))(this);
	}
};
