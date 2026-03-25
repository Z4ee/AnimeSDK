#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasModifier; }

#define CLASS_3_802FD8D2AFA8FA6F_METHOD_3_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x166692A0)
#define CLASS_3_802FD8D2AFA8FA6F__CTOR_OFFSET UNITYSDK_OFFSET(0x16669280)

inline static constexpr unsigned int Class_3_802FD8D2AFA8FA6F_TypeDefinitionIndex = 28467;

class Class_3_802FD8D2AFA8FA6F : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_802FD8D2AFA8FA6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_802FD8D2AFA8FA6F_METHOD_3_83DA3EC57FF907F4_OFFSET))(this);
	}
};
