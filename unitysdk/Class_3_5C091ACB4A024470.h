#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByRankActivated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5C091ACB4A024470_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD273660)
#define CLASS_3_5C091ACB4A024470__CTOR_OFFSET UNITYSDK_OFFSET(0xD273630)

inline static constexpr unsigned int Class_3_5C091ACB4A024470_TypeDefinitionIndex = 54922;

class Class_3_5C091ACB4A024470 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByRankActivated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRankActivated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRankActivated*))((::PBYTE)hIl2Cpp + CLASS_3_5C091ACB4A024470__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C091ACB4A024470_EVALUATE_OFFSET))(this);
	}
};
