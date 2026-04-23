#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_8.h"
#include "unitysdk/RPG/Client/ClientPunkLordAttackerStatus.h"
#include "unitysdk/RPG/Client/ClientPunkLordShareType.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0AADEC629A5E48C7_2;
class Class_1_3F057903E9982810;
class Class_1_99711449DFAB5464;
class Class_1_CD9875F83BA64B10;
class Class_1_D40936EF3BF54118_2;
class Class_1_EBB10EC01CCC4716_3;
class Class_1_F3CA30716D4FAF92_2;
namespace RPG::Client { class PunkLordHonor; }
namespace RPG::Client { class PunkLordScore; }
namespace RPG::GameCore { class ActivityPunkLordConfigRow; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterTemplateRow; }
namespace RPG::GameCore { class RaidConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xAF26630)
#define RPG_CLIENT_PUNKLORDDATA_COLLECTUIDS_OFFSET UNITYSDK_OFFSET(0xAF26360)
#define RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET UNITYSDK_OFFSET(0xAF25CB0)
#define RPG_CLIENT_PUNKLORDDATA_GETHONORLIST_OFFSET UNITYSDK_OFFSET(0xAF26310)
#define RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET UNITYSDK_OFFSET(0xAF25B40)
#define RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET UNITYSDK_OFFSET(0xAF259D0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0xAF26880)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0xAF267E0)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0xAF268A0)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xAF268C0)
#define RPG_CLIENT_PUNKLORDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xAF26A40)
#define RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET UNITYSDK_OFFSET(0xAF26820)
#define RPG_CLIENT_PUNKLORDDATA_GET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xAF26A90)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0xAF26860)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAF26840)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0xAF26780)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0xAF26760)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET UNITYSDK_OFFSET(0xAF267A0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSUMMONEDBYSELF_OFFSET UNITYSDK_OFFSET(0xAF26980)
#define RPG_CLIENT_PUNKLORDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xAF26AA0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xAF26AC0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0xAF268E0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0xAF26720)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0xAF26A70)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERTEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xAF26A80)
#define RPG_CLIENT_PUNKLORDDATA_GET_PUNKLORDROW_OFFSET UNITYSDK_OFFSET(0xAF26A50)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDCONFIGROW_OFFSET UNITYSDK_OFFSET(0xAF26A60)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xAF25570)
#define RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0xAF26800)
#define RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xAF266F0)
#define RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0xAF267C0)
#define RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xAF26740)
#define RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0xAF26700)
#define RPG_CLIENT_PUNKLORDDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xAF26900)
#define RPG_CLIENT_PUNKLORDDATA_GET_WORLDLV_OFFSET UNITYSDK_OFFSET(0xAF25590)
#define RPG_CLIENT_PUNKLORDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xAF262D0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0xAF26890)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0xAF267F0)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0xAF268B0)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xAF268D0)
#define RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET UNITYSDK_OFFSET(0xAF26830)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0xAF26870)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAF26850)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0xAF26790)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0xAF26770)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET UNITYSDK_OFFSET(0xAF267B0)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0xAF268F0)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0xAF26730)
#define RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0xAF26810)
#define RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0xAF267D0)
#define RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xAF26750)
#define RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0xAF26710)
#define RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET UNITYSDK_OFFSET(0xAF257E0)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET UNITYSDK_OFFSET(0xAF25640)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET UNITYSDK_OFFSET(0xAF25880)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xAF25730)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET UNITYSDK_OFFSET(0xAF25900)
#define RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET UNITYSDK_OFFSET(0xAF25980)
#define RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAF255B0)
#define RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF253E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordData_TypeDefinitionIndex = 61463;

	class PunkLordData : public ::System::Object
	{
	public:
		::RPG::Client::PunkLordScore* Score; // 0x10
		::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* _BattleRecordList_k__BackingField; // 0x18
		::Class_1_EBB10EC01CCC4716_3* _MonsterBasicInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AttackersList_k__BackingField; // 0x28
		::RPG::GameCore::ActivityPunkLordConfigRow* _PunkLordRow_k__BackingField; // 0x30
		::RPG::GameCore::MonsterTemplateRow* _MonsterTemplateRow_k__BackingField; // 0x38
		::RPG::GameCore::MonsterRow* _MonsterRow_k__BackingField; // 0x40
		::RPG::GameCore::RaidConfigRow* _RaidConfigRow_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* _BattleReplayList_k__BackingField; // 0x50
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _MonsterKey_k__BackingField; // 0x58
		::System::UInt32 _AttackNum_k__BackingField; // 0x60
		::System::UInt32 _DisplayMonsterID_k__BackingField; // 0x64
		::System::Boolean _IsShared_k__BackingField; // 0x68
		::System::Boolean _IsGenBySystem_k__BackingField; // 0x69
		::System::Boolean IsTakenScore; // 0x6A
		::System::Boolean _IsAttacking_k__BackingField; // 0x6B
		::RPG::Client::DateTimePro _ExpireDateTime_k__BackingField; // 0x70
		::System::UInt32 _ExpireTimeStamp_k__BackingField; // 0x78
		::System::UInt32 _ConfigID_k__BackingField; // 0x7C
		::System::UInt32 _CurHP_k__BackingField; // 0x80
		::System::UInt32 _SelfAttackNum_k__BackingField; // 0x84
		::RPG::Client::ClientPunkLordAttackerStatus _Status_k__BackingField; // 0x88
		::System::UInt32 _ServerID_k__BackingField; // 0x8C
		::System::UInt32 _SummonPlayerUID_k__BackingField; // 0x90
		::RPG::Client::ClientPunkLordShareType _ShareType_k__BackingField; // 0x94

		::System::Void _ctor(::System::UInt32 serverID, ::System::UInt32 summonUID, ::System::UInt32 configID, ::System::UInt32 worldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET))(this, serverID, summonUID, configID, worldLevel);
		}

		::System::Void Sync(::Class_1_0AADEC629A5E48C7_2* plMonsterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0AADEC629A5E48C7_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET))(this, plMonsterInfo);
		}

		::System::Void SyncBasicInfo(::Class_1_EBB10EC01CCC4716_3* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET))(this, basicInfo);
		}

		::System::Void SyncAttackerInfo(::System::Collections::Generic::List_1<::System::UInt32>* attackersList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET))(this, attackersList);
		}

		::System::Void SyncBattleRecord(::Class_1_D40936EF3BF54118_2* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncBattleRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_2*>* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncBattleReplay(::System::Collections::Generic::IEnumerable_1<::Class_1_3F057903E9982810*>* battleReplayList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3F057903E9982810*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET))(this, battleReplayList);
		}

		::System::Void SyncShareState(::Enum_3_0A3761FE34514D6C_8 shareType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET))(this, shareType);
		}

		::Class_1_99711449DFAB5464* GetReplayByKey(::System::String* key)
		{
			return ((::Class_1_99711449DFAB5464*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET))(this, key);
		}

		::Class_1_CD9875F83BA64B10* GetRecordByKey(::System::String* key)
		{
			return ((::Class_1_CD9875F83BA64B10*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET))(this, key);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FillDataForSDKRecord(::System::String* battleReplayKey, ::System::Int32 op)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET))(this, battleReplayKey, op);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PunkLordHonor*>* GetHonorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PunkLordHonor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETHONORLIST_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* CollectUids()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_COLLECTUIDS_OFFSET))(this);
		}

		::System::Void AppendBattleRecord(::Class_1_CD9875F83BA64B10* battleRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD9875F83BA64B10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET))(this, battleRecord);
		}

		::System::UInt32 get_ServerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET))(this);
		}

		::System::UInt32 get_SummonPlayerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET))(this);
		}

		::System::Void set_SummonPlayerUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET))(this, value);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> get_MonsterKey()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET))(this);
		}

		::System::Void set_MonsterKey(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET))(this, value);
		}

		::RPG::Client::ClientPunkLordAttackerStatus get_Status()
		{
			return ((::RPG::Client::ClientPunkLordAttackerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ClientPunkLordAttackerStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientPunkLordAttackerStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsGenBySystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET))(this);
		}

		::System::Void set_IsGenBySystem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET))(this, value);
		}

		::System::Boolean get_IsAttacking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET))(this);
		}

		::System::Void set_IsAttacking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET))(this, value);
		}

		::System::Boolean get_IsShared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET))(this);
		}

		::System::Void set_IsShared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET))(this, value);
		}

		::RPG::Client::ClientPunkLordShareType get_ShareType()
		{
			return ((::RPG::Client::ClientPunkLordShareType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET))(this);
		}

		::System::Void set_ShareType(::RPG::Client::ClientPunkLordShareType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientPunkLordShareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_AttackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET))(this);
		}

		::System::Void set_AttackNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_SelfAttackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET))(this);
		}

		::System::Void set_SelfAttackNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET))(this);
		}

		::System::Void set_CurHP(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET))(this, value);
		}

		::System::UInt32 get_ExpireTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ExpireTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET))(this, value);
		}

		::RPG::Client::DateTimePro get_ExpireDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET))(this);
		}

		::System::Void set_ExpireDateTime(::RPG::Client::DateTimePro value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AttackersList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET))(this);
		}

		::System::Void set_AttackersList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* get_BattleRecordList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET))(this);
		}

		::System::Void set_BattleRecordList(::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* get_BattleReplayList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET))(this);
		}

		::System::Void set_BattleReplayList(::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET))(this, value);
		}

		::Class_1_EBB10EC01CCC4716_3* get_MonsterBasicInfo()
		{
			return ((::Class_1_EBB10EC01CCC4716_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET))(this);
		}

		::System::Void set_MonsterBasicInfo(::Class_1_EBB10EC01CCC4716_3* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsSummonedBySelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISSUMMONEDBYSELF_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_CONFIGID_OFFSET))(this);
		}

		::RPG::GameCore::ActivityPunkLordConfigRow* get_PunkLordRow()
		{
			return ((::RPG::GameCore::ActivityPunkLordConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_PUNKLORDROW_OFFSET))(this);
		}

		::RPG::GameCore::RaidConfigRow* get_RaidConfigRow()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_RAIDCONFIGROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRow* get_MonsterRow()
		{
			return ((::RPG::GameCore::MonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterTemplateRow* get_MonsterTemplateRow()
		{
			return ((::RPG::GameCore::MonsterTemplateRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERTEMPLATEROW_OFFSET))(this);
		}

		::System::UInt32 get_DisplayMonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_DISPLAYMONSTERID_OFFSET))(this);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_RAIDID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_WorldLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_WORLDLV_OFFSET))(this);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MAXHP_OFFSET))(this);
		}
	};
}
