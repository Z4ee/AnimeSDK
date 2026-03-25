#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_WaitTime; }

#define CLASS_2_5EF025F94D42172F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAC41740)
#define CLASS_2_5EF025F94D42172F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAC417C0)
#define CLASS_2_5EF025F94D42172F_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xAC415D0)
#define CLASS_2_5EF025F94D42172F_METHOD_2_BAC78EF103887A48_OFFSET UNITYSDK_OFFSET(0xAC416A0)
#define CLASS_2_5EF025F94D42172F_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAC41700)
#define CLASS_2_5EF025F94D42172F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC41580)
#define CLASS_2_5EF025F94D42172F__CTOR_OFFSET UNITYSDK_OFFSET(0xAC414F0)

inline static constexpr unsigned int Class_2_5EF025F94D42172F_TypeDefinitionIndex = 63375;

class Class_2_5EF025F94D42172F : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_WaitTime* Field_2_0; // 0x28
	::System::Single Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Single Method_2_BAC78EF103887A48()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F_METHOD_2_BAC78EF103887A48_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5EF025F94D42172F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
