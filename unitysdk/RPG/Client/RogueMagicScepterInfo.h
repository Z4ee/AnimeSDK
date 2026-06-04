#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicMountType.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_888;
class Class_1_F11CBE4D3C7DF06D_1;
class Class_1_F2347778AA2A2B50;
class Class_1_FD33BD99AA9127F3_1;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::GameCore { class BattleRogueMagicData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xC7B0A20)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B0EF0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CHECKISMAGICUNITCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xC7B3160)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARALLUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xC7A70B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xC7B3260)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COMPAREUNITPOWEREQUIPPEDONSCEPTER_OFFSET UNITYSDK_OFFSET(0xC7B2BB0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COUNTALLUNITITEMS_OFFSET UNITYSDK_OFFSET(0xC7B2340)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CREATEFROMBATTLE_OFFSET UNITYSDK_OFFSET(0xC7B1420)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC79F4A0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_FINDASSOCIATEDMAGICSCEPTERS_OFFSET UNITYSDK_OFFSET(0xC7AFB80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLSCEPTERITEMS_OFFSET UNITYSDK_OFFSET(0xC7B2030)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNEQUIPPEDUNITITEMS_OFFSET UNITYSDK_OFFSET(0xC7B20B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITITEMS_OFFSET UNITYSDK_OFFSET(0xC7B2070)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITSHOWNEWMARKLIST_OFFSET UNITYSDK_OFFSET(0xC7B3330)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETATTACHUNITBASICPOWER_OFFSET UNITYSDK_OFFSET(0xC7B2740)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERBASICPOWER_OFFSET UNITYSDK_OFFSET(0xC7AECC0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERTOTALPOWER_OFFSET UNITYSDK_OFFSET(0xC7AEA60)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNTINFO_OFFSET UNITYSDK_OFFSET(0xC7AFE90)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNT_OFFSET UNITYSDK_OFFSET(0xC7AF9E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETPASSIVEUNITPERCENT_OFFSET UNITYSDK_OFFSET(0xC7B29B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERCOUNTBYFUNCTYPE_OFFSET UNITYSDK_OFFSET(0xC7B02D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERITEM_OFFSET UNITYSDK_OFFSET(0xC7B0D40)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPEFUNC_OFFSET UNITYSDK_OFFSET(0xC7B2F10)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPESTYLE_OFFSET UNITYSDK_OFFSET(0xC7B2CC0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEMLISTBYMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B1D60)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEM_OFFSET UNITYSDK_OFFSET(0xC7AE1C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_ISAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B0430)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xC7B33A0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_UNITCOMPOSENEEDNUM_OFFSET UNITYSDK_OFFSET(0xC7AF850)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_HASANYMAGICUNITCANCOMPOSE_OFFSET UNITYSDK_OFFSET(0xC7AF6B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISMAGICUNITCANUPGRADEWITHONEMORE_OFFSET UNITYSDK_OFFSET(0xC7AFA80)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISRECOMPRESERVEMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B0080)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITEQUIPPED_OFFSET UNITYSDK_OFFSET(0xC7B22E0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xC7B32D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_LEVELUPMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xC7B0E40)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xC7B0CB0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B11B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICSPECTOR_OFFSET UNITYSDK_OFFSET(0xC7B0B00)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B0FF0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SCEPTERHASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xC7B0000)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SETUNITSHOWNEWMARK_OFFSET UNITYSDK_OFFSET(0xC7B31F0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_ISAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7B0440)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0xC7B33B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0xC79FC00)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCAUTODRESSINMAGICUNIT_OFFSET UNITYSDK_OFFSET(0xC7AC3B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCRECORD_OFFSET UNITYSDK_OFFSET(0xC79E3D0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO_TRYGETBELONGSCEPTERDATAITEMBYUNITUID_OFFSET UNITYSDK_OFFSET(0xC7B1F30)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__ADDMAGICUNITINBUCKET_OFFSET UNITYSDK_OFFSET(0xC7B06B0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7B33C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC79E2C0)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__GETALLSCEPTERITEMSASPOWERINTERFACEPOOLLIST_OFFSET UNITYSDK_OFFSET(0xC7B2390)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__HASNEXTLEVEL_OFFSET UNITYSDK_OFFSET(0xC7AF960)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REFRESHALLBUCKETS_OFFSET UNITYSDK_OFFSET(0xC7B0450)
#define RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REMOVEMAGICUNITINBUCKET_OFFSET UNITYSDK_OFFSET(0xC7B07C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicScepterInfo_TypeDefinitionIndex = 63064;

	class RogueMagicScepterInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAX_UNIT_LEVEL()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RogueMagicScepterInfo_TypeDefinitionIndex)->GetStaticField(0xA170);
		}
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* _ScepterItems; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _UnitItems; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _MagicUnitBuckets; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ShowNewMarkUnitUIDSet; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _ComposeConsumeUnits; // 0x30
		::System::Boolean _IsAutoDressInMagicUnit_k__BackingField; // 0x38
		::RPG::GameCore::RogueMagicStyleType _StyleType_k__BackingField; // 0x3C
		::System::UInt32 _UnitComposeNeedNum; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__CCTOR_OFFSET))();
		}

		::System::Boolean HasAnyMagicUnitCanCompose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_HASANYMAGICUNITCANCOMPOSE_OFFSET))(this);
		}

		::System::UInt32 GetMagicUnitCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsMagicUnitCanUpgradeWithOneMore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISMAGICUNITCANUPGRADEWITHONEMORE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* FindAssociatedMagicScepters(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_FINDASSOCIATEDMAGICSCEPTERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GetMagicUnitCountInfo(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICUNITCOUNTINFO_OFFSET))(this, a1);
		}

		::System::Boolean ScepterHasNextLevel(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SCEPTERHASNEXTLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsRecomPreserveMagicUnit(::RPG::Client::RogueMagicUnitDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISRECOMPRESERVEMAGICUNIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetScepterCountByFuncType(::RPG::GameCore::RogueMagicScepterFuncType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERCOUNTBYFUNCTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAutoDressInMagicUnit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_ISAUTODRESSINMAGICUNIT_OFFSET))(this);
		}

		::System::Void set_IsAutoDressInMagicUnit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_ISAUTODRESSINMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllBuckets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REFRESHALLBUCKETS_OFFSET))(this);
		}

		::System::Void _AddMagicUnitInBucket(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__ADDMAGICUNITINBUCKET_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveMagicUnitInBucket(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__REMOVEMAGICUNITINBUCKET_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasNextLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__HASNEXTLEVEL_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_FD33BD99AA9127F3_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FD33BD99AA9127F3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncRecord(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F11CBE4D3C7DF06D_1*>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F2347778AA2A2B50*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F11CBE4D3C7DF06D_1*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F2347778AA2A2B50*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCRECORD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncAutoDressInMagicUnit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SYNCAUTODRESSINMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void AddMagicSpector(::Class_1_F2347778AA2A2B50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F2347778AA2A2B50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void RemoveMagicSpector(::Class_1_F2347778AA2A2B50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F2347778AA2A2B50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void RefreshMagicSpector(::Class_1_F2347778AA2A2B50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F2347778AA2A2B50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void LevelUpMagicSpector(::Class_1_F2347778AA2A2B50* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F2347778AA2A2B50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_LEVELUPMAGICSPECTOR_OFFSET))(this, a1);
		}

		::System::Void AddMagicUnit(::Class_1_F11CBE4D3C7DF06D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ADDMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void RemoveMagicUnit(::Class_1_F11CBE4D3C7DF06D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REMOVEMAGICUNIT_OFFSET))(this, a1);
		}

		::System::Void RefreshMagicUnit(::Class_1_F11CBE4D3C7DF06D_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11CBE4D3C7DF06D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_REFRESHMAGICUNIT_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueMagicScepterInfo* CreateFromBattle(::RPG::GameCore::BattleRogueMagicData* a1)
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::RPG::GameCore::BattleRogueMagicData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CREATEFROMBATTLE_OFFSET))(a1);
		}

		::RPG::Client::RogueMagicScepterDataItem* GetScepterItem(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETSCEPTERITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicUnitDataItem* GetUnitDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMagicUnitDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnitDataItemListByMagicUnit(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNITDATAITEMLISTBYMAGICUNIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueMagicScepterDataItem* TryGetBelongScepterDataItemByUnitUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_TRYGETBELONGSCEPTERDATAITEMBYUNITUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* GetAllScepterItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLSCEPTERITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetAllUnitItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetAllUnequippedUnitItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNEQUIPPEDUNITITEMS_OFFSET))(this);
		}

		::System::UInt32 CountAllUnitItems()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COUNTALLUNITITEMS_OFFSET))(this);
		}

		::System::Boolean IsUnitEquipped(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITEQUIPPED_OFFSET))(this, a1);
		}

		::System::UInt32 GetMagicScpterTotalPower(::Class_0_16E4307DCC419505_888* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERTOTALPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 GetMagicScpterBasicPower(::Class_0_16E4307DCC419505_888* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETMAGICSCPTERBASICPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 GetAttachUnitBasicPower(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_888* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETATTACHUNITBASICPOWER_OFFSET))(this, a1, a2);
		}

		::System::Single GetPassiveUnitPercent(::RPG::Client::RogueMagicUnitDataItem* a1, ::Class_0_16E4307DCC419505_888* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::Class_0_16E4307DCC419505_888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETPASSIVEUNITPERCENT_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareUnitPowerEquippedOnScepter(::RPG::Client::RogueMagicUnitDataItem* a1, ::System::UInt32 a2, ::RPG::Client::RogueMagicScepterDataItem* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::System::UInt32, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_COMPAREUNITPOWEREQUIPPEDONSCEPTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnequippedRecomMagicUnitsByMountTypeStyle(::RPG::GameCore::RogueMagicMountType a1, ::RPG::GameCore::RogueMagicStyleType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPESTYLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* GetUnequippedRecomMagicUnitsByMountTypeFunc(::RPG::GameCore::RogueMagicMountType a1, ::RPG::GameCore::RogueMagicScepterFuncType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicMountType, ::RPG::GameCore::RogueMagicScepterFuncType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETUNEQUIPPEDRECOMMAGICUNITSBYMOUNTTYPEFUNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckIsMagicUnitCanCompose(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CHECKISMAGICUNITCANCOMPOSE_OFFSET))(this, a1, a2);
		}

		::System::Void SetUnitShowNewMark(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SETUNITSHOWNEWMARK_OFFSET))(this, a1);
		}

		::System::Void ClearUnitShowNewMark(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARUNITSHOWNEWMARK_OFFSET))(this, a1);
		}

		::System::Void ClearAllUnitShowNewMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_CLEARALLUNITSHOWNEWMARK_OFFSET))(this);
		}

		::System::Boolean IsUnitShowNewMark(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_ISUNITSHOWNEWMARK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnitShowNewMarkList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GETALLUNITSHOWNEWMARKLIST_OFFSET))(this);
		}

		::RPG::PoolList_1<::Class_0_16E4307DCC419505_888*>* _GetAllScepterItemsAsPowerInterfacePoolList(::Class_0_16E4307DCC419505_888* a1)
		{
			return ((::RPG::PoolList_1<::Class_0_16E4307DCC419505_888*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_888*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO__GETALLSCEPTERITEMSASPOWERINTERFACEPOOLLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnitComposeNeedNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_UNITCOMPOSENEEDNUM_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_GET_STYLETYPE_OFFSET))(this);
		}

		::System::Void set_StyleType(::RPG::GameCore::RogueMagicStyleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicStyleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSCEPTERINFO_SET_STYLETYPE_OFFSET))(this, a1);
		}
	};
}
