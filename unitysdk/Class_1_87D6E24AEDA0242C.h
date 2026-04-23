#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace RPG::GameCore { class ChenLingEnemyRow; }

#define CLASS_1_87D6E24AEDA0242C_GET_ATKSPD_OFFSET UNITYSDK_OFFSET(0x11F0A6F0)
#define CLASS_1_87D6E24AEDA0242C_GET_ATK_OFFSET UNITYSDK_OFFSET(0x11F0A6B0)
#define CLASS_1_87D6E24AEDA0242C_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x11F0A710)
#define CLASS_1_87D6E24AEDA0242C_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x11F0A790)
#define CLASS_1_87D6E24AEDA0242C_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x11F0A750)
#define CLASS_1_87D6E24AEDA0242C_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x11F0A770)
#define CLASS_1_87D6E24AEDA0242C_GET_HP_OFFSET UNITYSDK_OFFSET(0x11F0A6D0)
#define CLASS_1_87D6E24AEDA0242C_GET_MOVESPD_OFFSET UNITYSDK_OFFSET(0x11F0A730)
#define CLASS_1_87D6E24AEDA0242C_GET_READYSCALE_OFFSET UNITYSDK_OFFSET(0x11F0A690)
#define CLASS_1_87D6E24AEDA0242C_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x11F0A670)
#define CLASS_1_87D6E24AEDA0242C_GET_SIZETIER_OFFSET UNITYSDK_OFFSET(0x11F0A650)
#define CLASS_1_87D6E24AEDA0242C_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x11F0A630)
#define CLASS_1_87D6E24AEDA0242C_GET_UNITID_OFFSET UNITYSDK_OFFSET(0x11F0A610)
#define CLASS_1_87D6E24AEDA0242C_METHOD_1_335165CE0B3DFC67_OFFSET UNITYSDK_OFFSET(0x11F09F50)
#define CLASS_1_87D6E24AEDA0242C_METHOD_1_D7924FE52B50B418_OFFSET UNITYSDK_OFFSET(0x11F0A430)
#define CLASS_1_87D6E24AEDA0242C_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x11F0A5C0)
#define CLASS_1_87D6E24AEDA0242C_SET_ATKSPD_OFFSET UNITYSDK_OFFSET(0x11F0A700)
#define CLASS_1_87D6E24AEDA0242C_SET_ATK_OFFSET UNITYSDK_OFFSET(0x11F0A6C0)
#define CLASS_1_87D6E24AEDA0242C_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x11F0A720)
#define CLASS_1_87D6E24AEDA0242C_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x11F0A7A0)
#define CLASS_1_87D6E24AEDA0242C_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x11F0A760)
#define CLASS_1_87D6E24AEDA0242C_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x11F0A780)
#define CLASS_1_87D6E24AEDA0242C_SET_HP_OFFSET UNITYSDK_OFFSET(0x11F0A6E0)
#define CLASS_1_87D6E24AEDA0242C_SET_MOVESPD_OFFSET UNITYSDK_OFFSET(0x11F0A740)
#define CLASS_1_87D6E24AEDA0242C_SET_READYSCALE_OFFSET UNITYSDK_OFFSET(0x11F0A6A0)
#define CLASS_1_87D6E24AEDA0242C_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x11F0A680)
#define CLASS_1_87D6E24AEDA0242C_SET_SIZETIER_OFFSET UNITYSDK_OFFSET(0x11F0A660)
#define CLASS_1_87D6E24AEDA0242C_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x11F0A640)
#define CLASS_1_87D6E24AEDA0242C_SET_UNITID_OFFSET UNITYSDK_OFFSET(0x11F0A620)
#define CLASS_1_87D6E24AEDA0242C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11F09B00)
#define CLASS_1_87D6E24AEDA0242C__CTOR_2_OFFSET UNITYSDK_OFFSET(0x11F09BB0)
#define CLASS_1_87D6E24AEDA0242C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F095F0)

inline static constexpr unsigned int Class_1_87D6E24AEDA0242C_TypeDefinitionIndex = 71478;

class Class_1_87D6E24AEDA0242C : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _AtkSpd_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _Hp_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x30
	::System::UInt32 _SoldierID_k__BackingField; // 0x38
	::System::Single _ReadyScale_k__BackingField; // 0x3C
	::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _MoveSpd_k__BackingField; // 0x48
	::System::UInt32 _UnitID_k__BackingField; // 0x50
	::System::Single _Scale_k__BackingField; // 0x54
	::System::Single _AttackCD_k__BackingField; // 0x58
	::System::UInt32 _SizeTier_k__BackingField; // 0x5C

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_87D6E24AEDA0242C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87D6E24AEDA0242C*))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_335165CE0B3DFC67(::RPG::GameCore::ChenLingEnemyRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnemyRow*))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_METHOD_1_335165CE0B3DFC67_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7924FE52B50B418(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_METHOD_1_D7924FE52B50B418_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnitID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_UNITID_OFFSET))(this);
	}

	::System::Void set_UnitID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_UNITID_OFFSET))(this, value);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_SOLDIERID_OFFSET))(this, value);
	}

	::System::UInt32 get_SizeTier()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_SIZETIER_OFFSET))(this);
	}

	::System::Void set_SizeTier(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_SIZETIER_OFFSET))(this, value);
	}

	::System::Single get_Scale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_SCALE_OFFSET))(this, value);
	}

	::System::Single get_ReadyScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_READYSCALE_OFFSET))(this);
	}

	::System::Void set_ReadyScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_READYSCALE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_Atk()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_ATK_OFFSET))(this);
	}

	::System::Void set_Atk(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_ATK_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_Hp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_HP_OFFSET))(this);
	}

	::System::Void set_Hp(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_HP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_AtkSpd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_ATKSPD_OFFSET))(this);
	}

	::System::Void set_AtkSpd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_ATKSPD_OFFSET))(this, value);
	}

	::System::Single get_AttackCD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_ATTACKCD_OFFSET))(this);
	}

	::System::Void set_AttackCD(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_ATTACKCD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MoveSpd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_MOVESPD_OFFSET))(this);
	}

	::System::Void set_MoveSpd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_MOVESPD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CrtChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_CRTCHANCE_OFFSET))(this);
	}

	::System::Void set_CrtChance(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_CRTCHANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CrtDamageRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_CRTDAMAGERATIO_OFFSET))(this);
	}

	::System::Void set_CrtDamageRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_CRTDAMAGERATIO_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_AttackRange()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_GET_ATTACKRANGE_OFFSET))(this);
	}

	::System::Void set_AttackRange(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_87D6E24AEDA0242C_SET_ATTACKRANGE_OFFSET))(this, value);
	}
};
