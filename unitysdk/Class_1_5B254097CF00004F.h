#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C55AEAF8486FB7B9;
class Class_1_E3C2EEB93C1BBB05;
namespace ObservableCollections { template <typename T> class ObservableList_1; }

#define CLASS_1_5B254097CF00004F_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x15C1B5C0)
#define CLASS_1_5B254097CF00004F_GET_TOTALAMOUNT_OFFSET UNITYSDK_OFFSET(0x15C1B5A0)
#define CLASS_1_5B254097CF00004F_GET_TOTALCURRENCY_OFFSET UNITYSDK_OFFSET(0x15C1B580)
#define CLASS_1_5B254097CF00004F_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x15C1B5D0)
#define CLASS_1_5B254097CF00004F_SET_TOTALAMOUNT_OFFSET UNITYSDK_OFFSET(0x15C1B5B0)
#define CLASS_1_5B254097CF00004F_SET_TOTALCURRENCY_OFFSET UNITYSDK_OFFSET(0x15C1B590)
#define CLASS_1_5B254097CF00004F__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1B5E0)

inline static constexpr unsigned int Class_1_5B254097CF00004F_TypeDefinitionIndex = 79721;

class Class_1_5B254097CF00004F : public ::System::Object
{
public:
	::ObservableCollections::ObservableList_1<::Class_1_E3C2EEB93C1BBB05*>* _Items_k__BackingField; // 0x10
	::Class_1_C55AEAF8486FB7B9* _TotalCurrency_k__BackingField; // 0x18
	::System::UInt32 _TotalAmount_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F__CTOR_OFFSET))(this);
	}

	::Class_1_C55AEAF8486FB7B9* get_TotalCurrency()
	{
		return ((::Class_1_C55AEAF8486FB7B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F_GET_TOTALCURRENCY_OFFSET))(this);
	}

	::System::Void set_TotalCurrency(::Class_1_C55AEAF8486FB7B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C55AEAF8486FB7B9*))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F_SET_TOTALCURRENCY_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalAmount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F_GET_TOTALAMOUNT_OFFSET))(this);
	}

	::System::Void set_TotalAmount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F_SET_TOTALAMOUNT_OFFSET))(this, a1);
	}

	::ObservableCollections::ObservableList_1<::Class_1_E3C2EEB93C1BBB05*>* get_Items()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_1_E3C2EEB93C1BBB05*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F_GET_ITEMS_OFFSET))(this);
	}

	::System::Void set_Items(::ObservableCollections::ObservableList_1<::Class_1_E3C2EEB93C1BBB05*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::Class_1_E3C2EEB93C1BBB05*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B254097CF00004F_SET_ITEMS_OFFSET))(this, a1);
	}
};
