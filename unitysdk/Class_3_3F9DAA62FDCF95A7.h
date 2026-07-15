#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_21055A9FA74B791E;
namespace RPG::GameCore { class ST_ByExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3F9DAA62FDCF95A7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D7EDF0)
#define CLASS_3_3F9DAA62FDCF95A7__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7ED30)

inline static constexpr unsigned int Class_3_3F9DAA62FDCF95A7_TypeDefinitionIndex = 49816;

class Class_3_3F9DAA62FDCF95A7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByExitCombat*>
{
public:
	::Class_2_21055A9FA74B791E* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + CLASS_3_3F9DAA62FDCF95A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F9DAA62FDCF95A7_EVALUATE_OFFSET))(this);
	}
};
