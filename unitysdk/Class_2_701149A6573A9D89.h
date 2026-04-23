#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_1_A02AD12DCED9B766;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Branch; }

#define CLASS_2_701149A6573A9D89_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xAA70E80)
#define CLASS_2_701149A6573A9D89_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAA70EE0)
#define CLASS_2_701149A6573A9D89_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xAA70DB0)
#define CLASS_2_701149A6573A9D89_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAA70E40)
#define CLASS_2_701149A6573A9D89_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xAA70C20)
#define CLASS_2_701149A6573A9D89__CTOR_OFFSET UNITYSDK_OFFSET(0xAA70B90)

inline static constexpr unsigned int Class_2_701149A6573A9D89_TypeDefinitionIndex = 71391;

class Class_2_701149A6573A9D89 : public ::Class_1_F65B6F8790DF074B
{
public:
	::Class_1_A02AD12DCED9B766* Field_2_1; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_Branch* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_701149A6573A9D89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701149A6573A9D89_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_701149A6573A9D89_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701149A6573A9D89_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701149A6573A9D89_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_701149A6573A9D89_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
