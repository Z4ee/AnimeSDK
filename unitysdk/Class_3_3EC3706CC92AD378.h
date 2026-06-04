#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsPVE; }

#define CLASS_3_3EC3706CC92AD378_METHOD_3_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x18B84000)
#define CLASS_3_3EC3706CC92AD378__CTOR_OFFSET UNITYSDK_OFFSET(0x18B83FE0)

inline static constexpr unsigned int Class_3_3EC3706CC92AD378_TypeDefinitionIndex = 34421;

class Class_3_3EC3706CC92AD378 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_3EC3706CC92AD378__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3EC3706CC92AD378_METHOD_3_209E4250CA87B30E_OFFSET))(this);
	}
};
