#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_26;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class BaseGachaDecideData; }
namespace RPG::Client { class GachaDrawData; }
namespace RPG::Client { class GachaPoolRewardData; }
namespace RPG::Client { class GachaTokenData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GachPoolRewardConfigRow; }
namespace RPG::GameCore { class GachaBasicInfoConfigRow; }
namespace RPG::GameCore { class GachaTypeBasicInfoRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASEGACHAPOOLDATA_BASEGACHAPOOLDATACOMPARISON_OFFSET UNITYSDK_OFFSET(0xB3AC170)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GETDECIDEDITEMIDS_OFFSET UNITYSDK_OFFSET(0xB3AB090)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GETGACHAREWARDQUEST_OFFSET UNITYSDK_OFFSET(0xB3ABDE0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_CANDECIDE_OFFSET UNITYSDK_OFFSET(0xB3AB170)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_DECIDEDATA_OFFSET UNITYSDK_OFFSET(0xB3AB320)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_DETAILITEMDATAS_OFFSET UNITYSDK_OFFSET(0xB3AC090)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0xB3AA820)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAPOOLREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB3AC0D0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHATYPE_OFFSET UNITYSDK_OFFSET(0xB3ABA00)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_GOLDITEMDATA_OFFSET UNITYSDK_OFFSET(0xB3AC0B0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_ISINGROUPPOOL_OFFSET UNITYSDK_OFFSET(0xB3AC0F0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB3AC030)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_PRIZEITEMDATAS_OFFSET UNITYSDK_OFFSET(0xB3AC070)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB3AC010)
#define RPG_CLIENT_BASEGACHAPOOLDATA_GET_TYPEBASICINFOROW_OFFSET UNITYSDK_OFFSET(0xB3AC050)
#define RPG_CLIENT_BASEGACHAPOOLDATA_HAVETIMELIMIT_OFFSET UNITYSDK_OFFSET(0xB3ABFD0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xB3ABEE0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISUPITEMINDECIDEDITEMS_OFFSET UNITYSDK_OFFSET(0xB3AB180)
#define RPG_CLIENT_BASEGACHAPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xB3ABEA0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_DECIDEDATA_OFFSET UNITYSDK_OFFSET(0xB3AB330)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_DETAILITEMDATAS_OFFSET UNITYSDK_OFFSET(0xB3AC0A0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_GACHAPOOLREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB3AC0E0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_GOLDITEMDATA_OFFSET UNITYSDK_OFFSET(0xB3AC0C0)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_PRIZEITEMDATAS_OFFSET UNITYSDK_OFFSET(0xB3AC080)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB3AC020)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SET_TYPEBASICINFOROW_OFFSET UNITYSDK_OFFSET(0xB3AC060)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SYNCDECIDEDATA_OFFSET UNITYSDK_OFFSET(0xB3AAF40)
#define RPG_CLIENT_BASEGACHAPOOLDATA_SYNCGACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0xB3AB900)
#define RPG_CLIENT_BASEGACHAPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AB340)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITDETAILITEMSROW_OFFSET UNITYSDK_OFFSET(0xB3ABA20)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHADRAWDATA_OFFSET UNITYSDK_OFFSET(0xB3AB650)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHAPOOLREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB3AB7A0)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHATOKENDATA_OFFSET UNITYSDK_OFFSET(0xB3AB5C0)
#define RPG_CLIENT_BASEGACHAPOOLDATA__INITPRIZEITEMSROW_OFFSET UNITYSDK_OFFSET(0xB3ABC00)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseGachaPoolData_TypeDefinitionIndex = 60103;

	class BaseGachaPoolData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MULTI_DRAW_TIME = 0xA; // 0x0
		::RPG::Client::ItemData* _GoldItemData_k__BackingField; // 0x10
		::RPG::Client::GachaTokenData* GachaTokenData; // 0x18
		::Il2CppArray<::RPG::Client::ItemData*>* _DetailItemDatas_k__BackingField; // 0x20
		::RPG::Client::GachaDrawData* MultiDrawData; // 0x28
		::Il2CppArray<::RPG::Client::ItemData*>* _PrizeItemDatas_k__BackingField; // 0x30
		::RPG::Client::GachaPoolRewardData* _GachaPoolRewardData_k__BackingField; // 0x38
		::RPG::Client::GachaDrawData* SingleDrawData; // 0x40
		::System::String* HistoryURL; // 0x48
		::RPG::GameCore::GachaTypeBasicInfoRow* _TypeBasicInfoRow_k__BackingField; // 0x50
		::System::String* DetailURL; // 0x58
		::RPG::Client::BaseGachaDecideData* _DecideData_k__BackingField; // 0x60
		::RPG::GameCore::GachaBasicInfoConfigRow* _Row_k__BackingField; // 0x68
		::RPG::GameCore::GachPoolRewardConfigRow* _GachaPoolRewardRow; // 0x70
		::System::Int64 EndTimeStamp; // 0x78
		::System::Int64 BeginTimeStamp; // 0x80
		::System::Int64 CurrentGachaTime; // 0x88

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncDecideData(::Class_1_21DCD4640D389503_26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SYNCDECIDEDATA_OFFSET))(this, a1);
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

		::System::Void set_DecideData(::RPG::Client::BaseGachaDecideData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaDecideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_DECIDEDATA_OFFSET))(this, a1);
		}

		::System::Void SyncGachaPoolData(::Class_1_21DCD4640D389503_26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SYNCGACHAPOOLDATA_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* GetGachaRewardQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GETGACHAREWARDQUEST_OFFSET))(this);
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

		::System::Void _InitGachaTokenData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHATOKENDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGachaDrawData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHADRAWDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _InitGachaPoolRewardData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITGACHAPOOLREWARDDATA_OFFSET))(this);
		}

		::System::Void _InitPrizeItemsRow(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITPRIZEITEMSROW_OFFSET))(this, a1);
		}

		::System::Void _InitDetailItemsRow(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA__INITDETAILITEMSROW_OFFSET))(this, a1);
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

		::System::Void set_Row(::RPG::GameCore::GachaBasicInfoConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaBasicInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::GachaTypeBasicInfoRow* get_TypeBasicInfoRow()
		{
			return ((::RPG::GameCore::GachaTypeBasicInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_TYPEBASICINFOROW_OFFSET))(this);
		}

		::System::Void set_TypeBasicInfoRow(::RPG::GameCore::GachaTypeBasicInfoRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaTypeBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_TYPEBASICINFOROW_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ItemData*>* get_PrizeItemDatas()
		{
			return ((::Il2CppArray<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_PRIZEITEMDATAS_OFFSET))(this);
		}

		::System::Void set_PrizeItemDatas(::Il2CppArray<::RPG::Client::ItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_PRIZEITEMDATAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ItemData*>* get_DetailItemDatas()
		{
			return ((::Il2CppArray<::RPG::Client::ItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_DETAILITEMDATAS_OFFSET))(this);
		}

		::System::Void set_DetailItemDatas(::Il2CppArray<::RPG::Client::ItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_DETAILITEMDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_GoldItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GOLDITEMDATA_OFFSET))(this);
		}

		::System::Void set_GoldItemData(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_GOLDITEMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::GachaPoolRewardData* get_GachaPoolRewardData()
		{
			return ((::RPG::Client::GachaPoolRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_GACHAPOOLREWARDDATA_OFFSET))(this);
		}

		::System::Void set_GachaPoolRewardData(::RPG::Client::GachaPoolRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaPoolRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_SET_GACHAPOOLREWARDDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInGroupPool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_GET_ISINGROUPPOOL_OFFSET))(this);
		}

		static ::System::Int32 BaseGachaPoolDataComparison(::RPG::Client::BaseGachaPoolData* a1, ::RPG::Client::BaseGachaPoolData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEGACHAPOOLDATA_BASEGACHAPOOLDATACOMPARISON_OFFSET))(a1, a2);
		}
	};
}
