#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace RPG::GameCore { class ChenLingEnemyRow; }

#define CLASS_1_CCB3A003D9DADECF_GET_ATKSPD_OFFSET UNITYSDK_OFFSET(0xAFD4EC0)
#define CLASS_1_CCB3A003D9DADECF_GET_ATK_OFFSET UNITYSDK_OFFSET(0xAFD4E80)
#define CLASS_1_CCB3A003D9DADECF_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0xAFD4EE0)
#define CLASS_1_CCB3A003D9DADECF_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xAFD4F60)
#define CLASS_1_CCB3A003D9DADECF_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0xAFD4F20)
#define CLASS_1_CCB3A003D9DADECF_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0xAFD4F40)
#define CLASS_1_CCB3A003D9DADECF_GET_HP_OFFSET UNITYSDK_OFFSET(0xAFD4EA0)
#define CLASS_1_CCB3A003D9DADECF_GET_MOVESPD_OFFSET UNITYSDK_OFFSET(0xAFD4F00)
#define CLASS_1_CCB3A003D9DADECF_GET_READYSCALE_OFFSET UNITYSDK_OFFSET(0xAFD4E60)
#define CLASS_1_CCB3A003D9DADECF_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xAFD4E40)
#define CLASS_1_CCB3A003D9DADECF_GET_SIZETIER_OFFSET UNITYSDK_OFFSET(0xAFD4E20)
#define CLASS_1_CCB3A003D9DADECF_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xAFD4E00)
#define CLASS_1_CCB3A003D9DADECF_GET_UNITID_OFFSET UNITYSDK_OFFSET(0xAFD4DE0)
#define CLASS_1_CCB3A003D9DADECF_METHOD_1_25373A99E7C2BF9C_OFFSET UNITYSDK_OFFSET(0xAFD4B60)
#define CLASS_1_CCB3A003D9DADECF_METHOD_1_8C90C775EAE86885_OFFSET UNITYSDK_OFFSET(0xAFD4C50)
#define CLASS_1_CCB3A003D9DADECF_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0xAFD4D90)
#define CLASS_1_CCB3A003D9DADECF_SET_ATKSPD_OFFSET UNITYSDK_OFFSET(0xAFD4ED0)
#define CLASS_1_CCB3A003D9DADECF_SET_ATK_OFFSET UNITYSDK_OFFSET(0xAFD4E90)
#define CLASS_1_CCB3A003D9DADECF_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0xAFD4EF0)
#define CLASS_1_CCB3A003D9DADECF_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xAFD4F70)
#define CLASS_1_CCB3A003D9DADECF_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0xAFD4F30)
#define CLASS_1_CCB3A003D9DADECF_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0xAFD4F50)
#define CLASS_1_CCB3A003D9DADECF_SET_HP_OFFSET UNITYSDK_OFFSET(0xAFD4EB0)
#define CLASS_1_CCB3A003D9DADECF_SET_MOVESPD_OFFSET UNITYSDK_OFFSET(0xAFD4F10)
#define CLASS_1_CCB3A003D9DADECF_SET_READYSCALE_OFFSET UNITYSDK_OFFSET(0xAFD4E70)
#define CLASS_1_CCB3A003D9DADECF_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xAFD4E50)
#define CLASS_1_CCB3A003D9DADECF_SET_SIZETIER_OFFSET UNITYSDK_OFFSET(0xAFD4E30)
#define CLASS_1_CCB3A003D9DADECF_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xAFD4E10)
#define CLASS_1_CCB3A003D9DADECF_SET_UNITID_OFFSET UNITYSDK_OFFSET(0xAFD4DF0)
#define CLASS_1_CCB3A003D9DADECF__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAFD46F0)
#define CLASS_1_CCB3A003D9DADECF__CTOR_2_OFFSET UNITYSDK_OFFSET(0xAFD47B0)
#define CLASS_1_CCB3A003D9DADECF__CTOR_OFFSET UNITYSDK_OFFSET(0xAFD41D0)

inline static constexpr unsigned int Class_1_CCB3A003D9DADECF_TypeDefinitionIndex = 72500;

class Class_1_CCB3A003D9DADECF : public ::System::Object
{
public:
	::System::Single _Scale_k__BackingField; // 0x10
	::System::Single _AttackCD_k__BackingField; // 0x14
	::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _MoveSpd_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x28
	::System::Single _ReadyScale_k__BackingField; // 0x30
	::System::UInt32 _UnitID_k__BackingField; // 0x34
	::RPG::GameCore::FixPoint _Hp_k__BackingField; // 0x38
	::System::UInt32 _SoldierID_k__BackingField; // 0x40
	::System::UInt32 _SizeTier_k__BackingField; // 0x44
	::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _AtkSpd_k__BackingField; // 0x58

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_CCB3A003D9DADECF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CCB3A003D9DADECF*))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_25373A99E7C2BF9C(::RPG::GameCore::ChenLingEnemyRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnemyRow*))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_METHOD_1_25373A99E7C2BF9C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C90C775EAE86885(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_METHOD_1_8C90C775EAE86885_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnitID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_UNITID_OFFSET))(this);
	}

	::System::Void set_UnitID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_UNITID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_SOLDIERID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SizeTier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_SIZETIER_OFFSET))(this);
	}

	::System::Void set_SizeTier(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_SIZETIER_OFFSET))(this, a1);
	}

	::System::Single get_Scale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_SCALE_OFFSET))(this, a1);
	}

	::System::Single get_ReadyScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_READYSCALE_OFFSET))(this);
	}

	::System::Void set_ReadyScale(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_READYSCALE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Atk()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_ATK_OFFSET))(this);
	}

	::System::Void set_Atk(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_ATK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Hp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_HP_OFFSET))(this);
	}

	::System::Void set_Hp(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_HP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_AtkSpd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_ATKSPD_OFFSET))(this);
	}

	::System::Void set_AtkSpd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_ATKSPD_OFFSET))(this, a1);
	}

	::System::Single get_AttackCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_ATTACKCD_OFFSET))(this);
	}

	::System::Void set_AttackCD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_ATTACKCD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MoveSpd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_MOVESPD_OFFSET))(this);
	}

	::System::Void set_MoveSpd(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_MOVESPD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CrtChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_CRTCHANCE_OFFSET))(this);
	}

	::System::Void set_CrtChance(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_CRTCHANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CrtDamageRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_CRTDAMAGERATIO_OFFSET))(this);
	}

	::System::Void set_CrtDamageRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_CRTDAMAGERATIO_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_AttackRange()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_GET_ATTACKRANGE_OFFSET))(this);
	}

	::System::Void set_AttackRange(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_CCB3A003D9DADECF_SET_ATTACKRANGE_OFFSET))(this, a1);
	}
};
