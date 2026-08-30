#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasModifier; }

#define CLASS_3_802FD8D2AFA8FA6F_METHOD_3_B8817F4F77EFC234_OFFSET UNITYSDK_OFFSET(0x1C0C2510)
#define CLASS_3_802FD8D2AFA8FA6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C090300)

inline static constexpr unsigned int Class_3_802FD8D2AFA8FA6F_TypeDefinitionIndex = 35671;

class Class_3_802FD8D2AFA8FA6F : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* KAHEOAGLBJN; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_802FD8D2AFA8FA6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B8817F4F77EFC234()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_802FD8D2AFA8FA6F_METHOD_3_B8817F4F77EFC234_OFFSET))(this);
	}
};
