#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_8.h"
#include "unitysdk/RPG/Client/ClientPunkLordAttackerStatus.h"
#include "unitysdk/RPG/Client/ClientPunkLordShareType.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0AADEC629A5E48C7_2;
class Class_1_21DCD4640D389503_5;
class Class_1_8654F1DF226F6DE3_2;
class Class_1_99711449DFAB5464;
class Class_1_C222160220C38EC4;
class Class_1_D40936EF3BF54118_5;
class Class_1_EBB10EC01CCC4716;
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

#define RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xC66BA20)
#define RPG_CLIENT_PUNKLORDDATA_COLLECTUIDS_OFFSET UNITYSDK_OFFSET(0xC66B7C0)
#define RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET UNITYSDK_OFFSET(0xC66B110)
#define RPG_CLIENT_PUNKLORDDATA_GETHONORLIST_OFFSET UNITYSDK_OFFSET(0xC66B770)
#define RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET UNITYSDK_OFFSET(0xC66AF80)
#define RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET UNITYSDK_OFFSET(0xC66ADF0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0xC66BCD0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0xC66BC30)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0xC66BCF0)
#define RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xC66BD10)
#define RPG_CLIENT_PUNKLORDDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xC66BE90)
#define RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET UNITYSDK_OFFSET(0xC66BC70)
#define RPG_CLIENT_PUNKLORDDATA_GET_DISPLAYMONSTERID_OFFSET UNITYSDK_OFFSET(0xC66BEE0)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0xC66BCB0)
#define RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC66BC90)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0xC66BBD0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0xC66BBB0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET UNITYSDK_OFFSET(0xC66BBF0)
#define RPG_CLIENT_PUNKLORDDATA_GET_ISSUMMONEDBYSELF_OFFSET UNITYSDK_OFFSET(0xC66BDD0)
#define RPG_CLIENT_PUNKLORDDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC66BEF0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xC66BF10)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0xC66BD30)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0xC66BB70)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERROW_OFFSET UNITYSDK_OFFSET(0xC66BEC0)
#define RPG_CLIENT_PUNKLORDDATA_GET_MONSTERTEMPLATEROW_OFFSET UNITYSDK_OFFSET(0xC66BED0)
#define RPG_CLIENT_PUNKLORDDATA_GET_PUNKLORDROW_OFFSET UNITYSDK_OFFSET(0xC66BEA0)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDCONFIGROW_OFFSET UNITYSDK_OFFSET(0xC66BEB0)
#define RPG_CLIENT_PUNKLORDDATA_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0xC66A980)
#define RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0xC66BC50)
#define RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xC66BB40)
#define RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0xC66BC10)
#define RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xC66BB90)
#define RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0xC66BB50)
#define RPG_CLIENT_PUNKLORDDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0xC66BD50)
#define RPG_CLIENT_PUNKLORDDATA_GET_WORLDLV_OFFSET UNITYSDK_OFFSET(0xC66A9A0)
#define RPG_CLIENT_PUNKLORDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC66B730)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET UNITYSDK_OFFSET(0xC66BCE0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET UNITYSDK_OFFSET(0xC66BC40)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET UNITYSDK_OFFSET(0xC66BD00)
#define RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET UNITYSDK_OFFSET(0xC66BD20)
#define RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET UNITYSDK_OFFSET(0xC66BC80)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET UNITYSDK_OFFSET(0xC66BCC0)
#define RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC66BCA0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET UNITYSDK_OFFSET(0xC66BBE0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET UNITYSDK_OFFSET(0xC66BBC0)
#define RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET UNITYSDK_OFFSET(0xC66BC00)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET UNITYSDK_OFFSET(0xC66BD40)
#define RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET UNITYSDK_OFFSET(0xC66BB80)
#define RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET UNITYSDK_OFFSET(0xC66BC60)
#define RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET UNITYSDK_OFFSET(0xC66BC20)
#define RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xC66BBA0)
#define RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET UNITYSDK_OFFSET(0xC66BB60)
#define RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET UNITYSDK_OFFSET(0xC66ABD0)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET UNITYSDK_OFFSET(0xC66AA80)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET UNITYSDK_OFFSET(0xC66AC60)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET UNITYSDK_OFFSET(0xC66AB70)
#define RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET UNITYSDK_OFFSET(0xC66AD00)
#define RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET UNITYSDK_OFFSET(0xC66ADA0)
#define RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC66A9C0)
#define RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC66A800)

namespace RPG::Client
{
	inline static constexpr unsigned int PunkLordData_TypeDefinitionIndex = 62396;

	class PunkLordData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityPunkLordConfigRow* _PunkLordRow_k__BackingField; // 0x10
		::Class_1_EBB10EC01CCC4716* _MonsterBasicInfo_k__BackingField; // 0x18
		::RPG::Client::PunkLordScore* Score; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AttackersList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>* _BattleRecordList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* _BattleReplayList_k__BackingField; // 0x38
		::RPG::GameCore::RaidConfigRow* _RaidConfigRow_k__BackingField; // 0x40
		::RPG::GameCore::MonsterTemplateRow* _MonsterTemplateRow_k__BackingField; // 0x48
		::RPG::GameCore::MonsterRow* _MonsterRow_k__BackingField; // 0x50
		::System::UInt32 _ConfigID_k__BackingField; // 0x58
		::System::UInt32 _AttackNum_k__BackingField; // 0x5C
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _MonsterKey_k__BackingField; // 0x60
		::System::Boolean _IsAttacking_k__BackingField; // 0x68
		::System::Boolean _IsGenBySystem_k__BackingField; // 0x69
		::System::Boolean _IsShared_k__BackingField; // 0x6A
		::System::Boolean IsTakenScore; // 0x6B
		::System::UInt32 _DisplayMonsterID_k__BackingField; // 0x6C
		::System::UInt32 _ExpireTimeStamp_k__BackingField; // 0x70
		::RPG::Client::DateTimePro _ExpireDateTime_k__BackingField; // 0x78
		::System::UInt32 _SelfAttackNum_k__BackingField; // 0x80
		::RPG::Client::ClientPunkLordShareType _ShareType_k__BackingField; // 0x84
		::RPG::Client::ClientPunkLordAttackerStatus _Status_k__BackingField; // 0x88
		::System::UInt32 _SummonPlayerUID_k__BackingField; // 0x8C
		::System::UInt32 _CurHP_k__BackingField; // 0x90
		::System::UInt32 _ServerID_k__BackingField; // 0x94

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Sync(::Class_1_0AADEC629A5E48C7_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0AADEC629A5E48C7_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncBasicInfo(::Class_1_EBB10EC01CCC4716* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBASICINFO_OFFSET))(this, a1);
		}

		::System::Void SyncAttackerInfo(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCATTACKERINFO_OFFSET))(this, a1);
		}

		::System::Void SyncBattleRecord(::Class_1_D40936EF3BF54118_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_OFFSET))(this, a1);
		}

		::System::Void SyncBattleRecord_1(::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_5*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_5*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLERECORD_1_OFFSET))(this, a1);
		}

		::System::Void SyncBattleReplay(::System::Collections::Generic::IEnumerable_1<::Class_1_8654F1DF226F6DE3_2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_8654F1DF226F6DE3_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCBATTLEREPLAY_OFFSET))(this, a1);
		}

		::System::Void SyncShareState(::Enum_3_0A3761FE34514D6C_8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SYNCSHARESTATE_OFFSET))(this, a1);
		}

		::Class_1_99711449DFAB5464* GetReplayByKey(::System::String* a1)
		{
			return ((::Class_1_99711449DFAB5464*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETREPLAYBYKEY_OFFSET))(this, a1);
		}

		::Class_1_C222160220C38EC4* GetRecordByKey(::System::String* a1)
		{
			return ((::Class_1_C222160220C38EC4*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GETRECORDBYKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FillDataForSDKRecord(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_FILLDATAFORSDKRECORD_OFFSET))(this, a1, a2);
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

		::System::Void AppendBattleRecord(::Class_1_C222160220C38EC4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C222160220C38EC4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_APPENDBATTLERECORD_OFFSET))(this, a1);
		}

		::System::UInt32 get_ServerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SERVERID_OFFSET))(this);
		}

		::System::UInt32 get_SummonPlayerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SUMMONPLAYERUID_OFFSET))(this);
		}

		::System::Void set_SummonPlayerUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SUMMONPLAYERUID_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> get_MonsterKey()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERKEY_OFFSET))(this);
		}

		::System::Void set_MonsterKey(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERKEY_OFFSET))(this, a1);
		}

		::RPG::Client::ClientPunkLordAttackerStatus get_Status()
		{
			return ((::RPG::Client::ClientPunkLordAttackerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::ClientPunkLordAttackerStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientPunkLordAttackerStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGenBySystem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISGENBYSYSTEM_OFFSET))(this);
		}

		::System::Void set_IsGenBySystem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISGENBYSYSTEM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttacking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISATTACKING_OFFSET))(this);
		}

		::System::Void set_IsAttacking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISATTACKING_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ISSHARED_OFFSET))(this);
		}

		::System::Void set_IsShared(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ISSHARED_OFFSET))(this, a1);
		}

		::RPG::Client::ClientPunkLordShareType get_ShareType()
		{
			return ((::RPG::Client::ClientPunkLordShareType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SHARETYPE_OFFSET))(this);
		}

		::System::Void set_ShareType(::RPG::Client::ClientPunkLordShareType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClientPunkLordShareType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SHARETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ATTACKNUM_OFFSET))(this);
		}

		::System::Void set_AttackNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ATTACKNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelfAttackNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_SELFATTACKNUM_OFFSET))(this);
		}

		::System::Void set_SelfAttackNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_SELFATTACKNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_CURHP_OFFSET))(this);
		}

		::System::Void set_CurHP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_CURHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExpireTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_EXPIRETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_ExpireTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_EXPIRETIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_ExpireDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_EXPIREDATETIME_OFFSET))(this);
		}

		::System::Void set_ExpireDateTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_EXPIREDATETIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AttackersList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_ATTACKERSLIST_OFFSET))(this);
		}

		::System::Void set_AttackersList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_ATTACKERSLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>* get_BattleRecordList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_BATTLERECORDLIST_OFFSET))(this);
		}

		::System::Void set_BattleRecordList(::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C222160220C38EC4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_BATTLERECORDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* get_BattleReplayList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_BATTLEREPLAYLIST_OFFSET))(this);
		}

		::System::Void set_BattleReplayList(::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_BATTLEREPLAYLIST_OFFSET))(this, a1);
		}

		::Class_1_EBB10EC01CCC4716* get_MonsterBasicInfo()
		{
			return ((::Class_1_EBB10EC01CCC4716*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_GET_MONSTERBASICINFO_OFFSET))(this);
		}

		::System::Void set_MonsterBasicInfo(::Class_1_EBB10EC01CCC4716* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUNKLORDDATA_SET_MONSTERBASICINFO_OFFSET))(this, a1);
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
