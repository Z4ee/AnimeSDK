#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCharacterSomatoWidthType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65C1B60FB5A3E4BC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1883F550)
#define CLASS_3_65C1B60FB5A3E4BC__CTOR_OFFSET UNITYSDK_OFFSET(0x1883F520)

inline static constexpr unsigned int Class_3_65C1B60FB5A3E4BC_TypeDefinitionIndex = 54702;

class Class_3_65C1B60FB5A3E4BC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCharacterSomatoWidthType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + CLASS_3_65C1B60FB5A3E4BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65C1B60FB5A3E4BC_EVALUATE_OFFSET))(this);
	}
};
