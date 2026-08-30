#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByMainMissionFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_85C734E04584BDF1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19158000)
#define CLASS_3_85C734E04584BDF1__CTOR_OFFSET UNITYSDK_OFFSET(0x19157FD0)

inline static constexpr unsigned int Class_3_85C734E04584BDF1_TypeDefinitionIndex = 52877;

class Class_3_85C734E04584BDF1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByMainMissionFinish*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByMainMissionFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByMainMissionFinish*))((::PBYTE)hIl2Cpp + CLASS_3_85C734E04584BDF1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_85C734E04584BDF1_EVALUATE_OFFSET))(this);
	}
};
