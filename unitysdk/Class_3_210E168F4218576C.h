#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByHasPatrolPath; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_210E168F4218576C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8EB2F70)
#define CLASS_3_210E168F4218576C__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB2F40)

inline static constexpr unsigned int Class_3_210E168F4218576C_TypeDefinitionIndex = 42212;

class Class_3_210E168F4218576C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByHasPatrolPath*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByHasPatrolPath* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByHasPatrolPath*))((::PBYTE)hIl2Cpp + CLASS_3_210E168F4218576C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_210E168F4218576C_EVALUATE_OFFSET))(this);
	}
};
