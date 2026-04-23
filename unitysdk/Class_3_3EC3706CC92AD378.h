#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_IsPVE; }

#define CLASS_3_3EC3706CC92AD378_METHOD_3_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x17C12D50)
#define CLASS_3_3EC3706CC92AD378__CTOR_OFFSET UNITYSDK_OFFSET(0x17C12D30)

inline static constexpr unsigned int Class_3_3EC3706CC92AD378_TypeDefinitionIndex = 34139;

class Class_3_3EC3706CC92AD378 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_IsPVE* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_IsPVE*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_3EC3706CC92AD378__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3EC3706CC92AD378_METHOD_3_DFF98536D8B4074F_OFFSET))(this);
	}
};
