#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll; }

#define CLASS_2_6CD2D30C648CE351_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1627BD70)
#define CLASS_2_6CD2D30C648CE351__CTOR_OFFSET UNITYSDK_OFFSET(0x1627BD60)

inline static constexpr unsigned int Class_2_6CD2D30C648CE351_TypeDefinitionIndex = 35639;

class Class_2_6CD2D30C648CE351 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* IGHAHBNLIJA; // 0x18
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6CD2D30C648CE351__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CD2D30C648CE351_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}
};
