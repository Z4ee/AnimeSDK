#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ShowToast; }

#define CLASS_2_F2C738474E554576_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10BC2670)
#define CLASS_2_F2C738474E554576_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x10BC2280)
#define CLASS_2_F2C738474E554576_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BC2630)
#define CLASS_2_F2C738474E554576__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC2200)

inline static constexpr unsigned int Class_2_F2C738474E554576_TypeDefinitionIndex = 63379;

class Class_2_F2C738474E554576 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_ShowToast* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_F2C738474E554576__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C738474E554576_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2C738474E554576_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2C738474E554576_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
