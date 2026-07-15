#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_26.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_590EC2E573209D50;
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_1_OFFSET UNITYSDK_OFFSET(0x16788CD0)
#define RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_OFFSET UNITYSDK_OFFSET(0x16788B90)
#define RPG_CLIENT_QUESTMODULE_GET_ALLQUESTS_OFFSET UNITYSDK_OFFSET(0x1678A040)
#define RPG_CLIENT_QUESTMODULE_HASQUESTINSTATUS_OFFSET UNITYSDK_OFFSET(0x16788490)
#define RPG_CLIENT_QUESTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x16789040)
#define RPG_CLIENT_QUESTMODULE_ISQUESTFEATUREPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0x167882C0)
#define RPG_CLIENT_QUESTMODULE_ISQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x16788AD0)
#define RPG_CLIENT_QUESTMODULE_SET_ALLQUESTS_OFFSET UNITYSDK_OFFSET(0x1678A050)
#define RPG_CLIENT_QUESTMODULE_TRYGETQUESTDATA_OFFSET UNITYSDK_OFFSET(0x1677C410)
#define RPG_CLIENT_QUESTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x16788D80)
#define RPG_CLIENT_QUESTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16788230)
#define RPG_CLIENT_QUESTMODULE__ISVALIDQUESTID_OFFSET UNITYSDK_OFFSET(0x167893F0)
#define RPG_CLIENT_QUESTMODULE__ONCMDGETQUESTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x16789090)
#define RPG_CLIENT_QUESTMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x16789610)
#define RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTOPTIONALREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x16789E30)
#define RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x16789C00)
#define RPG_CLIENT_QUESTMODULE__SYNCQUEST_OFFSET UNITYSDK_OFFSET(0x16789460)

namespace RPG::Client
{
	inline static constexpr unsigned int QuestModule_TypeDefinitionIndex = 63780;

	class QuestModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>* _AllQuests_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::QuestData* TryGetQuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_TRYGETQUESTDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsQuestFeaturePartialClosed(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_ISQUESTFEATUREPARTIALCLOSED_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasQuestInStatus(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::Enum_3_4608E37A1B3D374A_26 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_HASQUESTINSTATUS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetQuestStatusCount(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::Enum_3_4608E37A1B3D374A_26 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetQuestStatusCount_1(::Il2CppArray<::System::UInt32>* a1, ::Enum_3_4608E37A1B3D374A_26 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_GETQUESTSTATUSCOUNT_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsQuestStatus(::System::UInt32 a1, ::Enum_3_4608E37A1B3D374A_26 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Enum_3_4608E37A1B3D374A_26))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_ISQUESTSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _OnCmdGetQuestDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDGETQUESTDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeQuestRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdTakeQuestOptionalRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ONCMDTAKEQUESTOPTIONALREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncQuest(::Class_1_590EC2E573209D50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_590EC2E573209D50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__SYNCQUEST_OFFSET))(this, a1);
		}

		::System::Boolean _IsValidQuestID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE__ISVALIDQUESTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>* get_AllQuests()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_GET_ALLQUESTS_OFFSET))(this);
		}

		::System::Void set_AllQuests(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::QuestData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_QUESTMODULE_SET_ALLQUESTS_OFFSET))(this, a1);
		}
	};
}
