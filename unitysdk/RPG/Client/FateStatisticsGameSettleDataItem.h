#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_F1F83A16E5B8B459_2;
namespace RPG::Client { class FateBuffSlotData; }
namespace RPG::Client { class FateHouguDataItem; }
namespace RPG::Client { class FateReijuDataItem; }
namespace RPG::Client { class FateRoundInfoItem; }
namespace RPG::Client { class FateStatisticsAvatarDataItem; }
namespace RPG::Client { class FateStatisticsMasterInfoItem; }
namespace RPG::Client { class FateTraitData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GETRANKNUMIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA35EB20)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xA35F070)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xA35F080)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_BUFFSLOTLIST_OFFSET UNITYSDK_OFFSET(0xA35F0C0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DATETIMESTR_OFFSET UNITYSDK_OFFSET(0xA35F120)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA35F090)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_HOUGULIST_OFFSET UNITYSDK_OFFSET(0xA35F0A0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_MASTERINFOBYRANK_OFFSET UNITYSDK_OFFSET(0xA35F0F0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PHASEROUNDSTR_OFFSET UNITYSDK_OFFSET(0xA35F110)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PLAYERRANK_OFFSET UNITYSDK_OFFSET(0xA35F100)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_REIJULIST_OFFSET UNITYSDK_OFFSET(0xA35F0B0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TEAMAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA35F0E0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TRAITLIST_OFFSET UNITYSDK_OFFSET(0xA35F0D0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA33F620)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA33F610)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GENERATEDEFAULTBUFFSLOTID_OFFSET UNITYSDK_OFFSET(0xA35CD00)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETDATETIMESTR_OFFSET UNITYSDK_OFFSET(0xA35F020)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETPHASEROUNDSTR_OFFSET UNITYSDK_OFFSET(0xA35ECF0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCAREA_OFFSET UNITYSDK_OFFSET(0xA35CEA0)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCBUFF_OFFSET UNITYSDK_OFFSET(0xA35D790)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCDATETIMEINFO_OFFSET UNITYSDK_OFFSET(0xA35EA60)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCHOUGU_OFFSET UNITYSDK_OFFSET(0xA35D080)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCMASTERINFO_OFFSET UNITYSDK_OFFSET(0xA35E510)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCPHASEROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA35EA00)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCREIJU_OFFSET UNITYSDK_OFFSET(0xA35D410)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTEAM_OFFSET UNITYSDK_OFFSET(0xA35E170)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTRAIT_OFFSET UNITYSDK_OFFSET(0xA35DD40)
#define RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___GETPHASEROUNDSTR_B__13_0_OFFSET UNITYSDK_OFFSET(0xA35F170)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsGameSettleDataItem_TypeDefinitionIndex = 58995;

	class FateStatisticsGameSettleDataItem : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _ServerSyncPlayerMasterAvatarID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* _HouguList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsAvatarDataItem*>* _TeamAvatarList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* _TraitList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsMasterInfoItem*>* _MasterInfoByRank; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* _ReijuList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* _BuffSlotList; // 0x38
		::System::UInt32 _DefaultBuffSlotID; // 0x40
		::RPG::GameCore::FateAreaType _AreaType; // 0x44
		::RPG::Client::DateTimePro_LiteralDate _DateTime; // 0x48
		::System::UInt32 _Difficulty; // 0x58
		::System::UInt32 _PhaseID; // 0x5C
		::System::UInt32 _RoundIndex; // 0x60
		::System::UInt32 _PlayerRank; // 0x64
		::RPG::Client::TextID _AreaName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::String* GetRankNumImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GETRANKNUMIMAGEPATH_OFFSET))(this);
		}

		::System::Void _GenerateDefaultBuffSlotID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GENERATEDEFAULTBUFFSLOTID_OFFSET))(this);
		}

		::System::Void _SyncArea(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCAREA_OFFSET))(this, proto);
		}

		::System::Void _SyncHougu(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCHOUGU_OFFSET))(this, proto);
		}

		::System::Void _SyncReiju(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCREIJU_OFFSET))(this, proto);
		}

		::System::Void _SyncBuff(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCBUFF_OFFSET))(this, proto);
		}

		::System::Void _SyncTrait(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTRAIT_OFFSET))(this, proto);
		}

		::System::Void _SyncTeam(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCTEAM_OFFSET))(this, proto);
		}

		::System::Void _SyncMasterInfo(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCMASTERINFO_OFFSET))(this, proto);
		}

		::System::Void _SyncPhaseRoundInfo(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCPHASEROUNDINFO_OFFSET))(this, proto);
		}

		::System::Void _SyncDateTimeInfo(::Class_1_F1F83A16E5B8B459_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__SYNCDATETIMEINFO_OFFSET))(this, proto);
		}

		::System::String* _GetPhaseRoundStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETPHASEROUNDSTR_OFFSET))(this);
		}

		::System::String* _GetDateTimeStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM__GETDATETIMESTR_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREANAME_OFFSET))(this);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_AREATYPE_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>* get_HouguList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHouguDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_HOUGULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>* get_ReijuList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateReijuDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_REIJULIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* get_BuffSlotList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_BUFFSLOTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* get_TraitList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TRAITLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsAvatarDataItem*>* get_TeamAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsAvatarDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_TEAMAVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsMasterInfoItem*>* get_MasterInfoByRank()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateStatisticsMasterInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_MASTERINFOBYRANK_OFFSET))(this);
		}

		::System::UInt32 get_PlayerRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PLAYERRANK_OFFSET))(this);
		}

		::System::String* get_PhaseRoundStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_PHASEROUNDSTR_OFFSET))(this);
		}

		::System::String* get_DateTimeStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM_GET_DATETIMESTR_OFFSET))(this);
		}

		::System::Boolean __GetPhaseRoundStr_b__13_0(::RPG::Client::FateRoundInfoItem* round)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRoundInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSGAMESETTLEDATAITEM___GETPHASEROUNDSTR_B__13_0_OFFSET))(this, round);
		}
	};
}
