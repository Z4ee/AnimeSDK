#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ST_ByInAIStatus; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B09851F03EAF109E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1AA64880)
#define CLASS_3_B09851F03EAF109E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA647C0)

inline static constexpr unsigned int Class_3_B09851F03EAF109E_TypeDefinitionIndex = 52484;

class Class_3_B09851F03EAF109E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByInAIStatus*>
{
public:
	::Class_2_21055A9FA74B791E* PJLGDHFHFLO; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + CLASS_3_B09851F03EAF109E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B09851F03EAF109E_EVALUATE_OFFSET))(this);
	}
};
