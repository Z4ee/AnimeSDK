#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareRedStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0D52E7AB947D626_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A766340)
#define CLASS_3_C0D52E7AB947D626__CTOR_OFFSET UNITYSDK_OFFSET(0x1A766310)

inline static constexpr unsigned int Class_3_C0D52E7AB947D626_TypeDefinitionIndex = 54771;

class Class_3_C0D52E7AB947D626 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareRedStanceCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareRedStanceCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareRedStanceCount*))((::PBYTE)hIl2Cpp + CLASS_3_C0D52E7AB947D626__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0D52E7AB947D626_EVALUATE_OFFSET))(this);
	}
};
