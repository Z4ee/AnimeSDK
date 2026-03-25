#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_59.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicBox { class RecommendationCalculator; }
namespace RPG::Client::RelicBox { class RelicBoxRewardDataManager; }
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanData; }
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanDataManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ADDNEWRELICTOBOX_OFFSET UNITYSDK_OFFSET(0xA29CFE0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_CLEARNEWRELICUID_OFFSET UNITYSDK_OFFSET(0xA29D060)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMDATA_OFFSET UNITYSDK_OFFSET(0xA29CE60)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GETCURRENTRELICITEMLISTDATA_OFFSET UNITYSDK_OFFSET(0xA29BB20)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_CUSTOMKEYCOUNT_OFFSET UNITYSDK_OFFSET(0xA29DFE0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ISCANSHIELD_OFFSET UNITYSDK_OFFSET(0xA29E100)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_PENDINGRELIC_OFFSET UNITYSDK_OFFSET(0xA29E110)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYCOUNT_OFFSET UNITYSDK_OFFSET(0xA29DDD0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_RELICBOXKEYID_OFFSET UNITYSDK_OFFSET(0xA29DF00)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xA29E130)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_GET_UNLOCKSHIELDCOUNT_OFFSET UNITYSDK_OFFSET(0xA29E0F0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA29AFE0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISNEWRELIC_OFFSET UNITYSDK_OFFSET(0xA29D0B0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_1_OFFSET UNITYSDK_OFFSET(0xA29B970)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_ISRELICINBOX_OFFSET UNITYSDK_OFFSET(0xA29B910)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SAVEALLDIRTYPLAN_OFFSET UNITYSDK_OFFSET(0xA29C880)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDCONFIRMRELICBOXCSREQ_OFFSET UNITYSDK_OFFSET(0xA29C1F0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDGETRELICBOXDATACSREQ_OFFSET UNITYSDK_OFFSET(0xA29BD70)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDOPENRELICBOXCSREQ_OFFSET UNITYSDK_OFFSET(0xA29BE50)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDREPORTRELICBOXPOPUP_OFFSET UNITYSDK_OFFSET(0xA29C7D0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXSHIELDCSREQ_OFFSET UNITYSDK_OFFSET(0xA29CF90)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SENDSETRELICBOXTARGETCSREQ_OFFSET UNITYSDK_OFFSET(0xA29C3D0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_PENDINGRELIC_OFFSET UNITYSDK_OFFSET(0xA29E120)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0xA29E140)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE_TRYGETPOPUPRELICS_OFFSET UNITYSDK_OFFSET(0xA29BA50)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA29D100)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA29D220)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA29E150)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONCONFIRMRELICBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xA29D9C0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONGETRELICBOXDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA29D3A0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xA29DB90)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONOPENRELICBOXSCRSP_OFFSET UNITYSDK_OFFSET(0xA29D770)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONPLAYERDAILYREFRESH_OFFSET UNITYSDK_OFFSET(0xA29DEB0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONREPORTRELICBOXACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xA29DA90)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXCUSTOMSCRSP_OFFSET UNITYSDK_OFFSET(0xA29DB00)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONSETRELICBOXTARGETSCRSP_OFFSET UNITYSDK_OFFSET(0xA29D800)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA29E4C0)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA29E550)
#define RPG_CLIENT_RELICBOX_RELICBOXMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA29E5B0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxModule_TypeDefinitionIndex = 61207;

	class RelicBoxModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RelicBox::RelicBoxSuitPlanDataManager* PlanDataManager; // 0x10
		::RPG::Client::RelicItemData* _PendingRelic_k__BackingField; // 0x18
		::RPG::Client::RelicBox::RelicBoxRewardDataManager* RewardDataManager; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _CurrentRelicIDList; // 0x28
		::RPG::Client::RelicBox::RecommendationCalculator* recommendationCalculator; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* ShieldPositions; // 0x38
		::Enum_3_0A3761FE34514D6C_59 CurrentState; // 0x40
		::System::UInt32 _LastCustomKeyCount; // 0x44
		::System::UInt32 _RollTimes_k__BackingField; // 0x48
		::System::UInt32 _NewRelicUID; // 0x4C
		::System::UInt32 _ActivityID; // 0x50

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

		::System::Void _OnItemChanged(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONITEMCHANGED_OFFSET))(this, obj);
		}

		::System::Void _OnPlayerDailyRefresh(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXMODULE__ONPLAYERDAILYREFRESH_OFFSET))(this, obj);
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
