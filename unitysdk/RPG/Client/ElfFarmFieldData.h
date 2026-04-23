#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfFarmCellData; }
namespace RPG::GameCore { class RestaurantFieldConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFFARMFIELDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA228E40)
#define RPG_CLIENT_ELFFARMFIELDDATA_GETAVAILABLECELLDATALIST_OFFSET UNITYSDK_OFFSET(0xA229400)
#define RPG_CLIENT_ELFFARMFIELDDATA_GETCELLDATA_OFFSET UNITYSDK_OFFSET(0xA229290)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_BIGCROPSCELLID_OFFSET UNITYSDK_OFFSET(0xA229220)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_BIGCROPSREPLACECELLIDLIST_OFFSET UNITYSDK_OFFSET(0xA229650)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_CELLDATALIST_OFFSET UNITYSDK_OFFSET(0xA22A300)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_HUGECELLDATA_OFFSET UNITYSDK_OFFSET(0xA22A320)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA229F70)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_ISPURCHASED_OFFSET UNITYSDK_OFFSET(0xA22A2E0)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA22A150)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xA229F90)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_PROPCONFIGIDLIST_OFFSET UNITYSDK_OFFSET(0xA22A0E0)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_PROPGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0xA22A070)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0xA22A000)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET__CELLIDARRAY_OFFSET UNITYSDK_OFFSET(0xA2291B0)
#define RPG_CLIENT_ELFFARMFIELDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA229F10)
#define RPG_CLIENT_ELFFARMFIELDDATA_HASEMPTYCELL_OFFSET UNITYSDK_OFFSET(0xA229B40)
#define RPG_CLIENT_ELFFARMFIELDDATA_HASUNMATUREDCELL_OFFSET UNITYSDK_OFFSET(0xA2299E0)
#define RPG_CLIENT_ELFFARMFIELDDATA_ISALLCELLMATURED_OFFSET UNITYSDK_OFFSET(0xA229710)
#define RPG_CLIENT_ELFFARMFIELDDATA_ISANYCELLMATURED_OFFSET UNITYSDK_OFFSET(0xA229870)
#define RPG_CLIENT_ELFFARMFIELDDATA_ISUNLOCKBEFORESPECIFICPROGRESS_OFFSET UNITYSDK_OFFSET(0xA229C90)
#define RPG_CLIENT_ELFFARMFIELDDATA_SET_CELLDATALIST_OFFSET UNITYSDK_OFFSET(0xA22A310)
#define RPG_CLIENT_ELFFARMFIELDDATA_SET_HUGECELLDATA_OFFSET UNITYSDK_OFFSET(0xA22A330)
#define RPG_CLIENT_ELFFARMFIELDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA229F80)
#define RPG_CLIENT_ELFFARMFIELDDATA_SET_ISPURCHASED_OFFSET UNITYSDK_OFFSET(0xA22A2F0)
#define RPG_CLIENT_ELFFARMFIELDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA2296C0)
#define RPG_CLIENT_ELFFARMFIELDDATA__CREATECELLS_OFFSET UNITYSDK_OFFSET(0xA228F40)
#define RPG_CLIENT_ELFFARMFIELDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA228F30)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfFarmFieldData_TypeDefinitionIndex = 58673;

	class ElfFarmFieldData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>* _CellDataList_k__BackingField; // 0x10
		::RPG::Client::ElfFarmCellData* _HugeCellData_k__BackingField; // 0x18
		::System::Boolean _IsPurchased_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfFarmFieldData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::ElfFarmFieldData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_CREATE_OFFSET))(ID);
		}

		::System::Void _CreateCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA__CREATECELLS_OFFSET))(this);
		}

		::RPG::Client::ElfFarmCellData* GetCellData(::System::UInt32 cellID)
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GETCELLDATA_OFFSET))(this, cellID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>* GetAvailableCellDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GETAVAILABLECELLDATALIST_OFFSET))(this);
		}

		::System::Void Sync(::System::Boolean isPurchased)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_SYNC_OFFSET))(this, isPurchased);
		}

		::System::Boolean IsAllCellMatured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_ISALLCELLMATURED_OFFSET))(this);
		}

		::System::Boolean IsAnyCellMatured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_ISANYCELLMATURED_OFFSET))(this);
		}

		::System::Boolean HasUnMaturedCell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_HASUNMATUREDCELL_OFFSET))(this);
		}

		::System::Boolean HasEmptyCell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_HASEMPTYCELL_OFFSET))(this);
		}

		::System::Boolean IsUnlockBeforeSpecificProgress(::System::UInt32 progressID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_ISUNLOCKBEFORESPECIFICPROGRESS_OFFSET))(this, progressID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantFieldConfigRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantFieldConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__CellIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET__CELLIDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_BigCropsCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_BIGCROPSCELLID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BigCropsReplaceCellIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_BIGCROPSREPLACECELLIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_PRICE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_UNLOCKIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PropGroupIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_PROPGROUPIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PropConfigIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_PROPCONFIGIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsPurchased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_ISPURCHASED_OFFSET))(this);
		}

		::System::Void set_IsPurchased(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_SET_ISPURCHASED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>* get_CellDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_CELLDATALIST_OFFSET))(this);
		}

		::System::Void set_CellDataList(::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfFarmCellData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_SET_CELLDATALIST_OFFSET))(this, value);
		}

		::RPG::Client::ElfFarmCellData* get_HugeCellData()
		{
			return ((::RPG::Client::ElfFarmCellData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_GET_HUGECELLDATA_OFFSET))(this);
		}

		::System::Void set_HugeCellData(::RPG::Client::ElfFarmCellData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmCellData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFFARMFIELDDATA_SET_HUGECELLDATA_OFFSET))(this, value);
		}
	};
}
