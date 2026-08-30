#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_98922C27E1FF2A5C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x158D01E0)
#define CLASS_3_98922C27E1FF2A5C__CTOR_OFFSET UNITYSDK_OFFSET(0x158D01B0)

inline static constexpr unsigned int Class_3_98922C27E1FF2A5C_TypeDefinitionIndex = 54741;

class Class_3_98922C27E1FF2A5C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareCustomString*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCustomString* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + CLASS_3_98922C27E1FF2A5C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98922C27E1FF2A5C_EVALUATE_OFFSET))(this);
	}
};
