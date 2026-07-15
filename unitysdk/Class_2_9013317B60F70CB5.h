#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_67AC58C55B729E15;
class Class_1_B8FF829EFDD29B81;
class Class_1_CCB3A003D9DADECF;
class Class_2_6B60059019300BAD;
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Split; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9013317B60F70CB5_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x16707D30)
#define CLASS_2_9013317B60F70CB5_METHOD_2_2B44A8D06493684B_OFFSET UNITYSDK_OFFSET(0x167085C0)
#define CLASS_2_9013317B60F70CB5_METHOD_2_320AB68DD8DFE62C_OFFSET UNITYSDK_OFFSET(0x16709420)
#define CLASS_2_9013317B60F70CB5_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16709890)
#define CLASS_2_9013317B60F70CB5_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x16708890)
#define CLASS_2_9013317B60F70CB5_METHOD_2_82C30BB7CCEA515F_OFFSET UNITYSDK_OFFSET(0x16708380)
#define CLASS_2_9013317B60F70CB5_METHOD_2_B72C0DD7ED2095CA_OFFSET UNITYSDK_OFFSET(0x16708E10)
#define CLASS_2_9013317B60F70CB5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16709920)
#define CLASS_2_9013317B60F70CB5_METHOD_2_F4722ED922CDA66B_OFFSET UNITYSDK_OFFSET(0x16709080)
#define CLASS_2_9013317B60F70CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x16707CA0)

inline static constexpr unsigned int Class_2_9013317B60F70CB5_TypeDefinitionIndex = 73959;

class Class_2_9013317B60F70CB5 : public ::Class_1_F65B6F8790DF074B
{
public:
	::Class_1_CCB3A003D9DADECF* Field_2_0; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_Split* Field_2_1; // 0x30
	::Class_1_67AC58C55B729E15* Field_2_2; // 0x38
	::RPG::Client::ChenLingBattleTeamSnapshot* Field_2_3; // 0x40
	::UnityEngine::Vector3 Field_2_4; // 0x48
	::System::Int32 Field_2_5; // 0x54
	::UnityEngine::Quaternion Field_2_6; // 0x58
	::System::Single Field_2_7; // 0x68
	::RPG::GameCore::FixPoint Field_2_8; // 0x70
	::UnityEngine::Vector3 Field_2_9; // 0x78
	::System::Single Field_2_10; // 0x84
	::System::Boolean Field_2_11; // 0x88
	::System::Single Field_2_12; // 0x8C

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_B8FF829EFDD29B81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_B8FF829EFDD29B81*))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::Class_2_6B60059019300BAD* Method_2_82C30BB7CCEA515F()
	{
		return ((::Class_2_6B60059019300BAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_82C30BB7CCEA515F_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_2B44A8D06493684B(::Class_2_6B60059019300BAD* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_2B44A8D06493684B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_B72C0DD7ED2095CA(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_B72C0DD7ED2095CA_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_F4722ED922CDA66B(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_F4722ED922CDA66B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_2_320AB68DD8DFE62C(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_320AB68DD8DFE62C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9013317B60F70CB5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
