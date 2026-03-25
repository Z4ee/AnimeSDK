#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AE9EADEAA87F763;
class Class_1_F48B67D07D3C17D7;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfFarmCellData; }
namespace RPG::Client { class ElfFarmData; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A7DA0)
#define RPG_CLIENT_ELFFARMINFO_GETALLNEWUNLOCKFIELDS_OFFSET UNITYSDK_OFFSET(0x95AA8B0)
#define RPG_CLIENT_ELFFARMINFO_GETALLUNLOCKSEEDS_OFFSET UNITYSDK_OFFSET(0x95AAA80)
#define RPG_CLIENT_ELFFARMINFO_GETCELLDATA_OFFSET UNITYSDK_OFFSET(0x95A8C20)
#define RPG_CLIENT_ELFFARMINFO_GETFARMDATA_OFFSET UNITYSDK_OFFSET(0x95A5F70)
#define RPG_CLIENT_ELFFARMINFO_GETFARMERBELONGFARMDATA_OFFSET UNITYSDK_OFFSET(0x95A9FA0)
#define RPG_CLIENT_ELFFARMINFO_GETFARMIDBYFIELDID_OFFSET UNITYSDK_OFFSET(0x95A8A30)
#define RPG_CLIENT_ELFFARMINFO_GETFARMLIST_OFFSET UNITYSDK_OFFSET(0x95A8D20)
#define RPG_CLIENT_ELFFARMINFO_GETFIELDDATA_OFFSET UNITYSDK_OFFSET(0x95A85E0)
#define RPG_CLIENT_ELFFARMINFO_GETFIELDSUNLOCKBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x95AA6E0)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATABYITEMCONFIGID_OFFSET UNITYSDK_OFFSET(0x95A8750)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATALIST_OFFSET UNITYSDK_OFFSET(0x95A89A0)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x95A7170)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTSUNLOCKBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x95AA180)
#define RPG_CLIENT_ELFFARMINFO_GETSEEDDATA_OFFSET UNITYSDK_OFFSET(0x95A6EF0)
#define RPG_CLIENT_ELFFARMINFO_GETSEEDLIST_OFFSET UNITYSDK_OFFSET(0x95A8C90)
#define RPG_CLIENT_ELFFARMINFO_GET_CANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x95AB2C0)
#define RPG_CLIENT_ELFFARMINFO_GET_FARMDICT_OFFSET UNITYSDK_OFFSET(0x95AB2F0)
#define RPG_CLIENT_ELFFARMINFO_GET_FIELDDICT_OFFSET UNITYSDK_OFFSET(0x95AB2E0)
#define RPG_CLIENT_ELFFARMINFO_GET_PRODUCTDICT_OFFSET UNITYSDK_OFFSET(0x95AB310)
#define RPG_CLIENT_ELFFARMINFO_GET_SEEDDICT_OFFSET UNITYSDK_OFFSET(0x95AB300)
#define RPG_CLIENT_ELFFARMINFO_HARVESTFARM_OFFSET UNITYSDK_OFFSET(0x95A97A0)
#define RPG_CLIENT_ELFFARMINFO_HARVEST_OFFSET UNITYSDK_OFFSET(0x95A9540)
#define RPG_CLIENT_ELFFARMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x95A73E0)
#define RPG_CLIENT_ELFFARMINFO_ISANYCELLEMPTY_OFFSET UNITYSDK_OFFSET(0x95AAC70)
#define RPG_CLIENT_ELFFARMINFO_ISANYPRODUCTMATURED_OFFSET UNITYSDK_OFFSET(0x95AAF90)
#define RPG_CLIENT_ELFFARMINFO_RECYCLEFIELDSEED_OFFSET UNITYSDK_OFFSET(0x95A9300)
#define RPG_CLIENT_ELFFARMINFO_RECYCLESEED_OFFSET UNITYSDK_OFFSET(0x95A9190)
#define RPG_CLIENT_ELFFARMINFO_SENDBATCHPLANTREQUEST_OFFSET UNITYSDK_OFFSET(0x95A8F40)
#define RPG_CLIENT_ELFFARMINFO_SENDSINGLEPLANTREQUEST_OFFSET UNITYSDK_OFFSET(0x95A8DB0)
#define RPG_CLIENT_ELFFARMINFO_SET_CANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x95AB2D0)
#define RPG_CLIENT_ELFFARMINFO_SYNCCANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x95A86C0)
#define RPG_CLIENT_ELFFARMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x95A7FC0)
#define RPG_CLIENT_ELFFARMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x95AB320)
#define RPG_CLIENT_ELFFARMINFO__INITFARMDATA_OFFSET UNITYSDK_OFFSET(0x95A7650)
#define RPG_CLIENT_ELFFARMINFO__INITFIELDDATA_OFFSET UNITYSDK_OFFSET(0x95A7440)
#define RPG_CLIENT_ELFFARMINFO__INITPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0x95A7A70)
#define RPG_CLIENT_ELFFARMINFO__INITSEEDDATA_OFFSET UNITYSDK_OFFSET(0x95A7860)
#define RPG_CLIENT_ELFFARMINFO__SYNCFARMFIELDINFO_OFFSET UNITYSDK_OFFSET(0x95A82E0)
#define RPG_CLIENT_ELFFARMINFO__SYNCFARMMANAGERINFO_OFFSET UNITYSDK_OFFSET(0x95A8710)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmInfo_TypeDefinitionIndex = 51727;

	class ElfFarmInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>* _ProductDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>* _FarmDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>* _FieldDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>* _SeedDict; // 0x28
		::System::Boolean _CanTakeVillagerReward_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_INIT_OFFSET))(this);
		}

		::System::Void _InitFieldData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITFIELDDATA_OFFSET))(this);
		}

		::System::Void _InitFarmData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITFARMDATA_OFFSET))(this);
		}

		::System::Void _InitSeedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITSEEDDATA_OFFSET))(this);
		}

		::System::Void _InitProductData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__INITPRODUCTDATA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_2AE9EADEAA87F763* farmServerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2AE9EADEAA87F763*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SYNC_OFFSET))(this, farmServerInfo);
		}

		::System::Void SyncCanTakeVillagerReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SYNCCANTAKEVILLAGERREWARD_OFFSET))(this, value);
		}

		::System::Void _SyncFarmFieldInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F48B67D07D3C17D7*>* fieldCellList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F48B67D07D3C17D7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__SYNCFARMFIELDINFO_OFFSET))(this, fieldCellList);
		}

		::System::Void _SyncFarmManagerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__SYNCFARMMANAGERINFO_OFFSET))(this);
		}

		::RPG::Client::ElfFarmSeedData* GetSeedData(::System::UInt32 seedID)
		{
			return ((::RPG::Client::ElfFarmSeedData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETSEEDDATA_OFFSET))(this, seedID);
		}

		::RPG::Client::ElfFarmProductData* GetProductData(::System::UInt32 productID)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATA_OFFSET))(this, productID);
		}

		::RPG::Client::ElfFarmProductData* GetProductDataByItemConfigID(::System::UInt32 itemConfigID)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATABYITEMCONFIGID_OFFSET))(this, itemConfigID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* GetProductDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATALIST_OFFSET))(this);
		}

		::RPG::Client::ElfFarmData* GetFarmData(::System::UInt32 farmID)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMDATA_OFFSET))(this, farmID);
		}

		::RPG::Client::ElfFarmFieldData* GetFieldData(::System::UInt32 fieldID)
		{
			return ((::RPG::Client::ElfFarmFieldData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFIELDDATA_OFFSET))(this, fieldID);
		}

		::System::UInt32 GetFarmIDByFieldID(::System::UInt32 fieldID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMIDBYFIELDID_OFFSET))(this, fieldID);
		}

		::RPG::Client::ElfFarmCellData* GetCellData(::System::UInt32 fieldID, ::System::UInt32 cellID)
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETCELLDATA_OFFSET))(this, fieldID, cellID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* GetSeedList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETSEEDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmData*>* GetFarmList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMLIST_OFFSET))(this);
		}

		::System::Void SendSinglePlantRequest(::System::UInt32 fieldID, ::System::UInt32 cellID, ::System::UInt32 seedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SENDSINGLEPLANTREQUEST_OFFSET))(this, fieldID, cellID, seedID);
		}

		::System::Void SendBatchPlantRequest(::System::UInt32 fieldID, ::System::UInt32 seedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SENDBATCHPLANTREQUEST_OFFSET))(this, fieldID, seedID);
		}

		::System::Void RecycleSeed(::System::UInt32 fieldID, ::System::UInt32 cellID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_RECYCLESEED_OFFSET))(this, fieldID, cellID);
		}

		::System::Void RecycleFieldSeed(::System::UInt32 fieldID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_RECYCLEFIELDSEED_OFFSET))(this, fieldID);
		}

		::System::Void Harvest(::RPG::Client::ElfFarmFieldData* field)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_HARVEST_OFFSET))(this, field);
		}

		::System::Void HarvestFarm(::RPG::Client::ElfFarmFieldData* field)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_HARVESTFARM_OFFSET))(this, field);
		}

		::RPG::Client::ElfFarmData* GetFarmerBelongFarmData(::System::UInt32 employeeID)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMERBELONGFARMDATA_OFFSET))(this, employeeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* GetProductsUnlockByProgress(::System::UInt32 progressID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTSUNLOCKBYPROGRESS_OFFSET))(this, progressID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* GetFieldsUnlockByProgress(::System::UInt32 progressID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFIELDSUNLOCKBYPROGRESS_OFFSET))(this, progressID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* GetAllNewUnlockFields()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETALLNEWUNLOCKFIELDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* GetAllUnlockSeeds()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETALLUNLOCKSEEDS_OFFSET))(this);
		}

		::System::Boolean IsAnyCellEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_ISANYCELLEMPTY_OFFSET))(this);
		}

		::System::Boolean IsAnyProductMatured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_ISANYPRODUCTMATURED_OFFSET))(this);
		}

		::System::Boolean get_CanTakeVillagerReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_CANTAKEVILLAGERREWARD_OFFSET))(this);
		}

		::System::Void set_CanTakeVillagerReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SET_CANTAKEVILLAGERREWARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>* get_FieldDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_FIELDDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>* get_FarmDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_FARMDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>* get_SeedDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_SEEDDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>* get_ProductDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GET_PRODUCTDICT_OFFSET))(this);
		}
	};
}
