#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartySettleSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_99;
class Class_1_6FC4D75D938BC053_19;
class Class_1_C4B679728AD83B32_21;
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerChangeInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillSettleData; }
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace RPG::Client::TrainParty { template <typename T> class TrainPartyCacheDataList_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB34F9A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB34F840)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETHISTORYMEETINGSCORELIST_OFFSET UNITYSDK_OFFSET(0xB362010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0xB361E90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETSORTEDCHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0xB361F00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_ISSHOWN_OFFSET UNITYSDK_OFFSET(0xB3622A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTFUNDS_OFFSET UNITYSDK_OFFSET(0xB3621C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTMOVESTEP_OFFSET UNITYSDK_OFFSET(0xB3621E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0xB362160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_OWNERGAME_OFFSET UNITYSDK_OFFSET(0xB362120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_PASSENGERCHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0xB362100)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SETTLESOURCE_OFFSET UNITYSDK_OFFSET(0xB362140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB362240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET__SHOWNOCHANGEPASSENGER_OFFSET UNITYSDK_OFFSET(0xB3620F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_HASRECORD_OFFSET UNITYSDK_OFFSET(0xB361BD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_RECORDPASSENGERINFOS_OFFSET UNITYSDK_OFFSET(0xB361CA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETHISTORYMEETINGSCORES_OFFSET UNITYSDK_OFFSET(0xB361E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xB361C50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_ISSHOWN_OFFSET UNITYSDK_OFFSET(0xB3622B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_LASTFUNDS_OFFSET UNITYSDK_OFFSET(0xB3621D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_OWNERGAME_OFFSET UNITYSDK_OFFSET(0xB362130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_PASSENGERCHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0xB362110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_SETTLESOURCE_OFFSET UNITYSDK_OFFSET(0xB362150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xB361300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CHANGEINFOCOMPARE_OFFSET UNITYSDK_OFFSET(0xB362050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3612A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__GENERATERECORDLIST_OFFSET UNITYSDK_OFFSET(0xB361940)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__SYNCPASSENGECHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0xB361380)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySettleData_TypeDefinitionIndex = 68634;

	class TrainPartySettleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* _PassengerChangeInfoList_k__BackingField; // 0x10
		::RPG::Client::TrainParty::TrainPartyGameInstance* _OwnerGame_k__BackingField; // 0x18
		::System::Collections::Generic::IList_1<::System::UInt32>* _HistoryMeetingScores; // 0x20
		::RPG::Client::TrainParty::TrainPartyCacheDataList_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* _CacheChangeInfoList; // 0x28
		::RPG::Client::TrainParty::TrainPartyRecordGroup* _RecordGroup; // 0x30
		::RPG::Client::TrainParty::TrainPartySettleSourceType _SettleSource_k__BackingField; // 0x38
		::System::UInt32 _LastFunds_k__BackingField; // 0x3C
		::System::Boolean _IsShown_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartySettleData* Create(::Class_1_6FC4D75D938BC053_19* serverInfo, ::RPG::Client::TrainParty::TrainPartyGameInstance* owner, ::RPG::Client::TrainParty::TrainPartySettleSourceType sourceType)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::Class_1_6FC4D75D938BC053_19*, ::RPG::Client::TrainParty::TrainPartyGameInstance*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_OFFSET))(serverInfo, owner, sourceType);
		}

		static ::RPG::Client::TrainParty::TrainPartySettleData* Create_1(::RPG::Client::TrainParty::TrainPartyGameInstance* owner, ::RPG::Client::TrainParty::TrainPartySettleSourceType sourceType)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::RPG::Client::TrainParty::TrainPartyGameInstance*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_1_OFFSET))(owner, sourceType);
		}

		::System::Void Sync(::Class_1_6FC4D75D938BC053_19* serverInfo, ::RPG::Client::TrainParty::TrainPartySettleSourceType sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_19*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SYNC_OFFSET))(this, serverInfo, sourceType);
		}

		::System::Boolean HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_HASRECORD_OFFSET))(this);
		}

		::System::Void SetSourceType(::RPG::Client::TrainParty::TrainPartySettleSourceType sourceType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETSOURCETYPE_OFFSET))(this, sourceType);
		}

		::System::Void RecordPassengerInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* passengerList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_RECORDPASSENGERINFOS_OFFSET))(this, passengerList);
		}

		::System::Void SetHistoryMeetingScores(::System::Collections::Generic::IList_1<::System::UInt32>* scores)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETHISTORYMEETINGSCORES_OFFSET))(this, scores);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* GetRecordInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETRECORDINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* GetSortedChangeInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETSORTEDCHANGEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetHistoryMeetingScoreList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETHISTORYMEETINGSCORELIST_OFFSET))(this);
		}

		::System::Int32 _ChangeInfoCompare(::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo* a, ::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*, ::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CHANGEINFOCOMPARE_OFFSET))(this, a, b);
		}

		::System::Void _SyncPassengeChangeInfoList(::System::Collections::Generic::IList_1<::Class_1_C4B679728AD83B32_21*>* passengers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C4B679728AD83B32_21*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__SYNCPASSENGECHANGEINFOLIST_OFFSET))(this, passengers);
		}

		::System::Void _GenerateRecordList(::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_99*>* recordLogList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_99*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__GENERATERECORDLIST_OFFSET))(this, recordLogList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* get_PassengerChangeInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_PASSENGERCHANGEINFOLIST_OFFSET))(this);
		}

		::System::Void set_PassengerChangeInfoList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_PASSENGERCHANGEINFOLIST_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyGameInstance* get_OwnerGame()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_OWNERGAME_OFFSET))(this);
		}

		::System::Void set_OwnerGame(::RPG::Client::TrainParty::TrainPartyGameInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_OWNERGAME_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartySettleSourceType get_SettleSource()
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SETTLESOURCE_OFFSET))(this);
		}

		::System::Void set_SettleSource(::RPG::Client::TrainParty::TrainPartySettleSourceType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_SETTLESOURCE_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* get_LastUsedCard()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTUSEDCARD_OFFSET))(this);
		}

		::System::UInt32 get_LastFunds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTFUNDS_OFFSET))(this);
		}

		::System::Void set_LastFunds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_LASTFUNDS_OFFSET))(this, value);
		}

		::System::UInt32 get_LastMoveStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTMOVESTEP_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* get_SkillSettleData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SKILLSETTLEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_ISSHOWN_OFFSET))(this);
		}

		::System::Void set_IsShown(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_ISSHOWN_OFFSET))(this, value);
		}

		::System::Boolean get__ShowNoChangePassenger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET__SHOWNOCHANGEPASSENGER_OFFSET))(this);
		}
	};
}
