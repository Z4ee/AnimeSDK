#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_D8EAED2BCF3F4D39_8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ItemData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEGACHADECIDEDATA_GETAVAILABLEDECIDEITEMDATAS_OFFSET UNITYSDK_OFFSET(0x916ED10)
#define RPG_CLIENT_BASEGACHADECIDEDATA_GETAVAILABLEDECIDEITEMIDS_OFFSET UNITYSDK_OFFSET(0x916F1E0)
#define RPG_CLIENT_BASEGACHADECIDEDATA_GETDECIDEDITEMDATAS_OFFSET UNITYSDK_OFFSET(0x916F130)
#define RPG_CLIENT_BASEGACHADECIDEDATA_GETDECIDEDITEMIDS_OFFSET UNITYSDK_OFFSET(0x916F270)
#define RPG_CLIENT_BASEGACHADECIDEDATA_GETNOTDECIDEDITEMDATAS_OFFSET UNITYSDK_OFFSET(0x916F180)
#define RPG_CLIENT_BASEGACHADECIDEDATA_GET_DECIDEID_OFFSET UNITYSDK_OFFSET(0x916FBE0)
#define RPG_CLIENT_BASEGACHADECIDEDATA_GET_GACHAITEMTYPE_OFFSET UNITYSDK_OFFSET(0x916FBC0)
#define RPG_CLIENT_BASEGACHADECIDEDATA_HASNEWAVAILABLEDECIDEITEM_OFFSET UNITYSDK_OFFSET(0x916F300)
#define RPG_CLIENT_BASEGACHADECIDEDATA_MARKALLAVAILABLEDECIDEITEMSEEN_OFFSET UNITYSDK_OFFSET(0x916F6E0)
#define RPG_CLIENT_BASEGACHADECIDEDATA_MARKAVAILABLEDECIDEITEMSEEN_OFFSET UNITYSDK_OFFSET(0x916FA70)
#define RPG_CLIENT_BASEGACHADECIDEDATA_SET_DECIDEID_OFFSET UNITYSDK_OFFSET(0x916FBF0)
#define RPG_CLIENT_BASEGACHADECIDEDATA_SET_GACHAITEMTYPE_OFFSET UNITYSDK_OFFSET(0x916FBD0)
#define RPG_CLIENT_BASEGACHADECIDEDATA_SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x916EC40)
#define RPG_CLIENT_BASEGACHADECIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x916EC30)
#define RPG_CLIENT_BASEGACHADECIDEDATA__GETITEMDATAS_OFFSET UNITYSDK_OFFSET(0x916ED60)
#define RPG_CLIENT_BASEGACHADECIDEDATA__ONSYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x916ECD0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaDecideData_TypeDefinitionIndex = 52202;

	class BaseGachaDecideData : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* _DecidedItemIDs; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* _AvailableDecideItemIDs; // 0x18
		::System::UInt32 _DecideID_k__BackingField; // 0x20
		::RPG::GameCore::GachaItemType _GachaItemType_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncDecideData(::Class_1_D8EAED2BCF3F4D39_8* decideItemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_SYNCDECIDEDATA_OFFSET))(this, decideItemData);
		}

		::System::Void _OnSyncDecideData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA__ONSYNCDECIDEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetAvailableDecideItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GETAVAILABLEDECIDEITEMDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetDecidedItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GETDECIDEDITEMDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetNotDecidedItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GETNOTDECIDEDITEMDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailableDecideItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GETAVAILABLEDECIDEITEMIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDecidedItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GETDECIDEDITEMIDS_OFFSET))(this);
		}

		::System::Boolean HasNewAvailableDecideItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_HASNEWAVAILABLEDECIDEITEM_OFFSET))(this);
		}

		::System::Void MarkAllAvailableDecideItemSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_MARKALLAVAILABLEDECIDEITEMSEEN_OFFSET))(this);
		}

		::System::Void MarkAvailableDecideItemSeen(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_MARKAVAILABLEDECIDEITEMSEEN_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _GetItemDatas(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* itemIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA__GETITEMDATAS_OFFSET))(this, itemIDs);
		}

		::RPG::GameCore::GachaItemType get_GachaItemType()
		{
			return ((::RPG::GameCore::GachaItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GET_GACHAITEMTYPE_OFFSET))(this);
		}

		::System::Void set_GachaItemType(::RPG::GameCore::GachaItemType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_SET_GACHAITEMTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_DecideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_GET_DECIDEID_OFFSET))(this);
		}

		::System::Void set_DecideID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHADECIDEDATA_SET_DECIDEID_OFFSET))(this, value);
		}
	};
}
