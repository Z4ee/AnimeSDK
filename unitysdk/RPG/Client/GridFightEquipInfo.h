#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_38.h"
#include "unitysdk/Enum_3_DB663931210BBC27_35.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_626;
class Class_0_16E4307DCC419505_638;
class Class_1_8ACB997D6F688C1F;
class Class_1_A291A0C2D65983FA;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CANDRESSEQUIPTOROLE_OFFSET UNITYSDK_OFFSET(0x9802330)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CONTAINSEQUIPID_OFFSET UNITYSDK_OFFSET(0x9800B90)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9800630)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9800920)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x97FE3E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0x9802B90)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYITEMID_OFFSET UNITYSDK_OFFSET(0x9800AB0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYPRED_OFFSET UNITYSDK_OFFSET(0x97FF0C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0x97FE8E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETROLEEQUIPS_OFFSET UNITYSDK_OFFSET(0x9800750)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_IDLEEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x9801E20)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET__CURGAMESESSION_OFFSET UNITYSDK_OFFSET(0x9803C40)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9800470)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONCRAFTEQUIPRSP_OFFSET UNITYSDK_OFFSET(0x9802B30)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONDRESSEQUIPRSP_OFFSET UNITYSDK_OFFSET(0x98025D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x98004B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x9801690)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x9800E60)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9800DD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYCRAFTEQUIP_OFFSET UNITYSDK_OFFSET(0x9802630)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYDRESSEQUIPTOROLE_OFFSET UNITYSDK_OFFSET(0x9801FA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0x9801470)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x98006D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9800240)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0x9800970)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETSERVERDATAUIDS_OFFSET UNITYSDK_OFFSET(0x9801AC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x9801A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo_TypeDefinitionIndex = 52749;

	class GridFightEquipInfo : public ::System::Object
	{
	public:
		::Class_1_8ACB997D6F688C1F* _Comparer; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendCandidateRoleIDs; // 0x18
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _CraftEquipRspPromise; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _EquipListHelper; // 0x28
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>* EquipItemDataDict; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _DressEquipRspPromise; // 0x38
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_638*>* _EquipDressConstraits; // 0x40
		::Class_0_16E4307DCC419505_626* _Collector; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetRoleEquips(::System::UInt32 roleUniqueID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETROLEEQUIPS_OFFSET))(this, roleUniqueID);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUniqueID(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPBYUNIQUEID_OFFSET))(this, uniqueID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByItemID(::System::UInt32 itemID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYITEMID_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByPred(::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>* pred)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYPRED_OFFSET))(this, pred);
		}

		::System::Int32 GetEquipsCountByItemID(::System::UInt32 itemID, ::System::Boolean notEquipped)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCOUNTBYITEMID_OFFSET))(this, itemID, notEquipped);
		}

		::System::Int32 GetEquipCount(::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>* pred)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPCOUNT_OFFSET))(this, pred);
		}

		::System::Boolean ContainsEquipID(::System::UInt32 itemID, ::System::Boolean notEquipped)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CONTAINSEQUIPID_OFFSET))(this, itemID, notEquipped);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNC_OFFSET))(this, equipList);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCUPDATE_OFFSET))(this, equipList);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>* equipList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCREMOVE_OFFSET))(this, equipList);
		}

		::RPG::Client::GridFightEquipItemData* _GetItem(::System::UInt32 uniqueID)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETITEM_OFFSET))(this, uniqueID);
		}

		::System::Void _AddItem(::RPG::Client::GridFightEquipItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__ADDITEM_OFFSET))(this, item);
		}

		::System::Void _RemoveItem(::System::UInt32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__REMOVEITEM_OFFSET))(this, uniqueID);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__CLEARITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataUIDs(::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>* equipList)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_A291A0C2D65983FA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETSERVERDATAUIDS_OFFSET))(this, equipList);
		}

		::System::Int32 get_IdleEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_IDLEEQUIPCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryDressEquipToRole(::System::UInt32 equipUniqueID, ::System::UInt32 roleUniqueID, ::Enum_3_0A3761FE34514D6C_38 source)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_38))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYDRESSEQUIPTOROLE_OFFSET))(this, equipUniqueID, roleUniqueID, source);
		}

		::System::Boolean CanDressEquipToRole(::System::UInt32 roleUID, ::System::UInt32 equipUID, ::System::String*& reason, ::System::Boolean outputReason)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CANDRESSEQUIPTOROLE_OFFSET))(this, roleUID, equipUID, reason, outputReason);
		}

		::System::Void OnDressEquipRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONDRESSEQUIPRSP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryCraftEquip(::System::Collections::Generic::List_1<::System::UInt32>* costEquipUniqueIDs, ::System::UInt32 targetEquipItemID, ::System::UInt32 roleUniqueID, ::Enum_3_DB663931210BBC27_35 source)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_35))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYCRAFTEQUIP_OFFSET))(this, costEquipUniqueIDs, targetEquipItemID, roleUniqueID, source);
		}

		::System::Void OnCraftEquipRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONCRAFTEQUIPRSP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEquipRecommendRoleIDList(::System::UInt32 equipID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPRECOMMENDROLEIDLIST_OFFSET))(this, equipID);
		}

		::RPG::Client::GridFightGameSession* get__CurGameSession()
		{
			return ((::RPG::Client::GridFightGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET__CURGAMESESSION_OFFSET))(this);
		}
	};
}
