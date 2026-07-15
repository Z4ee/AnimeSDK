#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByInAttackAngle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_578728352BF03709_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15FDD2C0)
#define CLASS_3_578728352BF03709__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDD1D0)

inline static constexpr unsigned int Class_3_578728352BF03709_TypeDefinitionIndex = 49825;

class Class_3_578728352BF03709 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByInAttackAngle*>
{
public:
	::System::Single Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAttackAngle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAttackAngle*))((::PBYTE)hIl2Cpp + CLASS_3_578728352BF03709__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_578728352BF03709_EVALUATE_OFFSET))(this);
	}
};
