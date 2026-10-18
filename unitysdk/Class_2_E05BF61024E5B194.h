#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AdventurePositionCheckConfig; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_E05BF61024E5B194_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11952920)
#define CLASS_2_E05BF61024E5B194_GET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x11954000)
#define CLASS_2_E05BF61024E5B194_METHOD_2_1504B1D7C52AC88D_OFFSET UNITYSDK_OFFSET(0x11953A00)
#define CLASS_2_E05BF61024E5B194_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11952FB0)
#define CLASS_2_E05BF61024E5B194_METHOD_2_329D75B50DCBA9D5_OFFSET UNITYSDK_OFFSET(0x11953BB0)
#define CLASS_2_E05BF61024E5B194_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x11953F50)
#define CLASS_2_E05BF61024E5B194_METHOD_2_79F82AA229668E10_OFFSET UNITYSDK_OFFSET(0x11953030)
#define CLASS_2_E05BF61024E5B194_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x11952AA0)
#define CLASS_2_E05BF61024E5B194_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x11952F60)
#define CLASS_2_E05BF61024E5B194_METHOD_2_AE0258B108DEC531_OFFSET UNITYSDK_OFFSET(0x11953F70)
#define CLASS_2_E05BF61024E5B194_METHOD_2_B40F084418F05DE4_OFFSET UNITYSDK_OFFSET(0x11953200)
#define CLASS_2_E05BF61024E5B194_METHOD_2_F0A3E2362C37FB0E_OFFSET UNITYSDK_OFFSET(0x11952810)
#define CLASS_2_E05BF61024E5B194_METHOD_2_FA92B3E07A6BA5A6_OFFSET UNITYSDK_OFFSET(0x11953F80)
#define CLASS_2_E05BF61024E5B194_SET_POSAPDATIONTARGET_OFFSET UNITYSDK_OFFSET(0x11954010)
#define CLASS_2_E05BF61024E5B194_TICK_OFFSET UNITYSDK_OFFSET(0x11952970)
#define CLASS_2_E05BF61024E5B194__CTOR_OFFSET UNITYSDK_OFFSET(0x11954020)

inline static constexpr unsigned int Class_2_E05BF61024E5B194_TypeDefinitionIndex = 57363;

class Class_2_E05BF61024E5B194 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_HGEJCFJANNM()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E05BF61024E5B194_TypeDefinitionIndex)->GetStaticField(0x6F300);
	}
	::System::Action_1<::Class_2_E05BF61024E5B194*>* KMHBOBANHJI; // 0x18
	::RPG::GameCore::AdventurePositionCheckConfig* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::GameEntity* _PosApdationTarget_k__BackingField; // 0x28
	::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x30
	::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x38
	::System::Action_1<::Class_2_E05BF61024E5B194*>* GAHEPJKKNMJ; // 0x40
	::System::Single LPCKOIGHKLK; // 0x48
	::System::Boolean LAMACEHMLGJ; // 0x4C
	::UnityEngine::Vector3 AGNNCPBIICH; // 0x50
	::RPG::GameCore::CharacterAdventureSomatoType KBLEAJNBLEL; // 0x5C
	::System::Int32 CPANBNANIMM; // 0x60
	::Struct_2_5C05B865B0E3235A_1 ANOCHAPDGFN; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F0A3E2362C37FB0E(::RPG::GameCore::AdventurePositionCheckConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePositionCheckConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_F0A3E2362C37FB0E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_79F82AA229668E10(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_79F82AA229668E10_OFFSET))(this, a1);
	}

	::System::Void Method_2_1504B1D7C52AC88D(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_1504B1D7C52AC88D_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Boolean Method_2_B40F084418F05DE4(::UnityEngine::Vector3& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_B40F084418F05DE4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_329D75B50DCBA9D5(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Collider* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_329D75B50DCBA9D5_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_5C05B865B0E3235A_1 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_5C05B865B0E3235A_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::RPG::GameCore::CharacterAdventureSomatoType Method_2_AE0258B108DEC531()
	{
		return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_AE0258B108DEC531_OFFSET))(this);
	}

	::System::Void Method_2_FA92B3E07A6BA5A6(::RPG::GameCore::CharacterAdventureSomatoType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAdventureSomatoType))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_METHOD_2_FA92B3E07A6BA5A6_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_PosApdationTarget()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_GET_POSAPDATIONTARGET_OFFSET))(this);
	}

	::System::Void set_PosApdationTarget(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E05BF61024E5B194_SET_POSAPDATIONTARGET_OFFSET))(this, a1);
	}
};
