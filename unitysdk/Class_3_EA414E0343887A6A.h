#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_469A56953483CA0D;
namespace RPG::GameCore { class ST_ByForceExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EA414E0343887A6A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x153F9610)
#define CLASS_3_EA414E0343887A6A__CTOR_OFFSET UNITYSDK_OFFSET(0x153F9550)

inline static constexpr unsigned int Class_3_EA414E0343887A6A_TypeDefinitionIndex = 52477;

class Class_3_EA414E0343887A6A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByForceExitCombat*>
{
public:
	::Class_2_469A56953483CA0D* POLAEJPLLPF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + CLASS_3_EA414E0343887A6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA414E0343887A6A_EVALUATE_OFFSET))(this);
	}
};
