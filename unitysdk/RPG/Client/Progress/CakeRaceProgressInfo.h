#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_CALCULATEALLQUESTSPROGRESSPERCENT_OFFSET UNITYSDK_OFFSET(0x193A10A0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193A1330)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GETQUESTDONECOUNT_OFFSET UNITYSDK_OFFSET(0x193A0DB0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GETQUESTTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x193A0EC0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_GET_RESIDENTQUESTIDS_OFFSET UNITYSDK_OFFSET(0x193A0800)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_HASFINISHEDQUESTS_OFFSET UNITYSDK_OFFSET(0x193A0FA0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_INIT_OFFSET UNITYSDK_OFFSET(0x193A0840)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_SYNCQUESTDATA_OFFSET UNITYSDK_OFFSET(0x193A0AB0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_TRYGETCURRENTPROGRESSID_OFFSET UNITYSDK_OFFSET(0x193A0CB0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO_TRYGETPROGRESSPERCENTWITHQUESTID_OFFSET UNITYSDK_OFFSET(0x193A12A0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x193A1430)

namespace RPG::Client::Progress
{
	inline static constexpr unsigned int CakeRaceProgressInfo_TypeDefinitionIndex = 71371;

	class CakeRaceProgressInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _ResidentQuestIDs; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* _ProgressPercents; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _Quests; // 0x20

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
