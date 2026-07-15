#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireVisualEffect; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define CLASS_2_8C58B59AF89E9259_METHOD_2_0E67CD81D5464455_OFFSET UNITYSDK_OFFSET(0x1744A970)
#define CLASS_2_8C58B59AF89E9259_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1744B0B0)
#define CLASS_2_8C58B59AF89E9259_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1744B150)
#define CLASS_2_8C58B59AF89E9259_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x1744AA20)
#define CLASS_2_8C58B59AF89E9259_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1744B110)
#define CLASS_2_8C58B59AF89E9259_METHOD_2_FE65F1EFD74E3E99_OFFSET UNITYSDK_OFFSET(0x1744AD00)
#define CLASS_2_8C58B59AF89E9259__CTOR_OFFSET UNITYSDK_OFFSET(0x1744A990)

inline static constexpr unsigned int Class_2_8C58B59AF89E9259_TypeDefinitionIndex = 73951;

class Class_2_8C58B59AF89E9259 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChenLingBattleEffectConfig* Method_2_0E67CD81D5464455()
	{
		return ((::RPG::GameCore::ChenLingBattleEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259_METHOD_2_0E67CD81D5464455_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_FE65F1EFD74E3E99(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259_METHOD_2_FE65F1EFD74E3E99_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C58B59AF89E9259_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
