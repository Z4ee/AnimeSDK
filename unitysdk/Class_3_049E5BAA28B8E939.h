#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByComparePropPuzzleCreated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_049E5BAA28B8E939_EVALUATE_OFFSET UNITYSDK_OFFSET(0x185360A0)
#define CLASS_3_049E5BAA28B8E939__CTOR_OFFSET UNITYSDK_OFFSET(0x18536070)

inline static constexpr unsigned int Class_3_049E5BAA28B8E939_TypeDefinitionIndex = 53391;

class Class_3_049E5BAA28B8E939 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByComparePropPuzzleCreated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + CLASS_3_049E5BAA28B8E939__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_049E5BAA28B8E939_EVALUATE_OFFSET))(this);
	}
};
