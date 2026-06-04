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

#define RPG_CLIENT_ITEMCOMPOSEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD5FBB0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xBD61880)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET UNITYSDK_OFFSET(0xBD61060)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET UNITYSDK_OFFSET(0xBD60F60)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0xBD617B0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET UNITYSDK_OFFSET(0xBD60FA0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSENEWMAINTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0xBD62720)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSEONFORMULAUNLOCKMAINTYPEISNEWLIST_OFFSET UNITYSDK_OFFSET(0xBD62730)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_LIMITHINT_OFFSET UNITYSDK_OFFSET(0xBD62750)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_MODULELIMITCOMPOSEDATAS_OFFSET UNITYSDK_OFFSET(0xBD62740)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_RELICCOMPOSECONTEXT_OFFSET UNITYSDK_OFFSET(0xBD5E390)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_UNLOCKEDFORMULALIST_OFFSET UNITYSDK_OFFSET(0xBD62710)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INITMAP_OFFSET UNITYSDK_OFFSET(0xBD5E910)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBD5E870)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xBD5FAF0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBD5FB40)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET UNITYSDK_OFFSET(0xBD60860)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET UNITYSDK_OFFSET(0xBD61610)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET UNITYSDK_OFFSET(0xBD613E0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET UNITYSDK_OFFSET(0xBD61220)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET UNITYSDK_OFFSET(0xBD5D0E0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYSETCOMPOSEITEMSEEN_OFFSET UNITYSDK_OFFSET(0xBD616A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD5F910)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD5F490)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xBD5FC10)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xBD5FE90)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD5E3A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0xBD61DC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0xBD60110)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD60460)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xBD602E0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD60A20)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBD61120)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0xBD62610)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET UNITYSDK_OFFSET(0xBD623C0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET UNITYSDK_OFFSET(0xBD620F0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD62960)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBD62760)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xBD628A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBD62900)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD62840)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD627E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule_TypeDefinitionIndex = 61467;

	class ItemComposeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ItemComposeMainTypesOfUnlockID; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* mainTypes; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeOnFormulaUnlockMainTypeIsNewList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemComposeLimitDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* typeMap; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedFormulaList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*>* composeItemMap; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeNewMainTypeUnlockList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* moduleLimitComposeDatas; // 0x50
		::RPG::Client::RelicComposeContext* _RelicComposeContext_k__BackingField; // 0x58
		::RPG::Client::ItemComposeLimitHintPart* _LimitHint_k__BackingField; // 0x60

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

		::System::Void _CmdComposeItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdComposeSelectedRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetBagScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdUseItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnComposeLimitNumCompleteScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnComposeLimitNumUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* GetComposeKeysByType(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSubTypesByMainType(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMainTypes()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET))(this);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemDataByItemID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ComposeItemData* TryGetComposeItemDataByItemID_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::ComposeItemData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetComposeItemIsNew(::RPG::Client::ComposeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET))(this, a1);
		}

		::System::Void SetEquivalentExchangeRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET))(this);
		}

		::System::Void TrySetComposeItemSeen(::RPG::Client::ComposeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_TRYSETCOMPOSEITEMSEEN_OFFSET))(this, a1);
		}

		::System::UInt32 GetRemainComposeNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* GetComposeDataListByItemIDFuncType(::System::UInt32 a1, ::RPG::GameCore::ItemComposeFuncType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ItemComposeFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitTypeUnlockList(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockNewType(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockMainTypeViewed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET))(this, a1);
		}

		::System::Void _OnDeleteComposeFormulaUnlockTabRedDotRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET))(this, a1);
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
