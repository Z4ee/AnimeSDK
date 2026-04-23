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

#define CLASS_1_25495098F569C629_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xC0E2930)
#define CLASS_1_25495098F569C629_1_GET_ATK_OFFSET UNITYSDK_OFFSET(0xC0E2ED0)
#define CLASS_1_25495098F569C629_1_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0xC0E2E90)
#define CLASS_1_25495098F569C629_1_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xC0E2E70)
#define CLASS_1_25495098F569C629_1_GET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0xC0E3000)
#define CLASS_1_25495098F569C629_1_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0xC0E2F10)
#define CLASS_1_25495098F569C629_1_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0xC0E2F30)
#define CLASS_1_25495098F569C629_1_GET_HP_OFFSET UNITYSDK_OFFSET(0xC0E2EB0)
#define CLASS_1_25495098F569C629_1_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0xC0E2F70)
#define CLASS_1_25495098F569C629_1_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xC0E2F50)
#define CLASS_1_25495098F569C629_1_GET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0xC0E2EF0)
#define CLASS_1_25495098F569C629_1_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xC0E2F90)
#define CLASS_1_25495098F569C629_1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC0E2FD0)
#define CLASS_1_25495098F569C629_1_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC0E2FB0)
#define CLASS_1_25495098F569C629_1_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xC0E2E50)
#define CLASS_1_25495098F569C629_1_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xC0E2E10)
#define CLASS_1_25495098F569C629_1_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xC0E2E30)
#define CLASS_1_25495098F569C629_1_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC0E2DF0)
#define CLASS_1_25495098F569C629_1_METHOD_1_CF8AE51777AB7BDB_OFFSET UNITYSDK_OFFSET(0xC0E2B10)
#define CLASS_1_25495098F569C629_1_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0xC0E2DA0)
#define CLASS_1_25495098F569C629_1_METHOD_1_F097EB4B6A341647_OFFSET UNITYSDK_OFFSET(0xC0E29F0)
#define CLASS_1_25495098F569C629_1_SET_ATK_OFFSET UNITYSDK_OFFSET(0xC0E2EE0)
#define CLASS_1_25495098F569C629_1_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0xC0E2EA0)
#define CLASS_1_25495098F569C629_1_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xC0E2E80)
#define CLASS_1_25495098F569C629_1_SET_BATTLESCALE_OFFSET UNITYSDK_OFFSET(0xC0E3020)
#define CLASS_1_25495098F569C629_1_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0xC0E2F20)
#define CLASS_1_25495098F569C629_1_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0xC0E2F40)
#define CLASS_1_25495098F569C629_1_SET_HP_OFFSET UNITYSDK_OFFSET(0xC0E2EC0)
#define CLASS_1_25495098F569C629_1_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0xC0E2F80)
#define CLASS_1_25495098F569C629_1_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xC0E2F60)
#define CLASS_1_25495098F569C629_1_SET_MOVESPEED_OFFSET UNITYSDK_OFFSET(0xC0E2F00)
#define CLASS_1_25495098F569C629_1_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0xC0E2FA0)
#define CLASS_1_25495098F569C629_1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC0E2FF0)
#define CLASS_1_25495098F569C629_1_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC0E2FC0)
#define CLASS_1_25495098F569C629_1_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xC0E2E60)
#define CLASS_1_25495098F569C629_1_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xC0E2E20)
#define CLASS_1_25495098F569C629_1_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0xC0E2E40)
#define CLASS_1_25495098F569C629_1_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC0E2E00)
#define CLASS_1_25495098F569C629_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E2B00)

inline static constexpr unsigned int Class_1_25495098F569C629_1_TypeDefinitionIndex = 56662;

class Class_1_25495098F569C629_1 : public ::System::Object
{
public:
	::System::String* _ModelPath_k__BackingField; // 0x10
	::System::String* _OverrideMaterialPath_k__BackingField; // 0x18
	::UnityEngine::Vector3 _BattleScale_k__BackingField; // 0x20
	::System::Int32 _UniqueID_k__BackingField; // 0x2C
	::System::Boolean _IsPromoted_k__BackingField; // 0x30
	::RPG::GameCore::ChenLingSoldierScale _Scale_k__BackingField; // 0x34
	::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _MoveSpeed_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _HP_k__BackingField; // 0x48
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x50
	::System::UInt32 _SoldierID_k__BackingField; // 0x5C
	::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _AttackCD_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x78
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x80
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x90

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
