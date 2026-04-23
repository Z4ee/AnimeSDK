#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount; }

#define CLASS_2_D49A5CF3A1E031D9_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x17CC0970)
#define CLASS_2_D49A5CF3A1E031D9__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC0960)

inline static constexpr unsigned int Class_2_D49A5CF3A1E031D9_TypeDefinitionIndex = 34154;

class Class_2_D49A5CF3A1E031D9 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* Field_2_0; // 0x18
	::Class_1_EA5232D6CAD71030* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_D49A5CF3A1E031D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A5CF3A1E031D9_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
