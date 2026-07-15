#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsMazeSkillAffectCurrentWave; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5489FDAF9C70F2B4_EVALUATE_OFFSET UNITYSDK_OFFSET(0x171E6910)
#define CLASS_3_5489FDAF9C70F2B4__CTOR_OFFSET UNITYSDK_OFFSET(0x171E68E0)

inline static constexpr unsigned int Class_3_5489FDAF9C70F2B4_TypeDefinitionIndex = 52202;

class Class_3_5489FDAF9C70F2B4 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + CLASS_3_5489FDAF9C70F2B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5489FDAF9C70F2B4_EVALUATE_OFFSET))(this);
	}
};
