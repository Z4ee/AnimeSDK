#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasSpareTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1ED8140F8E3F1D34_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1618B0D0)
#define CLASS_3_1ED8140F8E3F1D34__CTOR_OFFSET UNITYSDK_OFFSET(0x1618B0A0)

inline static constexpr unsigned int Class_3_1ED8140F8E3F1D34_TypeDefinitionIndex = 55107;

class Class_3_1ED8140F8E3F1D34 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasSpareTeamFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_3_1ED8140F8E3F1D34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1ED8140F8E3F1D34_EVALUATE_OFFSET))(this);
	}
};
