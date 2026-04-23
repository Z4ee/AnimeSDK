#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CustomValueCompareEX; }

#define CLASS_3_43603A10A038CBD2_METHOD_3_71E62BC3617D39E5_OFFSET UNITYSDK_OFFSET(0x17C1EA20)
#define CLASS_3_43603A10A038CBD2__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1EA00)

inline static constexpr unsigned int Class_3_43603A10A038CBD2_TypeDefinitionIndex = 34148;

class Class_3_43603A10A038CBD2 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_43603A10A038CBD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_71E62BC3617D39E5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_43603A10A038CBD2_METHOD_3_71E62BC3617D39E5_OFFSET))(this);
	}
};
