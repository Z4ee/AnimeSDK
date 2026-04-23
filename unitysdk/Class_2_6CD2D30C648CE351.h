#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll; }

#define CLASS_2_6CD2D30C648CE351_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x17BDDD80)
#define CLASS_2_6CD2D30C648CE351__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDDD70)

inline static constexpr unsigned int Class_2_6CD2D30C648CE351_TypeDefinitionIndex = 34114;

class Class_2_6CD2D30C648CE351 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* Field_2_0; // 0x18
	::Class_2_843468DEB2C89684* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_InitConsumnHPUnlimitedRoll*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_6CD2D30C648CE351__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CD2D30C648CE351_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}
};
