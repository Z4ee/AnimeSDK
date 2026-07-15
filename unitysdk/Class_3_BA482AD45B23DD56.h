#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareFirstPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BA482AD45B23DD56_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17067E30)
#define CLASS_3_BA482AD45B23DD56__CTOR_OFFSET UNITYSDK_OFFSET(0x17067E00)

inline static constexpr unsigned int Class_3_BA482AD45B23DD56_TypeDefinitionIndex = 50168;

class Class_3_BA482AD45B23DD56 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareFirstPerformance*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFirstPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFirstPerformance*))((::PBYTE)hIl2Cpp + CLASS_3_BA482AD45B23DD56__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BA482AD45B23DD56_EVALUATE_OFFSET))(this);
	}
};
