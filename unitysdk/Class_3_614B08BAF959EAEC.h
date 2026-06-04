#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAllowInstantKill; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_614B08BAF959EAEC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14208E20)
#define CLASS_3_614B08BAF959EAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x14208DF0)

inline static constexpr unsigned int Class_3_614B08BAF959EAEC_TypeDefinitionIndex = 50921;

class Class_3_614B08BAF959EAEC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAllowInstantKill*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAllowInstantKill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAllowInstantKill*))((::PBYTE)hIl2Cpp + CLASS_3_614B08BAF959EAEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_614B08BAF959EAEC_EVALUATE_OFFSET))(this);
	}
};
