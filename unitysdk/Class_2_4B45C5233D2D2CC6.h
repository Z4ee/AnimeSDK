#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_PlayBatchAnimation; }

#define CLASS_2_4B45C5233D2D2CC6_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x15EC2350)
#define CLASS_2_4B45C5233D2D2CC6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15EC23F0)
#define CLASS_2_4B45C5233D2D2CC6_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x15EC1C50)
#define CLASS_2_4B45C5233D2D2CC6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15EC23B0)
#define CLASS_2_4B45C5233D2D2CC6_METHOD_2_EDE9BCE51360D304_OFFSET UNITYSDK_OFFSET(0x15EC21F0)
#define CLASS_2_4B45C5233D2D2CC6__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC1BC0)

inline static constexpr unsigned int Class_2_4B45C5233D2D2CC6_TypeDefinitionIndex = 73954;

class Class_2_4B45C5233D2D2CC6 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_4B45C5233D2D2CC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B45C5233D2D2CC6_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B45C5233D2D2CC6_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B45C5233D2D2CC6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B45C5233D2D2CC6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_2_EDE9BCE51360D304(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_4B45C5233D2D2CC6_METHOD_2_EDE9BCE51360D304_OFFSET))(this, a1);
	}
};
