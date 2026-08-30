#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6B60059019300BAD;
namespace System { class String; }

#define CLASS_1_DB2F2D66FA6B72A2_CLEAR_OFFSET UNITYSDK_OFFSET(0x161C88B0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_ATK_OFFSET UNITYSDK_OFFSET(0x161C8E70)
#define CLASS_1_DB2F2D66FA6B72A2_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x161C8E30)
#define CLASS_1_DB2F2D66FA6B72A2_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x161C8E10)
#define CLASS_1_DB2F2D66FA6B72A2_GET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0x161C8FA0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x161C8EB0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x161C8ED0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_HP_OFFSET UNITYSDK_OFFSET(0x161C8E50)
#define CLASS_1_DB2F2D66FA6B72A2_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x161C8F10)
#define CLASS_1_DB2F2D66FA6B72A2_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x161C8EF0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x161C8E90)
#define CLASS_1_DB2F2D66FA6B72A2_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x161C8F30)
#define CLASS_1_DB2F2D66FA6B72A2_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x161C8F70)
#define CLASS_1_DB2F2D66FA6B72A2_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x161C8F50)
#define CLASS_1_DB2F2D66FA6B72A2_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x161C8DF0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x161C8DB0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x161C8DD0)
#define CLASS_1_DB2F2D66FA6B72A2_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x161C8D90)
#define CLASS_1_DB2F2D66FA6B72A2_METHOD_1_CF8AE51777AB7BDB_OFFSET UNITYSDK_OFFSET(0x161C8AA0)
#define CLASS_1_DB2F2D66FA6B72A2_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x161C8D40)
#define CLASS_1_DB2F2D66FA6B72A2_METHOD_1_F097EB4B6A341647_OFFSET UNITYSDK_OFFSET(0x161C8980)
#define CLASS_1_DB2F2D66FA6B72A2_SET_ATK_OFFSET UNITYSDK_OFFSET(0x161C8E80)
#define CLASS_1_DB2F2D66FA6B72A2_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x161C8E40)
#define CLASS_1_DB2F2D66FA6B72A2_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x161C8E20)
#define CLASS_1_DB2F2D66FA6B72A2_SET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0x161C8FC0)
#define CLASS_1_DB2F2D66FA6B72A2_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x161C8EC0)
#define CLASS_1_DB2F2D66FA6B72A2_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x161C8EE0)
#define CLASS_1_DB2F2D66FA6B72A2_SET_HP_OFFSET UNITYSDK_OFFSET(0x161C8E60)
#define CLASS_1_DB2F2D66FA6B72A2_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x161C8F20)
#define CLASS_1_DB2F2D66FA6B72A2_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x161C8F00)
#define CLASS_1_DB2F2D66FA6B72A2_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x161C8EA0)
#define CLASS_1_DB2F2D66FA6B72A2_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x161C8F40)
#define CLASS_1_DB2F2D66FA6B72A2_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x161C8F90)
#define CLASS_1_DB2F2D66FA6B72A2_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x161C8F60)
#define CLASS_1_DB2F2D66FA6B72A2_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x161C8E00)
#define CLASS_1_DB2F2D66FA6B72A2_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x161C8DC0)
#define CLASS_1_DB2F2D66FA6B72A2_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x161C8DE0)
#define CLASS_1_DB2F2D66FA6B72A2_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x161C8DA0)
#define CLASS_1_DB2F2D66FA6B72A2__CTOR_OFFSET UNITYSDK_OFFSET(0x161C8A90)

inline static constexpr unsigned int Class_1_DB2F2D66FA6B72A2_TypeDefinitionIndex = 61532;

class Class_1_DB2F2D66FA6B72A2 : public ::System::Object
{
public:
	::System::String* _OverrideMaterialPath_k__BackingField; // 0x10
	::System::String* _ModelPath_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _AttackCD_k__BackingField; // 0x30
	::System::Boolean _IsPromoted_k__BackingField; // 0x38
	::System::UInt32 _SoldierID_k__BackingField; // 0x3C
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x40
	::RPG::GameCore::ChenLingSoldierScale _Scale_k__BackingField; // 0x50
	::UnityEngine::Vector3 _BattleScale_k__BackingField; // 0x54
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _HP_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x80
	::System::Int32 _UniqueID_k__BackingField; // 0x88
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x8C
	::RPG::GameCore::FixPoint _MoveSpeed_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_CLEAR_OFFSET))(this);
	}

	static ::Class_1_DB2F2D66FA6B72A2* Method_1_F097EB4B6A341647(::Class_2_6B60059019300BAD* a1)
	{
		return ((::Class_1_DB2F2D66FA6B72A2*(*)(::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_METHOD_1_F097EB4B6A341647_OFFSET))(a1);
	}

	::System::Void Method_1_CF8AE51777AB7BDB(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_METHOD_1_CF8AE51777AB7BDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Int32 get_UniqueID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_UNIQUEID_OFFSET))(this);
	}

	::System::Void set_UniqueID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_UNIQUEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_SOLDIERID_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_TEAMTYPE_OFFSET))(this);
	}

	::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_TEAMTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ChenLingSoldierScale get_Scale()
	{
		return ((::RPG::GameCore::ChenLingSoldierScale(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::RPG::GameCore::ChenLingSoldierScale a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSoldierScale))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_SCALE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_AttackRange()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_ATTACKRANGE_OFFSET))(this);
	}

	::System::Void set_AttackRange(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_ATTACKRANGE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_AttackCD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_ATTACKCD_OFFSET))(this);
	}

	::System::Void set_AttackCD(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_ATTACKCD_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_HP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_HP_OFFSET))(this);
	}

	::System::Void set_HP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_HP_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Atk()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_ATK_OFFSET))(this);
	}

	::System::Void set_Atk(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_ATK_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MoveSpeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_MOVESPEED_OFFSET))(this);
	}

	::System::Void set_MoveSpeed(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_MOVESPEED_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CrtChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_CRTCHANCE_OFFSET))(this);
	}

	::System::Void set_CrtChance(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_CRTCHANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_CrtDamageRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_CRTDAMAGERATIO_OFFSET))(this);
	}

	::System::Void set_CrtDamageRatio(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_CRTDAMAGERATIO_OFFSET))(this, a1);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_MODELPATH_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPromoted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_ISPROMOTED_OFFSET))(this);
	}

	::System::Void set_IsPromoted(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_ISPROMOTED_OFFSET))(this, a1);
	}

	::System::String* get_OverrideMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_OverrideMaterialPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_OVERRIDEMATERIALPATH_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_ROTATION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_POSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_BattleScale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_GET_BATTLESCALE_OFFSET))(this);
	}

	::System::Void set_BattleScale(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DB2F2D66FA6B72A2_SET_BATTLESCALE_OFFSET))(this, a1);
	}
};
