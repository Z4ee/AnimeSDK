#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D3F3A9A29F5DD81;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9FDDE2816948DE8F_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xCA65300)
#define CLASS_1_9FDDE2816948DE8F_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xCA65310)
#define CLASS_1_9FDDE2816948DE8F__CTOR_OFFSET UNITYSDK_OFFSET(0xCA65320)

inline static constexpr unsigned int Class_1_9FDDE2816948DE8F_TypeDefinitionIndex = 73333;

class Class_1_9FDDE2816948DE8F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* LNAEGNAAGII; // 0x10
	::ObservableCollections::ObservableList_1<::Class_1_4D3F3A9A29F5DD81*>* _Items_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FDDE2816948DE8F__CTOR_OFFSET))(this);
	}

	::ObservableCollections::ObservableList_1<::Class_1_4D3F3A9A29F5DD81*>* get_Items()
	{
		return ((::ObservableCollections::ObservableList_1<::Class_1_4D3F3A9A29F5DD81*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FDDE2816948DE8F_GET_ITEMS_OFFSET))(this);
	}

	::System::Void set_Items(::ObservableCollections::ObservableList_1<::Class_1_4D3F3A9A29F5DD81*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::Class_1_4D3F3A9A29F5DD81*>*))((::PBYTE)hIl2Cpp + CLASS_1_9FDDE2816948DE8F_SET_ITEMS_OFFSET))(this, a1);
	}
};
