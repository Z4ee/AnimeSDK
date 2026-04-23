#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA139300)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xA139240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CONFIRMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1392C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CURRENTCONFIRMEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA1392A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_NEEDSELECTNUM_OFFSET UNITYSDK_OFFSET(0xA139280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_SELECTEDAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xA139260)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA1392E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0xA139250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CONFIRMCALLBACK_OFFSET UNITYSDK_OFFSET(0xA1392D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CURRENTCONFIRMEDAVATARID_OFFSET UNITYSDK_OFFSET(0xA1392B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_NEEDSELECTNUM_OFFSET UNITYSDK_OFFSET(0xA139290)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_SELECTEDAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xA139270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA1392F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA139230)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatTeamEditDialogMsgParam_TypeDefinitionIndex = 69892;

	class DiceCombatTeamEditDialogMsgParam : public ::System::Object
	{
	public:
		::System::Action_1<::XLua::LuaTable*>* _ConfirmCallback_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedAvatarIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _AvatarList_k__BackingField; // 0x20
		::System::UInt32 _CurrentConfirmedAvatarID_k__BackingField; // 0x28
		::System::UInt32 _NeedSelectNum_k__BackingField; // 0x2C
		::System::UInt32 _StageID_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* get_AvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Void set_AvatarList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_AVATARLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedAvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_SELECTEDAVATARIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectedAvatarIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_SELECTEDAVATARIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_NeedSelectNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_NEEDSELECTNUM_OFFSET))(this);
		}

		::System::Void set_NeedSelectNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_NEEDSELECTNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentConfirmedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CURRENTCONFIRMEDAVATARID_OFFSET))(this);
		}

		::System::Void set_CurrentConfirmedAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CURRENTCONFIRMEDAVATARID_OFFSET))(this, value);
		}

		::System::Action_1<::XLua::LuaTable*>* get_ConfirmCallback()
		{
			return ((::System::Action_1<::XLua::LuaTable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_CONFIRMCALLBACK_OFFSET))(this);
		}

		::System::Void set_ConfirmCallback(::System::Action_1<::XLua::LuaTable*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_CONFIRMCALLBACK_OFFSET))(this, value);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_SET_STAGEID_OFFSET))(this, value);
		}

		static ::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* Create(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* avatarList, ::System::Collections::Generic::List_1<::System::UInt32>* selectedAvatarIDList, ::System::UInt32 needSelectNum, ::System::Action_1<::XLua::LuaTable*>* confirmCallback, ::System::UInt32 currentConfirmedAvatarID, ::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam*(*)(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::Action_1<::XLua::LuaTable*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATTEAMEDITDIALOGMSGPARAM_CREATE_OFFSET))(avatarList, selectedAvatarIDList, needSelectNum, confirmCallback, currentConfirmedAvatarID, stageID);
		}
	};
}
