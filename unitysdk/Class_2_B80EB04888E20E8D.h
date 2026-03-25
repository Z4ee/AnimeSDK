#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_FireVisualEffect; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }

#define CLASS_2_B80EB04888E20E8D_METHOD_2_0E67CD81D5464455_OFFSET UNITYSDK_OFFSET(0xA9EFC90)
#define CLASS_2_B80EB04888E20E8D_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xAC39DE0)
#define CLASS_2_B80EB04888E20E8D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAC39E80)
#define CLASS_2_B80EB04888E20E8D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAC39EE0)
#define CLASS_2_B80EB04888E20E8D_METHOD_2_69956F720549F5FD_OFFSET UNITYSDK_OFFSET(0xAC39680)
#define CLASS_2_B80EB04888E20E8D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC39E40)
#define CLASS_2_B80EB04888E20E8D_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xA9EFD40)
#define CLASS_2_B80EB04888E20E8D__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EFCB0)

inline static constexpr unsigned int Class_2_B80EB04888E20E8D_TypeDefinitionIndex = 63364;

class Class_2_B80EB04888E20E8D : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_FireVisualEffect* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ChenLingBattleEffectConfig* Method_2_0E67CD81D5464455()
	{
		return ((::RPG::GameCore::ChenLingBattleEffectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_0E67CD81D5464455_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_2_69956F720549F5FD(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_69956F720549F5FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80EB04888E20E8D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
