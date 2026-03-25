#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsEnemy; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C0326A139D8FAF2A_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB283B40)
#define CLASS_3_C0326A139D8FAF2A__CTOR_OFFSET UNITYSDK_OFFSET(0xB283B10)

inline static constexpr unsigned int Class_3_C0326A139D8FAF2A_TypeDefinitionIndex = 43730;

class Class_3_C0326A139D8FAF2A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsEnemy*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsEnemy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + CLASS_3_C0326A139D8FAF2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0326A139D8FAF2A_EVALUATE_OFFSET))(this);
	}
};
