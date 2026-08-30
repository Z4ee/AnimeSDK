#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckModifierCallBackName; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1AF31149CBDC46E0_EVALUATE_OFFSET UNITYSDK_OFFSET(0x162E7320)
#define CLASS_3_1AF31149CBDC46E0__CTOR_OFFSET UNITYSDK_OFFSET(0x162E72F0)

inline static constexpr unsigned int Class_3_1AF31149CBDC46E0_TypeDefinitionIndex = 54718;

class Class_3_1AF31149CBDC46E0 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckModifierCallBackName*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackName* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackName*))((::PBYTE)hIl2Cpp + CLASS_3_1AF31149CBDC46E0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1AF31149CBDC46E0_EVALUATE_OFFSET))(this);
	}
};
