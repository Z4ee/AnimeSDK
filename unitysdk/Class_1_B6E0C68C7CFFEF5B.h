#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterWeaknessSpecialType.h"
#include "unitysdk/RPG/GameCore/WeaknessState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6E0C68C7CFFEF5B_GET_ISBOSSPANEL_OFFSET UNITYSDK_OFFSET(0x1450AFB0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_086772AC32D6BFC9_OFFSET UNITYSDK_OFFSET(0x1450A020)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_17F22C055863E893_1_OFFSET UNITYSDK_OFFSET(0x14509F20)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_17F22C055863E893_2_OFFSET UNITYSDK_OFFSET(0x14509FA0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_17F22C055863E893_OFFSET UNITYSDK_OFFSET(0x14509EA0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14509E40)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_2DB9E513187D6683_OFFSET UNITYSDK_OFFSET(0x1450A240)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_30E7533A487BD75C_OFFSET UNITYSDK_OFFSET(0x1450A130)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x1450AEA0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14509BB0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4011FDBF39CB0C46_OFFSET UNITYSDK_OFFSET(0x1450A810)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x1450A380)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET UNITYSDK_OFFSET(0x14509DA0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4F1BE5A08CA439DD_OFFSET UNITYSDK_OFFSET(0x1450A910)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_5DB6CF4A7180BD76_OFFSET UNITYSDK_OFFSET(0x1450AAC0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x1450A530)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_9214CA70E05AF534_OFFSET UNITYSDK_OFFSET(0x1450A640)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_C51E1F14BC0C7341_OFFSET UNITYSDK_OFFSET(0x14509CC0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_CA033AD137D88B69_OFFSET UNITYSDK_OFFSET(0x1450AB80)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14509C70)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x1450A080)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_DA5597481994D152_OFFSET UNITYSDK_OFFSET(0x1450A7B0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_DE23CE986C1A1789_OFFSET UNITYSDK_OFFSET(0x14509B40)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_E2A306C5DD2FB440_OFFSET UNITYSDK_OFFSET(0x1450A890)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_EBBD06DFB7C23A9A_OFFSET UNITYSDK_OFFSET(0x1450AE10)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_EDE51B31CB05573F_OFFSET UNITYSDK_OFFSET(0x14509C00)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x1450A750)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F31F0AC82813D7EB_1_OFFSET UNITYSDK_OFFSET(0x1450A4C0)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F31F0AC82813D7EB_OFFSET UNITYSDK_OFFSET(0x1450A450)
#define CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F941B64ADF94EB92_OFFSET UNITYSDK_OFFSET(0x1450A990)
#define CLASS_1_B6E0C68C7CFFEF5B_SET_ISBOSSPANEL_OFFSET UNITYSDK_OFFSET(0x1450AFC0)
#define CLASS_1_B6E0C68C7CFFEF5B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1450AFD0)
#define CLASS_1_B6E0C68C7CFFEF5B__CTOR_OFFSET UNITYSDK_OFFSET(0x14509BA0)

inline static constexpr unsigned int Class_1_B6E0C68C7CFFEF5B_TypeDefinitionIndex = 67084;

class Class_1_B6E0C68C7CFFEF5B : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::RPG::GameCore::MonsterWeaknessSpecialType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6E0C68C7CFFEF5B_TypeDefinitionIndex)->GetStaticField(0x4A190);
	}
	::RPG::GameCore::LevelUIComponent* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_3; // 0x20
	::System::Boolean _IsBossPanel_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B__CCTOR_OFFSET))();
	}

	static ::Class_1_B6E0C68C7CFFEF5B* Method_1_DE23CE986C1A1789(::RPG::GameCore::LevelUIComponent* a1)
	{
		return ((::Class_1_B6E0C68C7CFFEF5B*(*)(::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_DE23CE986C1A1789_OFFSET))(a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDE51B31CB05573F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_EDE51B31CB05573F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_C51E1F14BC0C7341(::RPG::GameCore::AliveStateMask a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_C51E1F14BC0C7341_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4EC2E1ECDEE1B9F2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4EC2E1ECDEE1B9F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType Method_1_17F22C055863E893()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_17F22C055863E893_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType Method_1_17F22C055863E893_1()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_17F22C055863E893_1_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType Method_1_17F22C055863E893_2()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_17F22C055863E893_2_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType Method_1_086772AC32D6BFC9()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_086772AC32D6BFC9_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::RPG::GameCore::WeaknessState Method_1_30E7533A487BD75C()
	{
		return ((::RPG::GameCore::WeaknessState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_30E7533A487BD75C_OFFSET))(this);
	}

	::RPG::GameCore::WeaknessState Method_1_2DB9E513187D6683(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::RPG::GameCore::WeaknessState(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_2DB9E513187D6683_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_1_F31F0AC82813D7EB(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F31F0AC82813D7EB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F31F0AC82813D7EB_1(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F31F0AC82813D7EB_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_8A76897D6A693475_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType Method_1_9214CA70E05AF534(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_9214CA70E05AF534_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_DA5597481994D152()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_DA5597481994D152_OFFSET))(this);
	}

	::System::Boolean Method_1_4011FDBF39CB0C46(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4011FDBF39CB0C46_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType Method_1_E2A306C5DD2FB440(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_E2A306C5DD2FB440_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType Method_1_4F1BE5A08CA439DD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_4F1BE5A08CA439DD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F941B64ADF94EB92(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_F941B64ADF94EB92_OFFSET))(this, a1);
	}

	::RPG::GameCore::AttackDamageType Method_1_5DB6CF4A7180BD76(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AttackDamageType a2)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_5DB6CF4A7180BD76_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AttackDamageType Method_1_CA033AD137D88B69()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_CA033AD137D88B69_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>* Method_1_EBBD06DFB7C23A9A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::MonsterWeaknessSpecialType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_EBBD06DFB7C23A9A_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Boolean get_IsBossPanel()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_GET_ISBOSSPANEL_OFFSET))(this);
	}

	::System::Void set_IsBossPanel(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6E0C68C7CFFEF5B_SET_ISBOSSPANEL_OFFSET))(this, a1);
	}
};
