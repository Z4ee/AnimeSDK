#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ItemComposeFuncType.h"

namespace RPG::Client { class ComposeItemData; }
namespace RPG::Client { class RelicComposeContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEDATALISTBYITEMIDFUNCTYPE_OFFSET UNITYSDK_OFFSET(0x996A7F0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETCOMPOSEKEYSBYTYPE_OFFSET UNITYSDK_OFFSET(0x996A1A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETMAINTYPES_OFFSET UNITYSDK_OFFSET(0x996A0B0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETREMAINCOMPOSENUM_OFFSET UNITYSDK_OFFSET(0x996A720)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GETSUBTYPESBYMAINTYPE_OFFSET UNITYSDK_OFFSET(0x996A0F0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSENEWMAINTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0x996B250)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_ITEMCOMPOSEONFORMULAUNLOCKMAINTYPEISNEWLIST_OFFSET UNITYSDK_OFFSET(0x996B260)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_MODULELIMITCOMPOSEDATAS_OFFSET UNITYSDK_OFFSET(0x996B270)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_RELICCOMPOSECONTEXT_OFFSET UNITYSDK_OFFSET(0x9967A30)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_GET_UNLOCKEDFORMULALIST_OFFSET UNITYSDK_OFFSET(0x996B240)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INITMAP_OFFSET UNITYSDK_OFFSET(0x9967EC0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9967E30)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET UNITYSDK_OFFSET(0x9969950)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET UNITYSDK_OFFSET(0x996A690)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_1_OFFSET UNITYSDK_OFFSET(0x996A4B0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATABYITEMID_OFFSET UNITYSDK_OFFSET(0x996A340)
#define RPG_CLIENT_ITEMCOMPOSEMODULE_TRYGETCOMPOSEITEMDATA_OFFSET UNITYSDK_OFFSET(0x9969F50)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9968A10)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9968850)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9968BB0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CMDCOMPOSESELECTEDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x9968D70)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9967A40)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__INITTYPEUNLOCKLIST_OFFSET UNITYSDK_OFFSET(0x996AE40)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0x9968F30)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9969130)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCMDUSEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9969040)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMCOMPLETESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9969A50)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONCOMPOSELIMITNUMUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x996A250)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__ONDELETECOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0x996B1A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKMAINTYPEVIEWED_OFFSET UNITYSDK_OFFSET(0x996B0A0)
#define RPG_CLIENT_ITEMCOMPOSEMODULE__REFRESHUNLOCKNEWTYPE_OFFSET UNITYSDK_OFFSET(0x996AF60)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x996B280)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x996B370)
#define RPG_CLIENT_ITEMCOMPOSEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x996B310)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeModule_TypeDefinitionIndex = 53393;

	class ItemComposeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* mainTypes; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeNewMainTypeUnlockList; // 0x18
		::RPG::Client::RelicComposeContext* _RelicComposeContext_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ItemComposeLimitDict; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedFormulaList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>*>* composeItemMap; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeOnFormulaUnlockMainTypeIsNewList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemComposeAllMainTypeUnlockList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::ComposeItemData*>* moduleLimitComposeDatas; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* typeMap; // 0x58

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

		::System::Void SetComposeItemIsNew(::RPG::Client::ComposeItemData* composeItemData, ::System::Boolean isNew)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComposeItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETCOMPOSEITEMISNEW_OFFSET))(this, composeItemData, isNew);
		}

		::System::Void SetEquivalentExchangeRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEMODULE_SETEQUIVALENTEXCHANGEREAD_OFFSET))(this);
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
	};
}
