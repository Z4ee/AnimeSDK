#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
class Class_0_16E4307DCC419505_732;
class Class_1_D17272E82AE804C2_361;
class Class_1_D1E0AD3915BCCF29_43;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xA466C80)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA464CD0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET UNITYSDK_OFFSET(0xA464DF0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET UNITYSDK_OFFSET(0xA466BC0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xA464B10)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA464B50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xA4660A0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0xA465990)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xA464F30)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA464EA0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xA467090)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0xA465780)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET UNITYSDK_OFFSET(0xA466D20)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0xA464D70)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4643F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0xA465370)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_1_OFFSET UNITYSDK_OFFSET(0xA466100)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_OFFSET UNITYSDK_OFFSET(0xA466860)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xA4667D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET UNITYSDK_OFFSET(0xA466460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableInfo_TypeDefinitionIndex = 59750;

	class GridFightConsumableInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_732*>*>* _ConstraitsToRoleLUT; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_732*>*>* _ConstraitsToEquipLUT; // 0x18
		::Class_0_16E4307DCC419505_717* _gridFightDataChangeCollector; // 0x20
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightConsumableItemData*>* ConsumableItemDataDict; // 0x28
		::System::Action_2<::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*>* OnBeforeUseConsumable; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetItem(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET))(this, id);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_361*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_361*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET))(this, consumableItemList);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_361*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_361*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET))(this, consumableItemList);
		}

		::System::Void SyncUpdate_1(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_43*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_43*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET))(this, consumableItemList);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_43*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_43*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET))(this, consumableItemList);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* _GetItem(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEM_OFFSET))(this, itemID);
		}

		::System::Void _RemoveMultiPleItem(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* itemIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET))(this, itemIDs);
		}

		::System::Void _RemoveItem(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET))(this, itemID);
		}

		::System::Void _AddItem(::RPG::Client::GridFightConsumableItemData* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET))(this, item);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataItemIDs(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_361*>* consumableItemList)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_361*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_OFFSET))(this, consumableItemList);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataItemIDs_1(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_43*>* consumableItemList)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_43*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_1_OFFSET))(this, consumableItemList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* get_ConsumableItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET))(this);
		}

		::System::Boolean CanUseConsumableItem(::RPG::Client::GridFightConsumableItemData* itemData, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* param, ::System::String*& reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET))(this, itemData, param, reason);
		}

		::System::Void UseConsumableItem(::RPG::Client::GridFightConsumableItemData* itemData, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET))(this, itemData, param);
		}

		::System::Boolean _CheckConstraits(::RPG::Client::GridFightConsumableItemData* itemData, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* param, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_732*>*>* lut, ::System::String*& reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_732*>*>*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET))(this, itemData, param, lut, reason);
		}
	};
}
