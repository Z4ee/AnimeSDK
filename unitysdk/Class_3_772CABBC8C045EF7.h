#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareHPRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_772CABBC8C045EF7_EVALUATE_OFFSET UNITYSDK_OFFSET(0x179FF820)
#define CLASS_3_772CABBC8C045EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x179FF7F0)

inline static constexpr unsigned int Class_3_772CABBC8C045EF7_TypeDefinitionIndex = 54750;

class Class_3_772CABBC8C045EF7 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareHPRatio*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHPRatio* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHPRatio*))((::PBYTE)hIl2Cpp + CLASS_3_772CABBC8C045EF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_772CABBC8C045EF7_EVALUATE_OFFSET))(this);
	}
};
