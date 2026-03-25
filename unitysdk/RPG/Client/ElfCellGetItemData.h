#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_964D3E99C6883FD7_7;
class Class_1_C48DB24E2423D1F1;
class Class_1_E473F14F738B1BF5_10;
namespace Proto { class Item; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x959BB60)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x959BC50)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0x959C050)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x959AF70)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_CELLID_OFFSET UNITYSDK_OFFSET(0x959C1E0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_EXTRAITEMS_OFFSET UNITYSDK_OFFSET(0x959C1A0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0x959C1C0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x959C200)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCURRENCY_OFFSET UNITYSDK_OFFSET(0x959C240)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x959C220)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x959C180)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_CELLID_OFFSET UNITYSDK_OFFSET(0x959C1F0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_EXTRAITEMS_OFFSET UNITYSDK_OFFSET(0x959C1B0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_FIELDID_OFFSET UNITYSDK_OFFSET(0x959C1D0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x959C210)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x959C230)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x959C190)
#define RPG_CLIENT_ELFCELLGETITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x959BB50)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCellGetItemData_TypeDefinitionIndex = 51729;

	class ElfCellGetItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* _ExtraItems_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Items_k__BackingField; // 0x18
		::System::UInt32 _CellID_k__BackingField; // 0x20
		::System::Boolean _IsCritical_k__BackingField; // 0x24
		::System::Boolean _IsNegative_k__BackingField; // 0x25
		::System::UInt32 _FieldID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfCellGetItemData* Create(::Class_1_C48DB24E2423D1F1* harvestResult)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_C48DB24E2423D1F1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_OFFSET))(harvestResult);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_1(::Class_1_964D3E99C6883FD7_7* recycleResult)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_964D3E99C6883FD7_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_1_OFFSET))(recycleResult);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_2(::Class_1_E473F14F738B1BF5_10* itemCostData)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_E473F14F738B1BF5_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_2_OFFSET))(itemCostData);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_3(::System::UInt32 fieldID, ::System::UInt32 cellID, ::Proto::Item* item)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::System::UInt32, ::System::UInt32, ::Proto::Item*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_3_OFFSET))(fieldID, cellID, item);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_ITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* get_ExtraItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_EXTRAITEMS_OFFSET))(this);
		}

		::System::Void set_ExtraItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_EXTRAITEMS_OFFSET))(this, value);
		}

		::System::UInt32 get_FieldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_FIELDID_OFFSET))(this);
		}

		::System::Void set_FieldID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_FIELDID_OFFSET))(this, value);
		}

		::System::UInt32 get_CellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_CELLID_OFFSET))(this);
		}

		::System::Void set_CellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_CELLID_OFFSET))(this, value);
		}

		::System::Boolean get_IsCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCRITICAL_OFFSET))(this);
		}

		::System::Void set_IsCritical(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISCRITICAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Void set_IsNegative(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISNEGATIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCURRENCY_OFFSET))(this);
		}
	};
}
