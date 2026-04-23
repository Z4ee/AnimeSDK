#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByTurnOwnerActionPhaseEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_01B0CF695AC3FB14_EVALUATE_OFFSET UNITYSDK_OFFSET(0x92C1C90)
#define CLASS_3_01B0CF695AC3FB14__CTOR_OFFSET UNITYSDK_OFFSET(0x92C1C60)

inline static constexpr unsigned int Class_3_01B0CF695AC3FB14_TypeDefinitionIndex = 50495;

class Class_3_01B0CF695AC3FB14 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByTurnOwnerActionPhaseEnd*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + CLASS_3_01B0CF695AC3FB14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_01B0CF695AC3FB14_EVALUATE_OFFSET))(this);
	}
};
