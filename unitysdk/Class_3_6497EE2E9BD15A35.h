#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByGridFightHasSameTrait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6497EE2E9BD15A35_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14B801A0)
#define CLASS_3_6497EE2E9BD15A35__CTOR_OFFSET UNITYSDK_OFFSET(0x14B80170)

inline static constexpr unsigned int Class_3_6497EE2E9BD15A35_TypeDefinitionIndex = 52134;

class Class_3_6497EE2E9BD15A35 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByGridFightHasSameTrait*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightHasSameTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightHasSameTrait*))((::PBYTE)hIl2Cpp + CLASS_3_6497EE2E9BD15A35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6497EE2E9BD15A35_EVALUATE_OFFSET))(this);
	}
};
