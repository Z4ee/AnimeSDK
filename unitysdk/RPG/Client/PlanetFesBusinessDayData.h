#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_81;
class Class_1_21C7581DFE99F091_75;
class Class_1_23F67DD15593C8D6;
class Class_1_60E3B7F7BA004DCE_5;
class Class_1_9BD68750D8B87DAA;
class Class_1_C2CA2C8C31F52936;
class Class_1_FB0633E85BD6CF8E_9;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace RPG::Client { class PlanetFesBusinessDayHistoryData; }
namespace RPG::Client { class PlanetFesEventDataBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEAREVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0xC407270)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEARTIMERBYTYPE_OFFSET UNITYSDK_OFFSET(0xC406590)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CREATEEMPTY_OFFSET UNITYSDK_OFFSET(0xC4080B0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4083C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GETEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0xC405420)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAYHISTORYDATADICT_OFFSET UNITYSDK_OFFSET(0xC408090)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC408CE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_CUREVENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC406AF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTDATADICT_OFFSET UNITYSDK_OFFSET(0xC406E90)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC406DF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFILLEDDATA_OFFSET UNITYSDK_OFFSET(0xC408D00)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHEDALLEVENT_OFFSET UNITYSDK_OFFSET(0xC406E60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC408D20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xC408D40)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISTUTORIALBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC408DA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0xC408DD0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC408D80)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xC408D60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC406C70)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC408670)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONSTART_OFFSET UNITYSDK_OFFSET(0xC408570)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SETONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0xC408520)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAYHISTORYDATADICT_OFFSET UNITYSDK_OFFSET(0xC4080A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC408CF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_EVENTDATADICT_OFFSET UNITYSDK_OFFSET(0xC406EA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFILLEDDATA_OFFSET UNITYSDK_OFFSET(0xC408D10)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC408D30)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xC408D50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ONSTARTGUARD_OFFSET UNITYSDK_OFFSET(0xC408DE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC408D90)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xC408D70)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTHISTORY_OFFSET UNITYSDK_OFFSET(0xC405050)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTINFO_OFFSET UNITYSDK_OFFSET(0xC404EF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCHISTORYSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC407AB0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCOUTERINFO_OFFSET UNITYSDK_OFFSET(0xC408BA0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCTOTALCOINCHANGE_OFFSET UNITYSDK_OFFSET(0xC408C10)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC408A70)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TICKGAMEPLAYEVENTREFRESH_OFFSET UNITYSDK_OFFSET(0xC407300)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYADDTIMERBYTYPE_OFFSET UNITYSDK_OFFSET(0xC406780)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0xC405590)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYDISAPPEAREVENT_OFFSET UNITYSDK_OFFSET(0xC405630)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYENTERNEXTDAY_OFFSET UNITYSDK_OFFSET(0xC408770)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CHECKANDDISPATCHREFRESH_OFFSET UNITYSDK_OFFSET(0xC407590)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CLEAREVENTDATA_OFFSET UNITYSDK_OFFSET(0xC405A20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CREATETIMER_OFFSET UNITYSDK_OFFSET(0xC4071F0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC408260)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEEVENTS_OFFSET UNITYSDK_OFFSET(0xC406A50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEHISTORYINFO_OFFSET UNITYSDK_OFFSET(0xC407FF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__FINDEVENTINFO_OFFSET UNITYSDK_OFFSET(0xC4061C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__INITEVENTS_OFFSET UNITYSDK_OFFSET(0xC4056D0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCALLEVENTINFO_OFFSET UNITYSDK_OFFSET(0xC405C10)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCSINGLEEVENTINFO_OFFSET UNITYSDK_OFFSET(0xC404F50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TICKEVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0xC407420)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYAUTOADDEVENTREFRESHTIMERS_OFFSET UNITYSDK_OFFSET(0xC407390)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0xC407A10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayData_TypeDefinitionIndex = 62243;

	class PlanetFesBusinessDayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* _EventDataDict_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::Class_1_23F67DD15593C8D6*>* _EventRefreshTimer; // 0x18
		::System::Numerics::BigInteger _TotalCoin_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* _BusinessDayHistoryDataDict_k__BackingField; // 0x30
		::System::Boolean _IsFilledData_k__BackingField; // 0x38
		::System::Boolean _IsInfinite_k__BackingField; // 0x39
		::System::Boolean _OnStartGuard_k__BackingField; // 0x3A
		::System::Boolean _IsFinished_k__BackingField; // 0x3B
		::System::UInt32 _BusinessDay_k__BackingField; // 0x3C
		::System::Int64 _StartTimeStamp_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncEventInfo(::Class_1_9BD68750D8B87DAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BD68750D8B87DAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTINFO_OFFSET))(this, a1);
		}

		::System::Void SyncEventHistory(::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_75*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21C7581DFE99F091_75*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCEVENTHISTORY_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesEventDataBase* GetEventByType(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::RPG::Client::PlanetFesEventDataBase*(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GETEVENTBYTYPE_OFFSET))(this, a1);
		}

		::System::Void TryAppearEvent(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYAPPEAREVENT_OFFSET))(this, a1);
		}

		::System::Void TryDisappearEvent(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYDISAPPEAREVENT_OFFSET))(this, a1);
		}

		::System::Void _InitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__INITEVENTS_OFFSET))(this);
		}

		::System::Void _ClearEventData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CLEAREVENTDATA_OFFSET))(this);
		}

		::System::Void _SyncAllEventInfo(::System::Collections::Generic::IList_1<::Class_1_9BD68750D8B87DAA*>* a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_9BD68750D8B87DAA*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCALLEVENTINFO_OFFSET))(this, a1, a2);
		}

		::Class_1_9BD68750D8B87DAA* _FindEventInfo(::System::Collections::Generic::IEnumerable_1<::Class_1_9BD68750D8B87DAA*>* a1, ::System::Int32 a2)
		{
			return ((::Class_1_9BD68750D8B87DAA*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_9BD68750D8B87DAA*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__FINDEVENTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncSingleEventInfo(::Class_1_9BD68750D8B87DAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9BD68750D8B87DAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__SYNCSINGLEEVENTINFO_OFFSET))(this, a1);
		}

		::System::Void _DisposeEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEEVENTS_OFFSET))(this);
		}

		::System::UInt32 get_CurEventCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_CUREVENTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalEventCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALEVENTCOUNT_OFFSET))(this);
		}

		::System::Single get_EventProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFinishedAllEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHEDALLEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* get_EventDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_EVENTDATADICT_OFFSET))(this);
		}

		::System::Void set_EventDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_EVENTDATADICT_OFFSET))(this, a1);
		}

		::System::Void TryAddTimerByType(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYADDTIMERBYTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearTimerByType(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEARTIMERBYTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearEventRefreshTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CLEAREVENTREFRESHTIMERS_OFFSET))(this);
		}

		::System::Void TickGamePlayEventRefresh(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TICKGAMEPLAYEVENTREFRESH_OFFSET))(this, a1);
		}

		::System::Void _TryAutoAddEventRefreshTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYAUTOADDEVENTREFRESHTIMERS_OFFSET))(this);
		}

		::Class_1_23F67DD15593C8D6* _CreateTimer(::System::Single a1)
		{
			return ((::Class_1_23F67DD15593C8D6*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CREATETIMER_OFFSET))(this, a1);
		}

		::System::Void _TickEventRefreshTimers(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TICKEVENTREFRESHTIMERS_OFFSET))(this, a1);
		}

		::System::Void _CheckAndDispatchRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__CHECKANDDISPATCHREFRESH_OFFSET))(this);
		}

		::System::Boolean _TryRefreshEvent(::RPG::Client::PlanetFesEventDataBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesEventDataBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__TRYREFRESHEVENT_OFFSET))(this, a1);
		}

		::System::Void SyncHistoryStatistics(::System::Collections::Generic::IEnumerable_1<::Class_1_FB0633E85BD6CF8E_9*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FB0633E85BD6CF8E_9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCHISTORYSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void _DisposeHistoryInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA__DISPOSEHISTORYINFO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* get_BusinessDayHistoryDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAYHISTORYDATADICT_OFFSET))(this);
		}

		::System::Void set_BusinessDayHistoryDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesBusinessDayHistoryData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAYHISTORYDATADICT_OFFSET))(this, a1);
		}

		static ::RPG::Client::PlanetFesBusinessDayData* CreateEmpty()
		{
			return ((::RPG::Client::PlanetFesBusinessDayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_CREATEEMPTY_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetOnStartGuard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SETONSTARTGUARD_OFFSET))(this, a1);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONSTART_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_ONFINISH_OFFSET))(this);
		}

		::System::Void TryEnterNextDay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_TRYENTERNEXTDAY_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_60E3B7F7BA004DCE_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncOuterInfo(::Class_1_C2CA2C8C31F52936* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C2CA2C8C31F52936*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCOUTERINFO_OFFSET))(this, a1);
		}

		::System::Void SyncTotalCoinChange(::Class_1_075C34D03AFA1215_81* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_81*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SYNCTOTALCOINCHANGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_BUSINESSDAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFilledData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFILLEDDATA_OFFSET))(this);
		}

		::System::Void set_IsFilledData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFILLEDDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Void set_IsInfinite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ISINFINITE_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_TotalCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_TOTALCOIN_OFFSET))(this, a1);
		}

		::System::Int64 get_StartTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_STARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_STARTTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorialBusinessDay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ISTUTORIALBUSINESSDAY_OFFSET))(this);
		}

		::System::Boolean get_OnStartGuard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_GET_ONSTARTGUARD_OFFSET))(this);
		}

		::System::Void set_OnStartGuard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA_SET_ONSTARTGUARD_OFFSET))(this, a1);
		}
	};
}
