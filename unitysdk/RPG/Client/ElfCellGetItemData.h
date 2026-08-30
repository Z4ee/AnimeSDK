#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0319A031DCA9B495_12;
class Class_1_04B49712BAFF7721;
class Class_1_905995C4C61F81F7_7;
namespace Proto { class Item; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1AC60C90)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1AC60D80)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1AC61310)
#define RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC60240)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_CELLID_OFFSET UNITYSDK_OFFSET(0x1AC61500)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_EXTRAITEMS_OFFSET UNITYSDK_OFFSET(0x1AC614C0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_FIELDID_OFFSET UNITYSDK_OFFSET(0x1AC614E0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x1AC61520)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCURRENCY_OFFSET UNITYSDK_OFFSET(0x1AC61560)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x1AC61540)
#define RPG_CLIENT_ELFCELLGETITEMDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1AC614A0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_CELLID_OFFSET UNITYSDK_OFFSET(0x1AC61510)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_EXTRAITEMS_OFFSET UNITYSDK_OFFSET(0x1AC614D0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_FIELDID_OFFSET UNITYSDK_OFFSET(0x1AC614F0)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x1AC61530)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x1AC61550)
#define RPG_CLIENT_ELFCELLGETITEMDATA_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1AC614B0)
#define RPG_CLIENT_ELFCELLGETITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC60C80)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCellGetItemData_TypeDefinitionIndex = 63745;

	class ElfCellGetItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* _ExtraItems_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _Items_k__BackingField; // 0x18
		::System::UInt32 _FieldID_k__BackingField; // 0x20
		::System::Boolean _IsCritical_k__BackingField; // 0x24
		::System::Boolean _IsNegative_k__BackingField; // 0x25
		::System::UInt32 _CellID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfCellGetItemData* Create(::Class_1_04B49712BAFF7721* a1)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_04B49712BAFF7721*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_1(::Class_1_905995C4C61F81F7_7* a1)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_905995C4C61F81F7_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_2(::Class_1_0319A031DCA9B495_12* a1)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::Class_1_0319A031DCA9B495_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_2_OFFSET))(a1);
		}

		static ::RPG::Client::ElfCellGetItemData* Create_3(::System::UInt32 a1, ::System::UInt32 a2, ::Proto::Item* a3)
		{
			return ((::RPG::Client::ElfCellGetItemData*(*)(::System::UInt32, ::System::UInt32, ::Proto::Item*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_CREATE_3_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_ITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* get_ExtraItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_EXTRAITEMS_OFFSET))(this);
		}

		::System::Void set_ExtraItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_EXTRAITEMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_FieldID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_FIELDID_OFFSET))(this);
		}

		::System::Void set_FieldID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_FIELDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_CELLID_OFFSET))(this);
		}

		::System::Void set_CellID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_CELLID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCRITICAL_OFFSET))(this);
		}

		::System::Void set_IsCritical(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISCRITICAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Void set_IsNegative(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_SET_ISNEGATIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELLGETITEMDATA_GET_ISCURRENCY_OFFSET))(this);
		}
	};
}
