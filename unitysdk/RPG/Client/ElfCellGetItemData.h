#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_11;
class Class_1_1A51EE17E877E477;
class Class_1_905995C4C61F81F7_7;
namespace Proto { class Item; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA222210)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0xA2222F0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0xA2226F0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA221610)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_CELLID_OFFSET UNITYSDK_OFFSET(0xA222880)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_EXTRAITEMS_OFFSET UNITYSDK_OFFSET(0xA222840)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0xA222860)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0xA2228A0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCURRENCY_OFFSET UNITYSDK_OFFSET(0xA2228E0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0xA2228C0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xA222820)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_CELLID_OFFSET UNITYSDK_OFFSET(0xA222890)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_EXTRAITEMS_OFFSET UNITYSDK_OFFSET(0xA222850)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_FIELDID_OFFSET UNITYSDK_OFFSET(0xA222870)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0xA2228B0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0xA2228D0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xA222830)
#define RPG_CLIENT_ELFCELLGETITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA222200)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCellGetItemData_TypeDefinitionIndex = 58677;

	class ElfCellGetItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* _ExtraItems_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Items_k__BackingField; // 0x18
		::System::Boolean _IsNegative_k__BackingField; // 0x20
		::System::Boolean _IsCritical_k__BackingField; // 0x21
		::System::UInt32 _CellID_k__BackingField; // 0x24
		::System::UInt32 _FieldID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfCellGetItemData* Create(::Class_1_1A51EE17E877E477* harvestResult)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_1A51EE17E877E477*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_OFFSET))(harvestResult);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_1(::Class_1_905995C4C61F81F7_7* recycleResult)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_905995C4C61F81F7_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_1_OFFSET))(recycleResult);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_2(::Class_1_0319A031DCA9B495_11* itemCostData)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_0319A031DCA9B495_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_2_OFFSET))(itemCostData);
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
