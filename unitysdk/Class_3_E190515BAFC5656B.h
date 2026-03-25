#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class RA_ByDistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E190515BAFC5656B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1191BF80)
#define CLASS_3_E190515BAFC5656B__CTOR_OFFSET UNITYSDK_OFFSET(0x1191BF50)

inline static constexpr unsigned int Class_3_E190515BAFC5656B_TypeDefinitionIndex = 42119;

class Class_3_E190515BAFC5656B : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::RA_ByDistance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_ByDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_ByDistance*))((::PBYTE)hIl2Cpp + CLASS_3_E190515BAFC5656B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E190515BAFC5656B_EVALUATE_OFFSET))(this);
	}
};
