#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xB7B4980)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB7B48C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CONFIRMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7B4940)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CURRENTCONFIRMEDAVATARID_OFFSET UNITYSDK_OFFSET(0xB7B4920)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_NEEDSELECTNUM_OFFSET UNITYSDK_OFFSET(0xB7B4900)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_SELECTEDAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xB7B48E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB7B4960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xB7B48D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CONFIRMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7B4950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CURRENTCONFIRMEDAVATARID_OFFSET UNITYSDK_OFFSET(0xB7B4930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_NEEDSELECTNUM_OFFSET UNITYSDK_OFFSET(0xB7B4910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_SELECTEDAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xB7B48F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB7B4970)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B48B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatTeamEditDialogMsgParam_TypeDefinitionIndex = 70704;

	class DiceCombatTeamEditDialogMsgParam : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedAvatarIDList_k__BackingField; // 0x10
		::System::Action_1<::XLua::LuaTable*>* _ConfirmCallback_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _AvatarList_k__BackingField; // 0x20
		::System::UInt32 _NeedSelectNum_k__BackingField; // 0x28
		::System::UInt32 _StageID_k__BackingField; // 0x2C
		::System::UInt32 _CurrentConfirmedAvatarID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* get_AvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Void set_AvatarList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_AVATARLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedAvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_SELECTEDAVATARIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectedAvatarIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_SELECTEDAVATARIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_NeedSelectNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_NEEDSELECTNUM_OFFSET))(this);
		}

		::System::Void set_NeedSelectNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_NEEDSELECTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentConfirmedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CURRENTCONFIRMEDAVATARID_OFFSET))(this);
		}

		::System::Void set_CurrentConfirmedAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CURRENTCONFIRMEDAVATARID_OFFSET))(this, a1);
		}

		::System::Action_1<::XLua::LuaTable*>* get_ConfirmCallback()
		{
			return ((::System::Action_1<::XLua::LuaTable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CONFIRMCALLBACK_OFFSET))(this);
		}

		::System::Void set_ConfirmCallback(::System::Action_1<::XLua::LuaTable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CONFIRMCALLBACK_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_STAGEID_OFFSET))(this, a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* Create(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3, ::System::Action_1<::XLua::LuaTable*>* a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*(*)(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
