#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect; }

#define CLASS_2_1662256E43A84C1D_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x13ED7EB0)
#define CLASS_2_1662256E43A84C1D__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED7EA0)

inline static constexpr unsigned int Class_2_1662256E43A84C1D_TypeDefinitionIndex = 34823;

class Class_2_1662256E43A84C1D : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_D8BECDCE48063EC7* Field_2_0; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_1662256E43A84C1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1662256E43A84C1D_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}
};
