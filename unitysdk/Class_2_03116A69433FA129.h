#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Rotation; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_03116A69433FA129_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x145597E0)
#define CLASS_2_03116A69433FA129_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x14559310)
#define CLASS_2_03116A69433FA129_METHOD_2_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0x14558970)
#define CLASS_2_03116A69433FA129_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14559960)
#define CLASS_2_03116A69433FA129_METHOD_2_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0x145583A0)
#define CLASS_2_03116A69433FA129_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x145596B0)
#define CLASS_2_03116A69433FA129__CTOR_OFFSET UNITYSDK_OFFSET(0x145581F0)

inline static constexpr unsigned int Class_2_03116A69433FA129_TypeDefinitionIndex = 72430;

class Class_2_03116A69433FA129 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_2_6B60059019300BAD*, ::UnityEngine::Quaternion>* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* Field_2_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::Class_2_6B60059019300BAD*, ::System::Single>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* Field_2_4; // 0x48
	::RPG::GameCore::ChenLingBattleAbility_Rotation* Field_2_5; // 0x50
	::System::Single Field_2_6; // 0x58
	::System::Single Field_2_7; // 0x5C
	::System::Single Field_2_8; // 0x60

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void Method_2_332E8DA02BCCBD12(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_332E8DA02BCCBD12_OFFSET))(this, a1);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
