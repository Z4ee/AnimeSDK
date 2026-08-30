#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_A59B7F9F9FB23BBE;
namespace RPG::Client { class BattleViewModeInitData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHAVATAR_OFFSET UNITYSDK_OFFSET(0x19F42550)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHBACKENDROLEBE_OFFSET UNITYSDK_OFFSET(0x19F425B0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0x19F42610)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x19F41D70)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GETVIEWMODEINITDATA_OFFSET UNITYSDK_OFFSET(0x19F42AC0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_CANJUMPVIEWMODE_OFFSET UNITYSDK_OFFSET(0x19F42CF0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x19F42C90)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19F42BF0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x19F42CB0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PRIORITYVALUE_OFFSET UNITYSDK_OFFSET(0x19F42CD0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_SHOWICON_OFFSET UNITYSDK_OFFSET(0x19F42C10)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x19F42C70)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0x19F42CA0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x19F42C00)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x19F42CC0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PRIORITYVALUE_OFFSET UNITYSDK_OFFSET(0x19F42CE0)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x19F42C80)
#define RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F42AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleElationPointDetailItemData_TypeDefinitionIndex = 72070;

	class BattleElationPointDetailItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Character; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::BattleViewModeInitData* _ViewModeInitData; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x28
		::System::Int32 _PriorityValue_k__BackingField; // 0x30
		::System::Boolean _IsBackendRoleBE; // 0x34
		::RPG::Client::TextID _Title_k__BackingField; // 0x38
		::RPG::Client::TextID _Desc_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* Create(::System::String* a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4, ::System::Int32 a5)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithPreviewData(::Class_1_A59B7F9F9FB23BBE* a1)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::Class_1_A59B7F9F9FB23BBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHPREVIEWDATA_OFFSET))(a1);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithAvatar(::Class_1_A59B7F9F9FB23BBE* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::Class_1_A59B7F9F9FB23BBE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHAVATAR_OFFSET))(a1, a2);
		}

		static ::RPG::Client::BattleElationPointDetailItemData* CreateWithBackendRoleBE(::Class_1_A59B7F9F9FB23BBE* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::Client::BattleElationPointDetailItemData*(*)(::Class_1_A59B7F9F9FB23BBE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_CREATEWITHBACKENDROLEBE_OFFSET))(a1, a2);
		}

		::RPG::Client::BattleViewModeInitData* GetViewModeInitData()
		{
			return ((::RPG::Client::BattleViewModeInitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GETVIEWMODEINITDATA_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_ShowIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_SHOWICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_DESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_PriorityValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_PRIORITYVALUE_OFFSET))(this);
		}

		::System::Void set_PriorityValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_SET_PRIORITYVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_CanJumpViewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEELATIONPOINTDETAILITEMDATA_GET_CANJUMPVIEWMODE_OFFSET))(this);
		}
	};
}
