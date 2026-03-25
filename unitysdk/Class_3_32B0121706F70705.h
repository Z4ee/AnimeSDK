#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCasterAliveOrLimbo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_32B0121706F70705_EVALUATE_OFFSET UNITYSDK_OFFSET(0xA226A70)
#define CLASS_3_32B0121706F70705__CTOR_OFFSET UNITYSDK_OFFSET(0xA226A40)

inline static constexpr unsigned int Class_3_32B0121706F70705_TypeDefinitionIndex = 43921;

class Class_3_32B0121706F70705 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCasterAliveOrLimbo*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCasterAliveOrLimbo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCasterAliveOrLimbo*))((::PBYTE)hIl2Cpp + CLASS_3_32B0121706F70705__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_32B0121706F70705_EVALUATE_OFFSET))(this);
	}
};
