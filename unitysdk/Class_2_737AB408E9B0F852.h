#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_PlayBatchAnimation; }

#define CLASS_2_737AB408E9B0F852_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1153F5E0)
#define CLASS_2_737AB408E9B0F852_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1153F680)
#define CLASS_2_737AB408E9B0F852_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1153F6E0)
#define CLASS_2_737AB408E9B0F852_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x1153EF20)
#define CLASS_2_737AB408E9B0F852_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1153F640)
#define CLASS_2_737AB408E9B0F852_METHOD_2_EDE9BCE51360D304_OFFSET UNITYSDK_OFFSET(0x1153F410)
#define CLASS_2_737AB408E9B0F852__CTOR_OFFSET UNITYSDK_OFFSET(0x1153EE90)

inline static constexpr unsigned int Class_2_737AB408E9B0F852_TypeDefinitionIndex = 63367;

class Class_2_737AB408E9B0F852 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_PlayBatchAnimation* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_2_EDE9BCE51360D304(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852_METHOD_2_EDE9BCE51360D304_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_737AB408E9B0F852_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
