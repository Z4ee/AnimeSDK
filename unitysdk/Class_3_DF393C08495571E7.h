#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class AdvByInCustomZone; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF393C08495571E7_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBC2FCA0)
#define CLASS_3_DF393C08495571E7__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2FC70)

inline static constexpr unsigned int Class_3_DF393C08495571E7_TypeDefinitionIndex = 53374;

class Class_3_DF393C08495571E7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::AdvByInCustomZone*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByInCustomZone* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByInCustomZone*))((::PBYTE)hIl2Cpp + CLASS_3_DF393C08495571E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF393C08495571E7_EVALUATE_OFFSET))(this);
	}
};
