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

#define CLASS_2_03116A69433FA129_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0xB5D5590)
#define CLASS_2_03116A69433FA129_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xB5D69C0)
#define CLASS_2_03116A69433FA129_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xB5D64F0)
#define CLASS_2_03116A69433FA129_METHOD_2_332E8DA02BCCBD12_OFFSET UNITYSDK_OFFSET(0xB5D5BD0)
#define CLASS_2_03116A69433FA129_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xB5D6890)
#define CLASS_2_03116A69433FA129__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D53E0)

inline static constexpr unsigned int Class_2_03116A69433FA129_TypeDefinitionIndex = 77440;

class Class_2_03116A69433FA129 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_2_6B60059019300BAD*, ::UnityEngine::Quaternion>* JIGAHLICPHA; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_Rotation* DEHFDECCMJG; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* AHOOLDFODPL; // 0x38
	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* MCNNKBAGPLB; // 0x40
	::System::Collections::Generic::List_1<::Class_2_6B60059019300BAD*>* HGCNLFIMDKL; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_2_6B60059019300BAD*, ::System::Single>* NMFECMKJOFP; // 0x50
	::System::Single HPCHCEFOKJB; // 0x58
	::System::Single BCGHNNBGMCM; // 0x5C
	::System::Single NCMEPPHLGEG; // 0x60

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03116A69433FA129_METHOD_2_106289055FB804CE_OFFSET))(this);
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
};
