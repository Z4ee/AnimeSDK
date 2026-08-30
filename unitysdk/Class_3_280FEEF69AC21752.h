#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ByAnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_280FEEF69AC21752_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1571AD80)
#define CLASS_3_280FEEF69AC21752_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1571AD10)
#define CLASS_3_280FEEF69AC21752__CTOR_OFFSET UNITYSDK_OFFSET(0x1571AC80)

inline static constexpr unsigned int Class_3_280FEEF69AC21752_TypeDefinitionIndex = 54692;

class Class_3_280FEEF69AC21752 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAnd*>
{
public:
	::Class_3_07C3C4D2990C49EE* HFOFIODMFGB; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752_DISPOSE_OFFSET))(this);
	}
};
