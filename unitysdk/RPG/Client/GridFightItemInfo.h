#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
class Class_1_8844A4E6AE686D5C_4;
class Class_1_F9EFCB63E481ADB7_1;
namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTITEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB99E50)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0xBB99FA0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0xBB99EC0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0xBB99F40)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0xBB9A150)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0xBB9A0C0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0xBB9A5B0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0xBB9A590)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_HASIDLEITEM_OFFSET UNITYSDK_OFFSET(0xBB9A000)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xBB99DB0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xBB9A1E0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB7F410)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0xBB9A5C0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0xBB9A5A0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xBB84930)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xBB848B0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xBB84D40)
#define RPG_CLIENT_GRIDFIGHTITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7ECE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightItemInfo_TypeDefinitionIndex = 60777;

	class GridFightItemInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* _EquipInfo_k__BackingField; // 0x10
		::RPG::Client::GridFightConsumableInfo* _ConsumableInfo_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_INIT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasIdleItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_HASIDLEITEM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1, ::Class_0_16E4307DCC419505_768* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SETCOLLECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnMembersChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::Class_1_F9EFCB63E481ADB7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::Class_1_8844A4E6AE686D5C_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::Class_1_8844A4E6AE686D5C_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipInfo* get_EquipInfo()
		{
			return ((::RPG::Client::GridFightEquipInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_EQUIPINFO_OFFSET))(this);
		}

		::System::Void set_EquipInfo(::RPG::Client::GridFightEquipInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SET_EQUIPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableInfo* get_ConsumableInfo()
		{
			return ((::RPG::Client::GridFightConsumableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_CONSUMABLEINFO_OFFSET))(this);
		}

		::System::Void set_ConsumableInfo(::RPG::Client::GridFightConsumableInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SET_CONSUMABLEINFO_OFFSET))(this, a1);
		}
	};
}
