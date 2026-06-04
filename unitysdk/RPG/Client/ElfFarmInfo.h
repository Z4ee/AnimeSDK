#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28AF0C7D8FD87E9F;
class Class_1_DA124CA6269A4B91;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ElfFarmCellData; }
namespace RPG::Client { class ElfFarmData; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8B2690)
#define RPG_CLIENT_ELFFARMINFO_GETALLNEWUNLOCKFIELDS_OFFSET UNITYSDK_OFFSET(0xB8B56C0)
#define RPG_CLIENT_ELFFARMINFO_GETALLUNLOCKSEEDS_OFFSET UNITYSDK_OFFSET(0xB8B5940)
#define RPG_CLIENT_ELFFARMINFO_GETCELLDATA_OFFSET UNITYSDK_OFFSET(0xB8B3610)
#define RPG_CLIENT_ELFFARMINFO_GETFARMDATA_OFFSET UNITYSDK_OFFSET(0xB8B0300)
#define RPG_CLIENT_ELFFARMINFO_GETFARMERBELONGFARMDATA_OFFSET UNITYSDK_OFFSET(0xB8B4BE0)
#define RPG_CLIENT_ELFFARMINFO_GETFARMIDBYFIELDID_OFFSET UNITYSDK_OFFSET(0xB8B33B0)
#define RPG_CLIENT_ELFFARMINFO_GETFARMLIST_OFFSET UNITYSDK_OFFSET(0xB8B37B0)
#define RPG_CLIENT_ELFFARMINFO_GETFIELDDATA_OFFSET UNITYSDK_OFFSET(0xB8B2E80)
#define RPG_CLIENT_ELFFARMINFO_GETFIELDSUNLOCKBYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB8B5420)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATABYITEMCONFIGID_OFFSET UNITYSDK_OFFSET(0xB8B2FC0)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATALIST_OFFSET UNITYSDK_OFFSET(0xB8B3280)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xB8B1950)
#define RPG_CLIENT_ELFFARMINFO_GETPRODUCTSUNLOCKBYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB8B4E30)
#define RPG_CLIENT_ELFFARMINFO_GETSEEDDATA_OFFSET UNITYSDK_OFFSET(0xB8B1660)
#define RPG_CLIENT_ELFFARMINFO_GETSEEDLIST_OFFSET UNITYSDK_OFFSET(0xB8B3680)
#define RPG_CLIENT_ELFFARMINFO_GET_CANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0xB8B6280)
#define RPG_CLIENT_ELFFARMINFO_GET_FARMDICT_OFFSET UNITYSDK_OFFSET(0xB8B62B0)
#define RPG_CLIENT_ELFFARMINFO_GET_FIELDDICT_OFFSET UNITYSDK_OFFSET(0xB8B62A0)
#define RPG_CLIENT_ELFFARMINFO_GET_PRODUCTDICT_OFFSET UNITYSDK_OFFSET(0xB8B62D0)
#define RPG_CLIENT_ELFFARMINFO_GET_SEEDDICT_OFFSET UNITYSDK_OFFSET(0xB8B62C0)
#define RPG_CLIENT_ELFFARMINFO_HARVESTFARM_OFFSET UNITYSDK_OFFSET(0xB8B44B0)
#define RPG_CLIENT_ELFFARMINFO_HARVEST_OFFSET UNITYSDK_OFFSET(0xB8B41A0)
#define RPG_CLIENT_ELFFARMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB8B1B90)
#define RPG_CLIENT_ELFFARMINFO_ISANYCELLEMPTY_OFFSET UNITYSDK_OFFSET(0xB8B5BF0)
#define RPG_CLIENT_ELFFARMINFO_ISANYPRODUCTMATURED_OFFSET UNITYSDK_OFFSET(0xB8B5F30)
#define RPG_CLIENT_ELFFARMINFO_RECYCLEFIELDSEED_OFFSET UNITYSDK_OFFSET(0xB8B3F30)
#define RPG_CLIENT_ELFFARMINFO_RECYCLESEED_OFFSET UNITYSDK_OFFSET(0xB8B3D60)
#define RPG_CLIENT_ELFFARMINFO_SENDBATCHPLANTREQUEST_OFFSET UNITYSDK_OFFSET(0xB8B3AC0)
#define RPG_CLIENT_ELFFARMINFO_SENDSINGLEPLANTREQUEST_OFFSET UNITYSDK_OFFSET(0xB8B38E0)
#define RPG_CLIENT_ELFFARMINFO_SET_CANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0xB8B6290)
#define RPG_CLIENT_ELFFARMINFO_SYNCCANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0xB8B2F30)
#define RPG_CLIENT_ELFFARMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB8B2860)
#define RPG_CLIENT_ELFFARMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B62E0)
#define RPG_CLIENT_ELFFARMINFO__INITFARMDATA_OFFSET UNITYSDK_OFFSET(0xB8B1E50)
#define RPG_CLIENT_ELFFARMINFO__INITFIELDDATA_OFFSET UNITYSDK_OFFSET(0xB8B1BF0)
#define RPG_CLIENT_ELFFARMINFO__INITPRODUCTDATA_OFFSET UNITYSDK_OFFSET(0xB8B2310)
#define RPG_CLIENT_ELFFARMINFO__INITSEEDDATA_OFFSET UNITYSDK_OFFSET(0xB8B20B0)
#define RPG_CLIENT_ELFFARMINFO__SYNCFARMFIELDINFO_OFFSET UNITYSDK_OFFSET(0xB8B2B80)
#define RPG_CLIENT_ELFFARMINFO__SYNCFARMMANAGERINFO_OFFSET UNITYSDK_OFFSET(0xB8B2F80)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmInfo_TypeDefinitionIndex = 59605;

	class ElfFarmInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmProductData*>* _ProductDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmFieldData*>* _FieldDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmSeedData*>* _SeedDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfFarmData*>* _FarmDict; // 0x28
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

		::System::Void Sync(::Class_1_DA124CA6269A4B91* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DA124CA6269A4B91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncCanTakeVillagerReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SYNCCANTAKEVILLAGERREWARD_OFFSET))(this, a1);
		}

		::System::Void _SyncFarmFieldInfo(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_28AF0C7D8FD87E9F*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_28AF0C7D8FD87E9F*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__SYNCFARMFIELDINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncFarmManagerInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO__SYNCFARMMANAGERINFO_OFFSET))(this);
		}

		::RPG::Client::ElfFarmSeedData* GetSeedData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmSeedData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETSEEDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmProductData* GetProductData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmProductData* GetProductDataByItemConfigID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATABYITEMCONFIGID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* GetProductDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTDATALIST_OFFSET))(this);
		}

		::RPG::Client::ElfFarmData* GetFarmData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmFieldData* GetFieldData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmFieldData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFIELDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetFarmIDByFieldID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMIDBYFIELDID_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmCellData* GetCellData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETCELLDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* GetSeedList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETSEEDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmData*>* GetFarmList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMLIST_OFFSET))(this);
		}

		::System::Void SendSinglePlantRequest(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SENDSINGLEPLANTREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendBatchPlantRequest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SENDBATCHPLANTREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleSeed(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_RECYCLESEED_OFFSET))(this, a1, a2);
		}

		::System::Void RecycleFieldSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_RECYCLEFIELDSEED_OFFSET))(this, a1);
		}

		::System::Void Harvest(::RPG::Client::ElfFarmFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_HARVEST_OFFSET))(this, a1);
		}

		::System::Void HarvestFarm(::RPG::Client::ElfFarmFieldData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_HARVESTFARM_OFFSET))(this, a1);
		}

		::RPG::Client::ElfFarmData* GetFarmerBelongFarmData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfFarmData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFARMERBELONGFARMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>* GetProductsUnlockByProgress(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmProductData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETPRODUCTSUNLOCKBYPROGRESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* GetFieldsUnlockByProgress(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_GETFIELDSUNLOCKBYPROGRESS_OFFSET))(this, a1);
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

		::System::Void set_CanTakeVillagerReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMINFO_SET_CANTAKEVILLAGERREWARD_OFFSET))(this, a1);
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
