#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3FF024B3A18C2C61_EVALUATE_OFFSET UNITYSDK_OFFSET(0x18E23FA0)
#define CLASS_3_3FF024B3A18C2C61_METHOD_3_1DB878688B10FB10_OFFSET UNITYSDK_OFFSET(0x18E23FF0)
#define CLASS_3_3FF024B3A18C2C61__CTOR_OFFSET UNITYSDK_OFFSET(0x18E23F70)

inline static constexpr unsigned int Class_3_3FF024B3A18C2C61_TypeDefinitionIndex = 54742;

class Class_3_3FF024B3A18C2C61 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareDynamicValue*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_3FF024B3A18C2C61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF024B3A18C2C61_EVALUATE_OFFSET))(this);
	}

	static ::System::Boolean Method_3_1DB878688B10FB10(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_3FF024B3A18C2C61_METHOD_3_1DB878688B10FB10_OFFSET))(a1, a2);
	}
};
