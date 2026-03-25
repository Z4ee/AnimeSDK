#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_24.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_C9281D1A95E9298A;
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_1_OFFSET UNITYSDK_OFFSET(0xA249D50)
#define RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_OFFSET UNITYSDK_OFFSET(0xA249BE0)
#define RPG_CLIENT_QUESTMODULE_GET_ALLQUESTS_OFFSET UNITYSDK_OFFSET(0xA24AC60)
#define RPG_CLIENT_QUESTMODULE_HASQUESTINSTATUS_OFFSET UNITYSDK_OFFSET(0xA249710)
#define RPG_CLIENT_QUESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA249F30)
#define RPG_CLIENT_QUESTMODULE_ISQUESTFEATUREPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0xA2494D0)
#define RPG_CLIENT_QUESTMODULE_ISQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xA249B20)
#define RPG_CLIENT_QUESTMODULE_SET_ALLQUESTS_OFFSET UNITYSDK_OFFSET(0xA24AC70)
#define RPG_CLIENT_QUESTMODULE_TRYGETQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA23DEE0)
#define RPG_CLIENT_QUESTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA249E10)
#define RPG_CLIENT_QUESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA249440)
#define RPG_CLIENT_QUESTMODULE__ISVALIDQUESTID_OFFSET UNITYSDK_OFFSET(0xA24A220)
#define RPG_CLIENT_QUESTMODULE__ONCMDGETQUESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA249FB0)
#define RPG_CLIENT_QUESTMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA24A420)
#define RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTOPTIONALREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA24AAD0)
#define RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA24A8B0)
#define RPG_CLIENT_QUESTMODULE__SYNCQUEST_OFFSET UNITYSDK_OFFSET(0xA24A290)
#define RPG_CLIENT_QUESTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA24ACE0)
#define RPG_CLIENT_QUESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA24AC80)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestModule_TypeDefinitionIndex = 54318;

	class QuestModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>* _AllQuests_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::QuestData* TryGetQuestData(::System::UInt32 questID)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_TRYGETQUESTDATA_OFFSET))(this, questID);
		}

		::System::Boolean IsQuestFeaturePartialClosed(::System::Collections::Generic::List_1<::System::UInt32>* questIdList, ::System::Boolean isShowToast)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_ISQUESTFEATUREPARTIALCLOSED_OFFSET))(this, questIdList, isShowToast);
		}

		::System::Boolean HasQuestInStatus(::System::Collections::Generic::IList_1<::System::UInt32>* questIDs, ::Enum_3_4608E37A1B3D374A_24 status)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_4608E37A1B3D374A_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_HASQUESTINSTATUS_OFFSET))(this, questIDs, status);
		}

		::System::UInt32 GetQuestStatusCount(::System::Collections::Generic::List_1<::System::UInt32>* questIDs, ::Enum_3_4608E37A1B3D374A_24 status)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_4608E37A1B3D374A_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_OFFSET))(this, questIDs, status);
		}

		::System::UInt32 GetQuestStatusCount_1(::Il2CppArray<::System::UInt32>* questIDs, ::Enum_3_4608E37A1B3D374A_24 status)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Enum_3_4608E37A1B3D374A_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_1_OFFSET))(this, questIDs, status);
		}

		::System::Boolean IsQuestStatus(::System::UInt32 questID, ::Enum_3_4608E37A1B3D374A_24 status)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Enum_3_4608E37A1B3D374A_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_ISQUESTSTATUS_OFFSET))(this, questID, status);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _OnCmdGetQuestDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDGETQUESTDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeQuestRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeQuestOptionalRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTOPTIONALREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncQuest(::Class_1_C9281D1A95E9298A* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9281D1A95E9298A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__SYNCQUEST_OFFSET))(this, quest);
		}

		::System::Boolean _IsValidQuestID(::System::UInt32 questID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ISVALIDQUESTID_OFFSET))(this, questID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>* get_AllQuests()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_GET_ALLQUESTS_OFFSET))(this);
		}

		::System::Void set_AllQuests(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_SET_ALLQUESTS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
