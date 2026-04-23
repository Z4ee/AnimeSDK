#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ST_ByInAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E12D0674A675E296_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92F95F0)
#define CLASS_3_E12D0674A675E296__CTOR_OFFSET UNITYSDK_OFFSET(0x92F9590)

inline static constexpr unsigned int Class_3_E12D0674A675E296_TypeDefinitionIndex = 48187;

class Class_3_E12D0674A675E296 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByInAIStatus*>
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + CLASS_3_E12D0674A675E296__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E12D0674A675E296_EVALUATE_OFFSET))(this);
	}
};
