#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect; }

#define CLASS_2_1662256E43A84C1D_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x17C555E0)
#define CLASS_2_1662256E43A84C1D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C555D0)

inline static constexpr unsigned int Class_2_1662256E43A84C1D_TypeDefinitionIndex = 34159;

class Class_2_1662256E43A84C1D : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_EA5232D6CAD71030* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_DiceCountAfterSelect*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_2_1662256E43A84C1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1662256E43A84C1D_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}
};
