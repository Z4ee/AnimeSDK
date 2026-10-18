#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_2090B77B5C7838F2;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SummonSoldier; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_50AC8709360B93C1_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBB70C40)
#define CLASS_2_50AC8709360B93C1_METHOD_2_5FCE569D51DFB537_OFFSET UNITYSDK_OFFSET(0xBB70840)
#define CLASS_2_50AC8709360B93C1_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xBB6FEE0)
#define CLASS_2_50AC8709360B93C1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB70C00)
#define CLASS_2_50AC8709360B93C1_METHOD_2_F2A134C7AE009B90_OFFSET UNITYSDK_OFFSET(0xBB70640)
#define CLASS_2_50AC8709360B93C1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB6FD90)

inline static constexpr unsigned int Class_2_50AC8709360B93C1_TypeDefinitionIndex = 77923;

class Class_2_50AC8709360B93C1 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_6B60059019300BAD*>* DIJCEKBNNKK; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* GIEHPOMKGKG; // 0x30
	::System::Single DKOFFPPGEFI; // 0x38
	::System::Single LLNIGIGFCEA; // 0x3C
	::System::Boolean KLBDNLEGJPB; // 0x40

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_50AC8709360B93C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AC8709360B93C1_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F2A134C7AE009B90(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_50AC8709360B93C1_METHOD_2_F2A134C7AE009B90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_5FCE569D51DFB537(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::Class_2_2090B77B5C7838F2* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_2_50AC8709360B93C1_METHOD_2_5FCE569D51DFB537_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50AC8709360B93C1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_50AC8709360B93C1_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
