#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSummonUnitCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_96C5E57DEAA2662D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1375F9A0)
#define CLASS_3_96C5E57DEAA2662D__CTOR_OFFSET UNITYSDK_OFFSET(0x1375F970)

inline static constexpr unsigned int Class_3_96C5E57DEAA2662D_TypeDefinitionIndex = 51018;

class Class_3_96C5E57DEAA2662D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSummonUnitCount*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSummonUnitCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSummonUnitCount*))((::PBYTE)hIl2Cpp + CLASS_3_96C5E57DEAA2662D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96C5E57DEAA2662D_EVALUATE_OFFSET))(this);
	}
};
