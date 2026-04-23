#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_60.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_1_E14A0A1A8B1F847C_4;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicBox { class RecommendationCalculator; }
namespace RPG::Client::RelicBox { class RelicBoxRewardDataManager; }
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanData; }
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanDataManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ADDNEWRELICTOBOX_OFFSET UNITYSDK_OFFSET(0xAF8D380)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_CLEARNEWRELICUID_OFFSET UNITYSDK_OFFSET(0xAF8D400)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_DOESSNAPSHOTRELICEXIST_OFFSET UNITYSDK_OFFSET(0xAF8D4A0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xAF8CFD0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0xAF8BE70)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_CUSTOMKEYCOUNT_OFFSET UNITYSDK_OFFSET(0xAF8EC90)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_HASUSEDALLKEYS_OFFSET UNITYSDK_OFFSET(0xAF8BD30)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ISCANSHIELD_OFFSET UNITYSDK_OFFSET(0xAF8EDB0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_PENDINGRELIC_OFFSET UNITYSDK_OFFSET(0xAF8EDC0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYCOUNT_OFFSET UNITYSDK_OFFSET(0xAF8EA80)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYID_OFFSET UNITYSDK_OFFSET(0xAF8EBB0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xAF8EDE0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_UNLOCKSHIELDCOUNT_OFFSET UNITYSDK_OFFSET(0xAF8EDA0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAF8B2A0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISNEWRELIC_OFFSET UNITYSDK_OFFSET(0xAF8D450)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICBOXSNAPSHOTITEM_OFFSET UNITYSDK_OFFSET(0xAF8D280)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_1_OFFSET UNITYSDK_OFFSET(0xAF8BC30)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_OFFSET UNITYSDK_OFFSET(0xAF8BBD0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SAVEALLDIRTYPLAN_OFFSET UNITYSDK_OFFSET(0xAF8C9E0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDCONFIRMRELICBOXCSREQ_OFFSET UNITYSDK_OFFSET(0xAF8C350)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDGETRELICBOXDATACSREQ_OFFSET UNITYSDK_OFFSET(0xAF8BED0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDOPENRELICBOXCSREQ_OFFSET UNITYSDK_OFFSET(0xAF8BFB0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDREPORTRELICBOXPOPUP_OFFSET UNITYSDK_OFFSET(0xAF8C930)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXSHIELDCSREQ_OFFSET UNITYSDK_OFFSET(0xAF8D330)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXTARGETCSREQ_OFFSET UNITYSDK_OFFSET(0xAF8C530)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_PENDINGRELIC_OFFSET UNITYSDK_OFFSET(0xAF8EDD0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xAF8EDF0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_TRYGETPOPUPRELICS_OFFSET UNITYSDK_OFFSET(0xAF8BD40)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF8D550)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF8D670)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__CREATERELICITEMLISTFORSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xAF8DC20)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8EE00)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETINVENTORYRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0xAF8D100)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETSORTEDRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0xAF8E620)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONCONFIRMRELICBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xAF8E200)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONGETRELICBOXDATASCRSP_OFFSET UNITYSDK_OFFSET(0xAF8D830)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xAF8E840)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONOPENRELICBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xAF8DFB0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONPLAYERDAILYREFRESHING_OFFSET UNITYSDK_OFFSET(0xAF8EB60)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONRELICBOXREGULARSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAF8E3D0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONREPORTRELICBOXACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xAF8E2D0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXCUSTOMSCRSP_OFFSET UNITYSDK_OFFSET(0xAF8E340)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXTARGETSCRSP_OFFSET UNITYSDK_OFFSET(0xAF8E040)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAF8F170)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF8F200)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF8F260)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxModule_TypeDefinitionIndex = 68715;

	class RelicBoxModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ShieldPositions; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _SnapshotRelicItems; // 0x18
		::RPG::Client::RelicBox::RelicBoxRewardDataManager* RewardDataManager; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentRelicIDList; // 0x28
		::RPG::Client::RelicBox::RecommendationCalculator* recommendationCalculator; // 0x30
		::RPG::Client::RelicItemData* _PendingRelic_k__BackingField; // 0x38
		::RPG::Client::RelicBox::RelicBoxSuitPlanDataManager* PlanDataManager; // 0x40
		::System::UInt32 _NewRelicUID; // 0x48
		::System::UInt32 _LastCustomKeyCount; // 0x4C
		::System::UInt32 _RollTimes_k__BackingField; // 0x50
		::Enum_3_0A3761FE34514D6C_60 CurrentState; // 0x54
		::System::UInt32 ActivityID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_INIT_OFFSET))(this);
		}

		::System::Boolean IsRelicInBox(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_OFFSET))(this, itemData);
		}

		::System::Boolean IsRelicInBox_1(::System::UInt32 itemUid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_1_OFFSET))(this, itemUid);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* TryGetPopupRelics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_TRYGETPOPUPRELICS_OFFSET))(this);
		}

		::System::Void SendGetRelicBoxDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDGETRELICBOXDATACSREQ_OFFSET))(this);
		}

		::System::Void SendOpenRelicBoxCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDOPENRELICBOXCSREQ_OFFSET))(this);
		}

		::System::Void SendConfirmRelicBoxCsReq(::System::Boolean isConfirm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDCONFIRMRELICBOXCSREQ_OFFSET))(this, isConfirm);
		}

		::System::Void SendSetRelicBoxTargetCsReq(::RPG::Client::RelicBox::RelicBoxSuitPlanData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXTARGETCSREQ_OFFSET))(this, data);
		}

		::System::Void SendReportRelicBoxPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDREPORTRELICBOXPOPUP_OFFSET))(this);
		}

		::System::Boolean SaveAllDirtyPlan()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SAVEALLDIRTYPLAN_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* GetCurrentRelicItemData(::RPG::GameCore::RelicType relicType)
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMDATA_OFFSET))(this, relicType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetCurrentRelicItemListData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMLISTDATA_OFFSET))(this);
		}

		::System::Boolean IsRelicBoxSnapshotItem(::RPG::Client::RelicItemData* itemData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICBOXSNAPSHOTITEM_OFFSET))(this, itemData);
		}

		::System::Void SendSetRelicBoxShieldCsReq(::System::Collections::Generic::List_1<::System::UInt32>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXSHIELDCSREQ_OFFSET))(this, positions);
		}

		::System::Void AddNewRelicToBox(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ADDNEWRELICTOBOX_OFFSET))(this, relic);
		}

		::System::Void ClearNewRelicUid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_CLEARNEWRELICUID_OFFSET))(this);
		}

		::System::Boolean IsNewRelic(::System::UInt32 relicID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISNEWRELIC_OFFSET))(this, relicID);
		}

		::System::Boolean DoesSnapshotRelicExist(::RPG::Client::RelicItemData* relic)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_DOESSNAPSHOTRELICEXIST_OFFSET))(this, relic);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetRelicBoxDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONGETRELICBOXDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnOpenRelicBoxScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONOPENRELICBOXSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetRelicBoxTargetScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXTARGETSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnConfirmRelicBoxScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONCONFIRMRELICBOXSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnReportRelicBoxActionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONREPORTRELICBOXACTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetRelicBoxCustomScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXCUSTOMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRelicBoxRegularScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONRELICBOXREGULARSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _CreateRelicItemListForSnapshot(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_4*>* relics)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E14A0A1A8B1F847C_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__CREATERELICITEMLISTFORSNAPSHOT_OFFSET))(this, relics);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _GetInventoryRelicItemListData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETINVENTORYRELICITEMLISTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* _GetSortedRelicItemListData(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* relicItems)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__GETSORTEDRELICITEMLISTDATA_OFFSET))(this, relicItems);
		}

		::System::Void _OnItemChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONITEMCHANGED_OFFSET))(this, obj);
		}

		::System::Void _OnPlayerDailyRefreshing(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONPLAYERDAILYREFRESHING_OFFSET))(this, obj);
		}

		::System::UInt32 get_RelicBoxKeyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_RelicBoxKeyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYID_OFFSET))(this);
		}

		::System::UInt32 get_CustomKeyCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_CUSTOMKEYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockShieldCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_UNLOCKSHIELDCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCanShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ISCANSHIELD_OFFSET))(this);
		}

		::System::Boolean get_HasUsedAllKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_HASUSEDALLKEYS_OFFSET))(this);
		}

		::RPG::Client::RelicItemData* get_PendingRelic()
		{
			return ((::RPG::Client::RelicItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_PENDINGRELIC_OFFSET))(this);
		}

		::System::Void set_PendingRelic(::RPG::Client::RelicItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_PENDINGRELIC_OFFSET))(this, value);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_ROLLTIMES_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
