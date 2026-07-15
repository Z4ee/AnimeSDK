#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SilverWolfState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SILVERWOLFUTILS_GETACTIVITYSHOPID_OFFSET UNITYSDK_OFFSET(0x188E5D40)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCOLLECTIONQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x188E2D80)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCOMPANIONREWARDCURRENCYNUM_OFFSET UNITYSDK_OFFSET(0x188E5FF0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCURACTIVITYSTATE_OFFSET UNITYSDK_OFFSET(0x188E57F0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYICON_OFFSET UNITYSDK_OFFSET(0x188E5EE0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYID_OFFSET UNITYSDK_OFFSET(0x188E5DE0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETGOTOCOMPANIONMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x188E63A0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETLIGHTCONEQUESTDATA_OFFSET UNITYSDK_OFFSET(0x188E5C70)
#define RPG_CLIENT_SILVERWOLFUTILS_GETPREMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x188E46F0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETTEXTIDBYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x188E62E0)
#define RPG_CLIENT_SILVERWOLFUTILS_GETUNLOCKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x188E5A50)
#define RPG_CLIENT_SILVERWOLFUTILS_ISDECALQUESTFINISH_OFFSET UNITYSDK_OFFSET(0x188E5B90)
#define RPG_CLIENT_SILVERWOLFUTILS_ISGROUPFINISH_OFFSET UNITYSDK_OFFSET(0x188E5AE0)
#define RPG_CLIENT_SILVERWOLFUTILS_ISINONLYSHOPSCHEDULE_OFFSET UNITYSDK_OFFSET(0x188E6240)
#define RPG_CLIENT_SILVERWOLFUTILS_ISUNLOCKMISSIONALLFINISHED_OFFSET UNITYSDK_OFFSET(0x188E5920)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfUtils_TypeDefinitionIndex = 64955;

	class SilverWolfUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::SilverWolfState GetCurActivityState()
		{
			return ((::RPG::Client::SilverWolfState(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCURACTIVITYSTATE_OFFSET))();
		}

		static ::System::Boolean IsUnlockMissionAllFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISUNLOCKMISSIONALLFINISHED_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockMissionList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETUNLOCKMISSIONLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetPremissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETPREMISSIONIDLIST_OFFSET))();
		}

		static ::System::Boolean IsGroupFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISGROUPFINISH_OFFSET))(a1);
		}

		static ::System::Boolean IsDecalQuestFinish(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISDECALQUESTFINISH_OFFSET))(a1);
		}

		static ::RPG::Client::QuestData* GetLightConeQuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETLIGHTCONEQUESTDATA_OFFSET))(a1);
		}

		static ::System::UInt32 GetActivityShopID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETACTIVITYSHOPID_OFFSET))();
		}

		static ::System::UInt32 GetCurrencyID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYID_OFFSET))();
		}

		static ::System::String* GetCurrencyIcon()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCURRENCYICON_OFFSET))();
		}

		static ::System::UInt32 GetCompanionRewardCurrencyNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCOMPANIONREWARDCURRENCYNUM_OFFSET))();
		}

		static ::System::Boolean IsInOnlyShopSchedule()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_ISINONLYSHOPSCHEDULE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetCollectionQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETCOLLECTIONQUESTIDLIST_OFFSET))();
		}

		static ::RPG::Client::TextID GetTextIDByEntranceID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETTEXTIDBYENTRANCEID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGotoCompanionMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFUTILS_GETGOTOCOMPANIONMISSIONIDLIST_OFFSET))();
		}
	};
}
