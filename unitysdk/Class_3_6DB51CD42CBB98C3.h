#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsRogueTournCurRoomFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6DB51CD42CBB98C3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11126EC0)
#define CLASS_3_6DB51CD42CBB98C3__CTOR_OFFSET UNITYSDK_OFFSET(0x11126E90)

inline static constexpr unsigned int Class_3_6DB51CD42CBB98C3_TypeDefinitionIndex = 46761;

class Class_3_6DB51CD42CBB98C3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRogueTournCurRoomFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + CLASS_3_6DB51CD42CBB98C3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DB51CD42CBB98C3_EVALUATE_OFFSET))(this);
	}
};
