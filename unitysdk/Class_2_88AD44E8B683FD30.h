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

#define CLASS_2_88AD44E8B683FD30_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBC98E60)
#define CLASS_2_88AD44E8B683FD30_METHOD_2_49E0F57EF939BD50_OFFSET UNITYSDK_OFFSET(0xBC989C0)
#define CLASS_2_88AD44E8B683FD30_METHOD_2_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0xBC98060)
#define CLASS_2_88AD44E8B683FD30_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBC98E20)
#define CLASS_2_88AD44E8B683FD30_METHOD_2_F2A134C7AE009B90_OFFSET UNITYSDK_OFFSET(0xBC987C0)
#define CLASS_2_88AD44E8B683FD30__CTOR_OFFSET UNITYSDK_OFFSET(0xBC97F10)

inline static constexpr unsigned int Class_2_88AD44E8B683FD30_TypeDefinitionIndex = 77452;

class Class_2_88AD44E8B683FD30 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* GIEHPOMKGKG; // 0x28
	::System::Collections::Generic::HashSet_1<::Class_2_6B60059019300BAD*>* DIJCEKBNNKK; // 0x30
	::System::Single LLNIGIGFCEA; // 0x38
	::System::Boolean KLBDNLEGJPB; // 0x3C
	::System::Single DKOFFPPGEFI; // 0x40

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_88AD44E8B683FD30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88AD44E8B683FD30_METHOD_2_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F2A134C7AE009B90(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_88AD44E8B683FD30_METHOD_2_F2A134C7AE009B90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_49E0F57EF939BD50(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::Class_2_2090B77B5C7838F2* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Class_2_2090B77B5C7838F2*))((::PBYTE)hIl2Cpp + CLASS_2_88AD44E8B683FD30_METHOD_2_49E0F57EF939BD50_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88AD44E8B683FD30_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_88AD44E8B683FD30_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
