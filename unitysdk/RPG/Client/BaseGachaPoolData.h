#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_6F289C13530086A8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class BaseGachaDecideData; }
namespace RPG::Client { class GachaDrawData; }
namespace RPG::Client { class GachaTokenData; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class GachaBasicInfoConfigRow; }
namespace RPG::GameCore { class GachaTypeBasicInfoRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEGACHAPOOLDATA_BASEGACHAPOOLDATACOMPARISON_OFFSET UNITYSDK_OFFSET(0x9DD2F00)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GETDECIDEDITEMIDS_OFFSET UNITYSDK_OFFSET(0x9DD2040)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_CANDECIDE_OFFSET UNITYSDK_OFFSET(0x9DD2120)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_DECIDEDATA_OFFSET UNITYSDK_OFFSET(0x9DD2250)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_DETAILITEMDATAS_OFFSET UNITYSDK_OFFSET(0x9DD2E40)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0x9DD1810)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0x9DD2810)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GOLDITEMDATA_OFFSET UNITYSDK_OFFSET(0x9DD2E60)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_ISINGROUPPOOL_OFFSET UNITYSDK_OFFSET(0x9DD2E80)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x9DD2DE0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_PRIZEITEMDATAS_OFFSET UNITYSDK_OFFSET(0x9DD2E20)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DD2DC0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_TYPEBASICINFOROW_OFFSET UNITYSDK_OFFSET(0x9DD2E00)
#define RPG_CLIENT_BASEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x9DD2D80)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x9DD2C90)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISUPITEMINDECIDEDITEMS_OFFSET UNITYSDK_OFFSET(0x9DD2130)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DD2C50)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_DECIDEDATA_OFFSET UNITYSDK_OFFSET(0x9DD2260)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_DETAILITEMDATAS_OFFSET UNITYSDK_OFFSET(0x9DD2E50)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_GOLDITEMDATA_OFFSET UNITYSDK_OFFSET(0x9DD2E70)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_PRIZEITEMDATAS_OFFSET UNITYSDK_OFFSET(0x9DD2E30)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9DD2DD0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_TYPEBASICINFOROW_OFFSET UNITYSDK_OFFSET(0x9DD2E10)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0x9DD1EF0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SYNCGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x9DD2720)
#define RPG_CLIENT_BASEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD2270)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITDETAILITEMSROW_OFFSET UNITYSDK_OFFSET(0x9DD2830)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHADRAWDATA_OFFSET UNITYSDK_OFFSET(0x9DD25D0)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHATOKENDATA_OFFSET UNITYSDK_OFFSET(0x9DD2540)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITPRIZEITEMSROW_OFFSET UNITYSDK_OFFSET(0x9DD2A40)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaPoolData_TypeDefinitionIndex = 59169;

	class BaseGachaPoolData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MULTI_DRAW_TIME = 0xA; // 0x0
		::System::String* DetailURL; // 0x10
		::Il2CppArray<::RPG::Client::ItemData*>* _PrizeItemDatas_k__BackingField; // 0x18
		::RPG::GameCore::GachaTypeBasicInfoRow* _TypeBasicInfoRow_k__BackingField; // 0x20
		::RPG::Client::GachaTokenData* GachaTokenData; // 0x28
		::RPG::Client::BaseGachaDecideData* _DecideData_k__BackingField; // 0x30
		::RPG::Client::GachaDrawData* MultiDrawData; // 0x38
		::System::String* HistoryURL; // 0x40
		::Il2CppArray<::RPG::Client::ItemData*>* _DetailItemDatas_k__BackingField; // 0x48
		::RPG::Client::ItemData* _GoldItemData_k__BackingField; // 0x50
		::RPG::Client::GachaDrawData* SingleDrawData; // 0x58
		::RPG::GameCore::GachaBasicInfoConfigRow* _Row_k__BackingField; // 0x60
		::System::Int64 CurrentGachaTime; // 0x68
		::System::Int64 EndTimeStamp; // 0x70
		::System::Int64 BeginTimeStamp; // 0x78

		::System::Void _ctor(::System::UInt32 gachaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__CTOR_OFFSET))(this, gachaID);
		}

		::System::Void SyncDecideData(::Class_1_6F289C13530086A8* gachaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SYNCDECIDEDATA_OFFSET))(this, gachaInfo);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDecidedItemIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GETDECIDEDITEMIDS_OFFSET))(this);
		}

		::System::Boolean IsUpItemInDecidedItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_ISUPITEMINDECIDEDITEMS_OFFSET))(this);
		}

		::System::Boolean get_CanDecide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_CANDECIDE_OFFSET))(this);
		}

		::RPG::Client::BaseGachaDecideData* get_DecideData()
		{
			return ((::RPG::Client::BaseGachaDecideData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_DECIDEDATA_OFFSET))(this);
		}

		::System::Void set_DecideData(::RPG::Client::BaseGachaDecideData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaDecideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_DECIDEDATA_OFFSET))(this, value);
		}

		::System::Void SyncGachaPoolData(::Class_1_6F289C13530086A8* gachaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SYNCGACHAPOOLDATA_OFFSET))(this, gachaInfo);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsFeatureClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_ISFEATURECLOSED_OFFSET))(this);
		}

		::System::Boolean HaveTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET))(this);
		}

		::System::Void _InitGachaTokenData(::System::UInt32 itemID, ::System::UInt32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHATOKENDATA_OFFSET))(this, itemID, price);
		}

		::System::Void _InitGachaDrawData(::System::UInt32 itemID, ::System::UInt32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHADRAWDATA_OFFSET))(this, itemID, price);
		}

		::System::Void _InitPrizeItemsRow(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* prizeItemsID)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITPRIZEITEMSROW_OFFSET))(this, prizeItemsID);
		}

		::System::Void _InitDetailItemsRow(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* detailItemsID)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITDETAILITEMSROW_OFFSET))(this, detailItemsID);
		}

		::System::UInt32 get_GachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAID_OFFSET))(this);
		}

		::RPG::GameCore::GachaType get_GachaType()
		{
			return ((::RPG::GameCore::GachaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHATYPE_OFFSET))(this);
		}

		::RPG::GameCore::GachaBasicInfoConfigRow* get_Row()
		{
			return ((::RPG::GameCore::GachaBasicInfoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::GachaBasicInfoConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaBasicInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_ROW_OFFSET))(this, value);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::GachaTypeBasicInfoRow* get_TypeBasicInfoRow()
		{
			return ((::RPG::GameCore::GachaTypeBasicInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_TYPEBASICINFOROW_OFFSET))(this);
		}

		::System::Void set_TypeBasicInfoRow(::RPG::GameCore::GachaTypeBasicInfoRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaTypeBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_TYPEBASICINFOROW_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::ItemData*>* get_PrizeItemDatas()
		{
			return ((::Il2CppArray<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_PRIZEITEMDATAS_OFFSET))(this);
		}

		::System::Void set_PrizeItemDatas(::Il2CppArray<::RPG::Client::ItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_PRIZEITEMDATAS_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::ItemData*>* get_DetailItemDatas()
		{
			return ((::Il2CppArray<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_DETAILITEMDATAS_OFFSET))(this);
		}

		::System::Void set_DetailItemDatas(::Il2CppArray<::RPG::Client::ItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_DETAILITEMDATAS_OFFSET))(this, value);
		}

		::RPG::Client::ItemData* get_GoldItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GOLDITEMDATA_OFFSET))(this);
		}

		::System::Void set_GoldItemData(::RPG::Client::ItemData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_GOLDITEMDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsInGroupPool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_ISINGROUPPOOL_OFFSET))(this);
		}

		static ::System::Int32 BaseGachaPoolDataComparison(::RPG::Client::BaseGachaPoolData* lhs, ::RPG::Client::BaseGachaPoolData* rhs)
		{
			return ((::System::Int32(*)(::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_BASEGACHAPOOLDATACOMPARISON_OFFSET))(lhs, rhs);
		}
	};
}
