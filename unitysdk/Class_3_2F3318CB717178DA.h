#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class BySkipNextTeleportEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2F3318CB717178DA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A58670)
#define CLASS_3_2F3318CB717178DA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A58640)

inline static constexpr unsigned int Class_3_2F3318CB717178DA_TypeDefinitionIndex = 49686;

class Class_3_2F3318CB717178DA : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::BySkipNextTeleportEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + CLASS_3_2F3318CB717178DA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F3318CB717178DA_EVALUATE_OFFSET))(this);
	}
};
