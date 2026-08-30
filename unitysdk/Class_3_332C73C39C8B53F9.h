#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByPlayerGravityOppositeToCurrentSurface; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_332C73C39C8B53F9_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17796730)
#define CLASS_3_332C73C39C8B53F9__CTOR_OFFSET UNITYSDK_OFFSET(0x17796700)

inline static constexpr unsigned int Class_3_332C73C39C8B53F9_TypeDefinitionIndex = 53097;

class Class_3_332C73C39C8B53F9 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPlayerGravityOppositeToCurrentSurface*))((::PBYTE)hIl2Cpp + CLASS_3_332C73C39C8B53F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_332C73C39C8B53F9_EVALUATE_OFFSET))(this);
	}
};
