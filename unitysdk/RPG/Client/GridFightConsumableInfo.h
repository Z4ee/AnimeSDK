#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConsumeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
class Class_0_16E4307DCC419505_783;
class Class_1_D17272E82AE804C2_374;
class Class_1_D1E0AD3915BCCF29_45;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xBB029F0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB00890)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET UNITYSDK_OFFSET(0xBB009B0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET UNITYSDK_OFFSET(0xBB02960)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xBB00540)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB00580)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xBB01E40)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET UNITYSDK_OFFSET(0xBB01710)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xBB00B30)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xBB00AA0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xBB02DF0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0xBB01350)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET UNITYSDK_OFFSET(0xBB02A90)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0xBB00930)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBAFF8D0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0xBB00F70)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_1_OFFSET UNITYSDK_OFFSET(0xBB01EA0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_OFFSET UNITYSDK_OFFSET(0xBB02600)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xBB02570)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET UNITYSDK_OFFSET(0xBB02200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableInfo_TypeDefinitionIndex = 60685;

	class GridFightConsumableInfo : public ::System::Object
	{
	public:
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightConsumableItemData*>* ConsumableItemDataDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_783*>*>* _ConstraitsToRoleLUT; // 0x18
		::System::Action_2<::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*>* OnBeforeUseConsumable; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_783*>*>* _ConstraitsToEquipLUT; // 0x28
		::Class_0_16E4307DCC419505_768* _gridFightDataChangeCollector; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_INIT_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GETITEM_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_374*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_374*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_374*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_374*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate_1(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_45*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_45*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_45*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_45*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CLEARITEMS_OFFSET))(this);
		}

		::RPG::Client::GridFightConsumableItemData* _GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveMultiPleItem(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEMULTIPLEITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataItemIDs(::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_374*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D17272E82AE804C2_374*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetServerDataItemIDs_1(::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_45*>* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_D1E0AD3915BCCF29_45*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__GETSERVERDATAITEMIDS_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>* get_ConsumableItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_GET_CONSUMABLEITEMDATAS_OFFSET))(this);
		}

		::System::Boolean CanUseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_CANUSECONSUMABLEITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UseConsumableItem(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO_USECONSUMABLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckConstraits(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_783*>*>* a3, ::System::String*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightConsumeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_783*>*>*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLEINFO__CHECKCONSTRAITS_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
