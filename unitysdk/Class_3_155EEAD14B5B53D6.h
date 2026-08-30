#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RA_ByAlertLevel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_155EEAD14B5B53D6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A0E9B00)
#define CLASS_3_155EEAD14B5B53D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E9AD0)

inline static constexpr unsigned int Class_3_155EEAD14B5B53D6_TypeDefinitionIndex = 52379;

class Class_3_155EEAD14B5B53D6 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RA_ByAlertLevel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByAlertLevel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByAlertLevel*))((::PBYTE)hIl2Cpp + CLASS_3_155EEAD14B5B53D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_155EEAD14B5B53D6_EVALUATE_OFFSET))(this);
	}
};
