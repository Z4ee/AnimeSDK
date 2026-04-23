#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"

namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class ItemComposeLimitHintPart; }
namespace RPG::Client { class RelicComposeContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOMPOSEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA658BA0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA65A660)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET UNITYSDK_OFFSET(0xA659EF0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET UNITYSDK_OFFSET(0xA659E00)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0xA65A590)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET UNITYSDK_OFFSET(0xA659E40)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSENEWMAINTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0xA65B4E0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSEONFORMULAUNLOCKMAINTYPEISNEWLIST_OFFSET UNITYSDK_OFFSET(0xA65B4F0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_LIMITHINT_OFFSET UNITYSDK_OFFSET(0xA65B510)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_MODULELIMITCOMPOSEDATAS_OFFSET UNITYSDK_OFFSET(0xA65B500)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_RELICCOMPOSECONTEXT_OFFSET UNITYSDK_OFFSET(0xA657890)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_UNLOCKEDFORMULALIST_OFFSET UNITYSDK_OFFSET(0xA65B4D0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INITMAP_OFFSET UNITYSDK_OFFSET(0xA657DF0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA657D50)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA658AE0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA658B30)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET UNITYSDK_OFFSET(0xA6597C0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET UNITYSDK_OFFSET(0xA65A3F0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET UNITYSDK_OFFSET(0xA65A210)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET UNITYSDK_OFFSET(0xA65A0A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET UNITYSDK_OFFSET(0xA656590)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYSETCOMPOSEITEMSEEN_OFFSET UNITYSDK_OFFSET(0xA65A480)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA658940)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA658780)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA658C00)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xA658DC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6578A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0xA65ACB0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0xA658F80)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA659180)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA659090)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA659900)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA659FA0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0xA65B430)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET UNITYSDK_OFFSET(0xA65B220)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET UNITYSDK_OFFSET(0xA65AF90)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA65B730)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA65B520)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA65B670)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA65B6D0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA65B610)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA65B5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule_TypeDefinitionIndex = 60533;

	class ItemComposeModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RelicComposeContext* _RelicComposeContext_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*>* composeItemMap; // 0x18
		::RPG::Client::ItemComposeLimitHintPart* _LimitHint_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* typeMap; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* moduleLimitComposeDatas; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeNewMainTypeUnlockList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* mainTypes; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ItemComposeMainTypesOfUnlockID; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemComposeLimitDict; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeOnFormulaUnlockMainTypeIsNewList; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedFormulaList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::RelicComposeContext* get_RelicComposeContext()
		{
			return ((::RPG::Client::RelicComposeContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_RELICCOMPOSECONTEXT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_INIT_OFFSET))(this);
		}

		::System::Void InitMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_INITMAP_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _CmdComposeItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdComposeSelectedRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetBagScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdUseItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnComposeLimitNumCompleteScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnComposeLimitNumUpdateScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* GetComposeKeysByType(::System::UInt32 ComposeType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET))(this, ComposeType);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubTypesByMainType(::System::UInt32 mainType)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET))(this, mainType);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMainTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET))(this);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemData(::System::UInt32 composeItemID)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET))(this, composeItemID);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemDataByItemID(::System::UInt32 itemConfigID, ::System::UInt32 subType)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET))(this, itemConfigID, subType);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemDataByItemID_1(::System::UInt32 itemConfigID, ::System::UInt32 subType, ::System::UInt32 limitType)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET))(this, itemConfigID, subType, limitType);
		}

		::System::Void SetComposeItemIsNew(::RPG::Client::ComposeItemData* composeItemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET))(this, composeItemData);
		}

		::System::Void SetEquivalentExchangeRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET))(this);
		}

		::System::Void TrySetComposeItemSeen(::RPG::Client::ComposeItemData* composeItemData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYSETCOMPOSEITEMSEEN_OFFSET))(this, composeItemData);
		}

		::System::UInt32 GetRemainComposeNum(::System::UInt32 composeId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET))(this, composeId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* GetComposeDataListByItemIDFuncType(::System::UInt32 itemID, ::RPG::GameCore::ItemComposeFuncType funcType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ItemComposeFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET))(this, itemID, funcType);
		}

		::System::Void _InitTypeUnlockList(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET))(this, arg);
		}

		::System::Void _RefreshUnlockNewType(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET))(this, arg);
		}

		::System::Void _RefreshUnlockMainTypeViewed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET))(this, arg);
		}

		::System::Void _OnDeleteComposeFormulaUnlockTabRedDotRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET))(this, arg);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedFormulaList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_UNLOCKEDFORMULALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemComposeNewMainTypeUnlockList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSENEWMAINTYPEUNLOCKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemComposeOnFormulaUnlockMainTypeIsNewList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSEONFORMULAUNLOCKMAINTYPEISNEWLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* get_ModuleLimitComposeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_MODULELIMITCOMPOSEDATAS_OFFSET))(this);
		}

		::RPG::Client::ItemComposeLimitHintPart* get_LimitHint()
		{
			return ((::RPG::Client::ItemComposeLimitHintPart*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GET_LIMITHINT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
