#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount; }

#define CLASS_2_D49A5CF3A1E031D9_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x1AAF8E80)
#define CLASS_2_D49A5CF3A1E031D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF8E70)

inline static constexpr unsigned int Class_2_D49A5CF3A1E031D9_TypeDefinitionIndex = 35679;

class Class_2_D49A5CF3A1E031D9 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* IGHAHBNLIJA; // 0x18
	::Class_1_D8BECDCE48063EC7* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_D49A5CF3A1E031D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A5CF3A1E031D9_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}
};
