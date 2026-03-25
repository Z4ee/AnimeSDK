#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_626;
class Class_0_16E4307DCC419505_637;
class Class_1_120319518E6F6581_41;
class Class_1_FA4F4A67B1C04320_352;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0x97ECF00)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97EAF50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET UNITYSDK_OFFSET(0x97EB070)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET UNITYSDK_OFFSET(0x97ECE40)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x97EAD90)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x97EADD0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x97EC320)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0x97EBC10)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x97EB1B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x97EB120)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0x97ED2F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0x97EBA00)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET UNITYSDK_OFFSET(0x97ECFA0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x97EAFF0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x97EA670)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0x97EB5F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_1_OFFSET UNITYSDK_OFFSET(0x97EC380)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_OFFSET UNITYSDK_OFFSET(0x97ECAE0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x97ECA50)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET UNITYSDK_OFFSET(0x97EC6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableInfo_TypeDefinitionIndex = 52693;

	class GridFightConsumableInfo : public ::System::Object
	{
	public:
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightConsumableItemData*>* ConsumableItemDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_637*>*>* _ConstraitsToRoleLUT; // 0x18
		::System::Action_2<::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*>* OnBeforeUseConsumable; // 0x20
		::Class_0_16E4307DCC419505_626* _gridFightDataChangeCollector; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_637*>*>* _ConstraitsToEquipLUT; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetItem(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET))(this, id);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_352*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_352*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET))(this, consumableItemList);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_352*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_352*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET))(this, consumableItemList);
		}

		::System::Void SyncUpdate_1(::System::Collections::Generic::IEnumerable_1<::Class_1_120319518E6F6581_41*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_120319518E6F6581_41*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET))(this, consumableItemList);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::Class_1_120319518E6F6581_41*>* consumableItemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_120319518E6F6581_41*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET))(this, consumableItemList);
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

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataItemIDs(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_352*>* consumableItemList)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_352*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_OFFSET))(this, consumableItemList);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataItemIDs_1(::System::Collections::Generic::IEnumerable_1<::Class_1_120319518E6F6581_41*>* consumableItemList)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_120319518E6F6581_41*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_1_OFFSET))(this, consumableItemList);
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

		::System::Boolean _CheckConstraits(::RPG::Client::GridFightConsumableItemData* itemData, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* param, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_637*>*>* lut, ::System::String*& reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_637*>*>*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET))(this, itemData, param, lut, reason);
		}
	};
}
