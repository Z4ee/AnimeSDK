#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsStageBuffAffectCurrentWave; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_659E131D6A6BE55E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17AEE550)
#define CLASS_3_659E131D6A6BE55E__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEE520)

inline static constexpr unsigned int Class_3_659E131D6A6BE55E_TypeDefinitionIndex = 54896;

class Class_3_659E131D6A6BE55E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsStageBuffAffectCurrentWave*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsStageBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + CLASS_3_659E131D6A6BE55E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_659E131D6A6BE55E_EVALUATE_OFFSET))(this);
	}
};
