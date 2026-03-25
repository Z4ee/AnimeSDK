#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_8.h"
#include "unitysdk/RPG/Client/ClientPunkLordAttackerStatus.h"
#include "unitysdk/RPG/Client/ClientPunkLordShareType.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_95C0420F56A6EE67_2;
class Class_1_99711449DFAB5464;
class Class_1_B8B7AE2DAD90AA4E;
class Class_1_CD9875F83BA64B10;
class Class_1_E7C4009BCC22497A;
class Class_1_EBB10EC01CCC4716_2;
class Class_1_F3CA30716D4FAF92_1;
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

#define RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xA238270)
#define RPG_CLIENT_PUNKLORDDATA_COLLECTUIDS_OFFSET UNITYSDK_OFFSET(0xA237FA0)
#define RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET UNITYSDK_OFFSET(0xA2378F0)
#define RPG_CLIENT_PUNKLORDDATA_GETHONORLIST_OFFSET UNITYSDK_OFFSET(0xA237F50)
#define RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET UNITYSDK_OFFSET(0xA237780)
#define RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET UNITYSDK_OFFSET(0xA237610)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0xA2384C0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0xA238420)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0xA2384E0)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xA238500)
#define RPG_CLIENT_PUNKLORDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA238680)
#define RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET UNITYSDK_OFFSET(0xA238460)
#define RPG_CLIENT_PUNKLORDDATA_GET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xA2386D0)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0xA2384A0)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA238480)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0xA2383C0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0xA2383A0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET UNITYSDK_OFFSET(0xA2383E0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSUMMONEDBYSELF_OFFSET UNITYSDK_OFFSET(0xA2385C0)
#define RPG_CLIENT_PUNKLORDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA2386E0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA238700)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0xA238520)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0xA238360)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0xA2386B0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERTEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xA2386C0)
#define RPG_CLIENT_PUNKLORDDATA_GET_PUNKLORDROW_OFFSET UNITYSDK_OFFSET(0xA238690)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDCONFIGROW_OFFSET UNITYSDK_OFFSET(0xA2386A0)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xA2371B0)
#define RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0xA238440)
#define RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xA238330)
#define RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0xA238400)
#define RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA238380)
#define RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0xA238340)
#define RPG_CLIENT_PUNKLORDDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xA238540)
#define RPG_CLIENT_PUNKLORDDATA_GET_WORLDLV_OFFSET UNITYSDK_OFFSET(0xA2371D0)
#define RPG_CLIENT_PUNKLORDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA237F10)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0xA2384D0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0xA238430)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0xA2384F0)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xA238510)
#define RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET UNITYSDK_OFFSET(0xA238470)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0xA2384B0)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA238490)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0xA2383D0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0xA2383B0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET UNITYSDK_OFFSET(0xA2383F0)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0xA238530)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0xA238370)
#define RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0xA238450)
#define RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0xA238410)
#define RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA238390)
#define RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0xA238350)
#define RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET UNITYSDK_OFFSET(0xA237420)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET UNITYSDK_OFFSET(0xA237270)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET UNITYSDK_OFFSET(0xA2374C0)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xA237370)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET UNITYSDK_OFFSET(0xA237540)
#define RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET UNITYSDK_OFFSET(0xA2375C0)
#define RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA2371F0)
#define RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA237020)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordData_TypeDefinitionIndex = 54300;

	class PunkLordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* _BattleReplayList_k__BackingField; // 0x10
		::RPG::GameCore::MonsterRow* _MonsterRow_k__BackingField; // 0x18
		::RPG::Client::PunkLordScore* Score; // 0x20
		::RPG::GameCore::MonsterTemplateRow* _MonsterTemplateRow_k__BackingField; // 0x28
		::RPG::GameCore::ActivityPunkLordConfigRow* _PunkLordRow_k__BackingField; // 0x30
		::RPG::GameCore::RaidConfigRow* _RaidConfigRow_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::Class_1_CD9875F83BA64B10*>* _BattleRecordList_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _AttackersList_k__BackingField; // 0x48
		::Class_1_EBB10EC01CCC4716_2* _MonsterBasicInfo_k__BackingField; // 0x50
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _MonsterKey_k__BackingField; // 0x58
		::System::UInt32 _ServerID_k__BackingField; // 0x60
		::System::UInt32 _DisplayMonsterID_k__BackingField; // 0x64
		::System::UInt32 _SelfAttackNum_k__BackingField; // 0x68
		::System::UInt32 _ExpireTimeStamp_k__BackingField; // 0x6C
		::RPG::Client::ClientPunkLordAttackerStatus _Status_k__BackingField; // 0x70
		::System::UInt32 _AttackNum_k__BackingField; // 0x74
		::RPG::Client::ClientPunkLordShareType _ShareType_k__BackingField; // 0x78
		::RPG::Client::DateTimePro _ExpireDateTime_k__BackingField; // 0x80
		::System::UInt32 _CurHP_k__BackingField; // 0x88
		::System::Boolean _IsShared_k__BackingField; // 0x8C
		::System::Boolean _IsAttacking_k__BackingField; // 0x8D
		::System::Boolean IsTakenScore; // 0x8E
		::System::Boolean _IsGenBySystem_k__BackingField; // 0x8F
		::System::UInt32 _ConfigID_k__BackingField; // 0x90
		::System::UInt32 _SummonPlayerUID_k__BackingField; // 0x94

		::System::Void _ctor(::System::UInt32 serverID, ::System::UInt32 summonUID, ::System::UInt32 configID, ::System::UInt32 worldLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET))(this, serverID, summonUID, configID, worldLevel);
		}

		::System::Void Sync(::Class_1_95C0420F56A6EE67_2* plMonsterInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET))(this, plMonsterInfo);
		}

		::System::Void SyncBasicInfo(::Class_1_EBB10EC01CCC4716_2* basicInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET))(this, basicInfo);
		}

		::System::Void SyncAttackerInfo(::System::Collections::Generic::List_1<::System::UInt32>* attackersList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET))(this, attackersList);
		}

		::System::Void SyncBattleRecord(::Class_1_E7C4009BCC22497A* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncBattleRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_1*>* battleRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET))(this, battleRecordList);
		}

		::System::Void SyncBattleReplay(::System::Collections::Generic::IEnumerable_1<::Class_1_B8B7AE2DAD90AA4E*>* battleReplayList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_B8B7AE2DAD90AA4E*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET))(this, battleReplayList);
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

		::Class_1_EBB10EC01CCC4716_2* get_MonsterBasicInfo()
		{
			return ((::Class_1_EBB10EC01CCC4716_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET))(this);
		}

		::System::Void set_MonsterBasicInfo(::Class_1_EBB10EC01CCC4716_2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET))(this, value);
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
