#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_B8836451EE3130C0;
class Class_1_B8FF829EFDD29B81;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Branch; }

#define CLASS_2_36A8DBE879FC7F95_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13990D00)
#define CLASS_2_36A8DBE879FC7F95_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13990D60)
#define CLASS_2_36A8DBE879FC7F95_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x13990C30)
#define CLASS_2_36A8DBE879FC7F95_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13990CC0)
#define CLASS_2_36A8DBE879FC7F95_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x13990A90)
#define CLASS_2_36A8DBE879FC7F95__CTOR_OFFSET UNITYSDK_OFFSET(0x139909F0)

inline static constexpr unsigned int Class_2_36A8DBE879FC7F95_TypeDefinitionIndex = 72413;

class Class_2_36A8DBE879FC7F95 : public ::Class_1_F65B6F8790DF074B
{
public:
	::Class_1_B8836451EE3130C0* Field_2_0; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_Branch* Field_2_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_36A8DBE879FC7F95__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A8DBE879FC7F95_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A8DBE879FC7F95_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A8DBE879FC7F95_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A8DBE879FC7F95_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A8DBE879FC7F95_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
