#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_469A56953483CA0D;
namespace RPG::GameCore { class ST_ByForceExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2710B1AB57C713F9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8747700)
#define CLASS_3_2710B1AB57C713F9__CTOR_OFFSET UNITYSDK_OFFSET(0x87476A0)

inline static constexpr unsigned int Class_3_2710B1AB57C713F9_TypeDefinitionIndex = 42207;

class Class_3_2710B1AB57C713F9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByForceExitCombat*>
{
public:
	::Class_2_469A56953483CA0D* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByForceExitCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByForceExitCombat*))((::PBYTE)hIl2Cpp + CLASS_3_2710B1AB57C713F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2710B1AB57C713F9_EVALUATE_OFFSET))(this);
	}
};
