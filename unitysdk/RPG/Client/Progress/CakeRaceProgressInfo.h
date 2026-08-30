#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_CALCULATEALLQUESTSPROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0xDBC2F80)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBC3210)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GETQUESTDONECOUNT_OFFSET UNITYSDK_OFFSET(0xDBC2C90)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GETQUESTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xDBC2DA0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GET_RESIDENTQUESTIDS_OFFSET UNITYSDK_OFFSET(0xDBC26C0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_HASFINISHEDQUESTS_OFFSET UNITYSDK_OFFSET(0xDBC2E80)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_INIT_OFFSET UNITYSDK_OFFSET(0xDBC2700)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_SYNCQUESTDATA_OFFSET UNITYSDK_OFFSET(0xDBC2990)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_TRYGETCURRENTPROGRESSID_OFFSET UNITYSDK_OFFSET(0xDBC2B90)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_TRYGETPROGRESSPERCENTWITHQUESTID_OFFSET UNITYSDK_OFFSET(0xDBC3180)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDBC3310)

namespace RPG::Client::Progress
{
	inline static constexpr unsigned int CakeRaceProgressInfo_TypeDefinitionIndex = 74678;

	class CakeRaceProgressInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _Quests; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* _ProgressPercents; // 0x18
		::Il2CppArray<::System::UInt32>* _ResidentQuestIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ResidentQuestIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GET_RESIDENTQUESTIDS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_INIT_OFFSET))(this);
		}

		::System::Void SyncQuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_SYNCQUESTDATA_OFFSET))(this);
		}

		::System::UInt32 TryGetCurrentProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_TRYGETCURRENTPROGRESSID_OFFSET))(this);
		}

		::System::UInt32 GetQuestDoneCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GETQUESTDONECOUNT_OFFSET))(this);
		}

		::System::UInt32 GetQuestTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GETQUESTTOTALCOUNT_OFFSET))(this);
		}

		::System::Boolean HasFinishedQuests()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_HASFINISHEDQUESTS_OFFSET))(this);
		}

		::System::Void CalculateAllQuestsProgressPercent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_CALCULATEALLQUESTSPROGRESSPERCENT_OFFSET))(this);
		}

		::System::Single TryGetProgressPercentWithQuestID(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_TRYGETPROGRESSPERCENTWITHQUESTID_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_DISPOSE_OFFSET))(this);
		}
	};
}
