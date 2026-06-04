#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsStageFirstWave; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8EE7558846AF24F7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13795730)
#define CLASS_3_8EE7558846AF24F7__CTOR_OFFSET UNITYSDK_OFFSET(0x13795700)

inline static constexpr unsigned int Class_3_8EE7558846AF24F7_TypeDefinitionIndex = 51121;

class Class_3_8EE7558846AF24F7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsStageFirstWave*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + CLASS_3_8EE7558846AF24F7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8EE7558846AF24F7_EVALUATE_OFFSET))(this);
	}
};
