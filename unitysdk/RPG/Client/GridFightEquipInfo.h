#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_39.h"
#include "unitysdk/Enum_3_DB663931210BBC27_39.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_854;
class Class_0_16E4307DCC419505_870;
class Class_1_1C706860DB902897_1;
class Class_1_8ACB997D6F688C1F;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameModifier; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightModifierInfo; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CANDRESSEQUIPTOROLE_OFFSET UNITYSDK_OFFSET(0x1C97F4B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_CONTAINSEQUIPID_OFFSET UNITYSDK_OFFSET(0x1C97D1B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C97CC30)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPBYUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C952EA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C97A320)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPRECOMMENDROLEIDLIST_OFFSET UNITYSDK_OFFSET(0x1C97FD40)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYITEMID_OFFSET UNITYSDK_OFFSET(0x1C97CFE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYPRED_OFFSET UNITYSDK_OFFSET(0x1C97AF90)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCANDRESSTOROLEBYITEMID_OFFSET UNITYSDK_OFFSET(0x1C97D0C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0x1C97A7E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETROLEEQUIPS_OFFSET UNITYSDK_OFFSET(0x1C97CD50)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x1C97EED0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_IDLEEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C97EF60)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET__CURGAMESESSION_OFFSET UNITYSDK_OFFSET(0x1C980FD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_1_OFFSET UNITYSDK_OFFSET(0x1C97C770)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C97C730)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONCRAFTEQUIPRSP_OFFSET UNITYSDK_OFFSET(0x1C97FCE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONDRESSEQUIPRSP_OFFSET UNITYSDK_OFFSET(0x1C97F800)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1C97C910)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x1C97E0F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1C97D530)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1C97D4A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYCRAFTEQUIP_OFFSET UNITYSDK_OFFSET(0x1C97F860)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYDRESSEQUIPTOROLE_OFFSET UNITYSDK_OFFSET(0x1C97F0D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C97DD20)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1C97CCD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97C2E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0x1C97CEF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETSERVERDATAUIDS_OFFSET UNITYSDK_OFFSET(0x1C97E9C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__ONFINANCINGMODIFIERCHANGE_OFFSET UNITYSDK_OFFSET(0x1C97E6D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1C97E640)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipInfo_TypeDefinitionIndex = 65021;

	class GridFightEquipInfo : public ::System::Object
	{
	public:
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>* EquipItemDataDict; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendCandidateRoleIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _EquipListHelper; // 0x20
		::Class_1_8ACB997D6F688C1F* _Comparer; // 0x28
		::Class_0_16E4307DCC419505_854* _Collector; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _CraftEquipRspPromise; // 0x38
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_870*>* _EquipDressConstraits; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _DressEquipRspPromise; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_OFFSET))(this);
		}

		::System::Void Init_1(::RPG::Client::GridFightModifierInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_INIT_1_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_854* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_854*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetRoleEquips(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETROLEEQUIPS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUniqueID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPBYUNIQUEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByItemID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsCanDressToRoleByItemID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCANDRESSTOROLEBYITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByPred(::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSBYPRED_OFFSET))(this, a1);
		}

		::System::Int32 GetEquipsCountByItemID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPSCOUNTBYITEMID_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetEquipCount(::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean ContainsEquipID(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CONTAINSEQUIPID_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__CLEARITEMS_OFFSET))(this);
		}

		::System::Void _OnFinancingModifierChange(::RPG::Client::GridFightGameModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__ONFINANCINGMODIFIERCHANGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataUIDs(::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_1C706860DB902897_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO__GETSERVERDATAUIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Int32 get_IdleEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET_IDLEEQUIPCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryDressEquipToRole(::System::UInt32 a1, ::System::UInt32 a2, ::Enum_3_0A3761FE34514D6C_39 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_39))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYDRESSEQUIPTOROLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanDressEquipToRole(::System::UInt32 a1, ::System::UInt32 a2, ::System::String*& a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_CANDRESSEQUIPTOROLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDressEquipRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONDRESSEQUIPRSP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* TryCraftEquip(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Enum_3_DB663931210BBC27_39 a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Enum_3_DB663931210BBC27_39))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_TRYCRAFTEQUIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnCraftEquipRsp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_ONCRAFTEQUIPRSP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEquipRecommendRoleIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GETEQUIPRECOMMENDROLEIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameSession* get__CurGameSession()
		{
			return ((::RPG::Client::GridFightGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO_GET__CURGAMESESSION_OFFSET))(this);
		}
	};
}
