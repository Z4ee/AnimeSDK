#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsMazeBuffAffectCurrentWave; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BACC41C642D898F1_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCFE0A0)
#define CLASS_3_BACC41C642D898F1__CTOR_OFFSET UNITYSDK_OFFSET(0xBCFE070)

inline static constexpr unsigned int Class_3_BACC41C642D898F1_TypeDefinitionIndex = 54676;

class Class_3_BACC41C642D898F1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + CLASS_3_BACC41C642D898F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BACC41C642D898F1_EVALUATE_OFFSET))(this);
	}
};
