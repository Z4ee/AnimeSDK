#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsRotatableTimeRewindTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_428ADF1AA5227AF3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x180F9660)
#define CLASS_3_428ADF1AA5227AF3__CTOR_OFFSET UNITYSDK_OFFSET(0x180F9630)

inline static constexpr unsigned int Class_3_428ADF1AA5227AF3_TypeDefinitionIndex = 53624;

class Class_3_428ADF1AA5227AF3 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsRotatableTimeRewindTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + CLASS_3_428ADF1AA5227AF3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_428ADF1AA5227AF3_EVALUATE_OFFSET))(this);
	}
};
