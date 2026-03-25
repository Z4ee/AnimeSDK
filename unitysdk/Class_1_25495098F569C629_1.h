#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_181A7F9409C60DBC;
namespace System { class String; }

#define CLASS_1_25495098F569C629_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x116F4480)
#define CLASS_1_25495098F569C629_1_GET_ATK_OFFSET UNITYSDK_OFFSET(0x116F4A30)
#define CLASS_1_25495098F569C629_1_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x116F49F0)
#define CLASS_1_25495098F569C629_1_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x116F49D0)
#define CLASS_1_25495098F569C629_1_GET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0x116F4B60)
#define CLASS_1_25495098F569C629_1_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x116F4A70)
#define CLASS_1_25495098F569C629_1_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x116F4A90)
#define CLASS_1_25495098F569C629_1_GET_HP_OFFSET UNITYSDK_OFFSET(0x116F4A10)
#define CLASS_1_25495098F569C629_1_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x116F4AD0)
#define CLASS_1_25495098F569C629_1_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x116F4AB0)
#define CLASS_1_25495098F569C629_1_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x116F4A50)
#define CLASS_1_25495098F569C629_1_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x116F4AF0)
#define CLASS_1_25495098F569C629_1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x116F4B30)
#define CLASS_1_25495098F569C629_1_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x116F4B10)
#define CLASS_1_25495098F569C629_1_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x116F49B0)
#define CLASS_1_25495098F569C629_1_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x116F4970)
#define CLASS_1_25495098F569C629_1_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x116F4990)
#define CLASS_1_25495098F569C629_1_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x116F4950)
#define CLASS_1_25495098F569C629_1_METHOD_1_CF8AE51777AB7BDB_OFFSET UNITYSDK_OFFSET(0x116F4670)
#define CLASS_1_25495098F569C629_1_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x116F4900)
#define CLASS_1_25495098F569C629_1_METHOD_1_F097EB4B6A341647_OFFSET UNITYSDK_OFFSET(0x116F4550)
#define CLASS_1_25495098F569C629_1_SET_ATK_OFFSET UNITYSDK_OFFSET(0x116F4A40)
#define CLASS_1_25495098F569C629_1_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0x116F4A00)
#define CLASS_1_25495098F569C629_1_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x116F49E0)
#define CLASS_1_25495098F569C629_1_SET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0x116F4B80)
#define CLASS_1_25495098F569C629_1_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0x116F4A80)
#define CLASS_1_25495098F569C629_1_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0x116F4AA0)
#define CLASS_1_25495098F569C629_1_SET_HP_OFFSET UNITYSDK_OFFSET(0x116F4A20)
#define CLASS_1_25495098F569C629_1_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x116F4AE0)
#define CLASS_1_25495098F569C629_1_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x116F4AC0)
#define CLASS_1_25495098F569C629_1_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0x116F4A60)
#define CLASS_1_25495098F569C629_1_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x116F4B00)
#define CLASS_1_25495098F569C629_1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x116F4B50)
#define CLASS_1_25495098F569C629_1_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x116F4B20)
#define CLASS_1_25495098F569C629_1_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x116F49C0)
#define CLASS_1_25495098F569C629_1_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x116F4980)
#define CLASS_1_25495098F569C629_1_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x116F49A0)
#define CLASS_1_25495098F569C629_1_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x116F4960)
#define CLASS_1_25495098F569C629_1__CTOR_OFFSET UNITYSDK_OFFSET(0x116F4660)

inline static constexpr unsigned int Class_1_25495098F569C629_1_TypeDefinitionIndex = 49840;

class Class_1_25495098F569C629_1 : public ::System::Object
{
public:
	::System::String* _OverrideMaterialPath_k__BackingField; // 0x10
	::System::String* _ModelPath_k__BackingField; // 0x18
	::UnityEngine::Vector3 _BattleScale_k__BackingField; // 0x20
	::System::UInt32 _SoldierID_k__BackingField; // 0x2C
	::RPG::GameCore::FixPoint _HP_k__BackingField; // 0x30
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x38
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x44
	::System::Boolean _IsPromoted_k__BackingField; // 0x48
	::System::Int32 _UniqueID_k__BackingField; // 0x4C
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x50
	::RPG::GameCore::ChenLingSoldierScale _Scale_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _MoveSpeed_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x88
	::RPG::GameCore::FixPoint _AttackCD_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_CLEAR_OFFSET))(this);
	}

	static ::Class_1_25495098F569C629_1* Method_1_F097EB4B6A341647(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::Class_1_25495098F569C629_1*(*)(::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_METHOD_1_F097EB4B6A341647_OFFSET))(a1);
	}

	::System::Void Method_1_CF8AE51777AB7BDB(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_METHOD_1_CF8AE51777AB7BDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Int32 get_UniqueID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_UNIQUEID_OFFSET))(this);
	}

	::System::Void set_UniqueID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_UNIQUEID_OFFSET))(this, value);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_SOLDIERID_OFFSET))(this, value);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_TEAMTYPE_OFFSET))(this);
	}

	::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_TEAMTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingSoldierScale get_Scale()
	{
		return ((::RPG::GameCore::ChenLingSoldierScale(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::RPG::GameCore::ChenLingSoldierScale value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSoldierScale))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_SCALE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_AttackRange()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_ATTACKRANGE_OFFSET))(this);
	}

	::System::Void set_AttackRange(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_ATTACKRANGE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_AttackCD()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_ATTACKCD_OFFSET))(this);
	}

	::System::Void set_AttackCD(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_ATTACKCD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_HP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_HP_OFFSET))(this);
	}

	::System::Void set_HP(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_HP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_Atk()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_ATK_OFFSET))(this);
	}

	::System::Void set_Atk(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_ATK_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MoveSpeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_MOVESPEED_OFFSET))(this);
	}

	::System::Void set_MoveSpeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_MOVESPEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CrtChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_CRTCHANCE_OFFSET))(this);
	}

	::System::Void set_CrtChance(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_CRTCHANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CrtDamageRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_CRTDAMAGERATIO_OFFSET))(this);
	}

	::System::Void set_CrtDamageRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_CRTDAMAGERATIO_OFFSET))(this, value);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_MODELPATH_OFFSET))(this, value);
	}

	::System::Boolean get_IsPromoted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_ISPROMOTED_OFFSET))(this);
	}

	::System::Void set_IsPromoted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_ISPROMOTED_OFFSET))(this, value);
	}

	::System::String* get_OverrideMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_OverrideMaterialPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_OVERRIDEMATERIALPATH_OFFSET))(this, value);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_ROTATION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_POSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_BattleScale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_GET_BATTLESCALE_OFFSET))(this);
	}

	::System::Void set_BattleScale(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_25495098F569C629_1_SET_BATTLESCALE_OFFSET))(this, value);
	}
};
