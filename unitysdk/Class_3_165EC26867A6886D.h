#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCurrentTeammemberCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_165EC26867A6886D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x994E920)
#define CLASS_3_165EC26867A6886D__CTOR_OFFSET UNITYSDK_OFFSET(0x994E8F0)

inline static constexpr unsigned int Class_3_165EC26867A6886D_TypeDefinitionIndex = 48987;

class Class_3_165EC26867A6886D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCurrentTeammemberCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCurrentTeammemberCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCurrentTeammemberCount*))((::PBYTE)hIl2Cpp + CLASS_3_165EC26867A6886D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_165EC26867A6886D_EVALUATE_OFFSET))(this);
	}
};
