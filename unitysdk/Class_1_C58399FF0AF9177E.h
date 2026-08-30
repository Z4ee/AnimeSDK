#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B1C1CCEF5791333;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C58399FF0AF9177E_GET_FOCUSENTERCOUNT_OFFSET UNITYSDK_OFFSET(0xB6D0E60)
#define CLASS_1_C58399FF0AF9177E_GET_INITIALFOCUSITEM_OFFSET UNITYSDK_OFFSET(0xB6D1040)
#define CLASS_1_C58399FF0AF9177E_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xB6D0E40)
#define CLASS_1_C58399FF0AF9177E_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB6D0E50)
#define CLASS_1_C58399FF0AF9177E_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB6D1030)
#define CLASS_1_C58399FF0AF9177E_METHOD_1_325FB2092638A4A6_OFFSET UNITYSDK_OFFSET(0xB6D0E70)
#define CLASS_1_C58399FF0AF9177E__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D1050)

inline static constexpr unsigned int Class_1_C58399FF0AF9177E_TypeDefinitionIndex = 73369;

class Class_1_C58399FF0AF9177E : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::Class_1_1B1C1CCEF5791333*>* _InitialFocusItem_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1B1C1CCEF5791333*>* _Items_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::System::Boolean>* _IsFocused_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::System::Boolean>* _IsSelected_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::Int32>* _FocusEnterCount_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsFocused()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E_GET_ISFOCUSED_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsSelected()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E_GET_ISSELECTED_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_FocusEnterCount()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E_GET_FOCUSENTERCOUNT_OFFSET))(this);
	}

	::R3::Observable_1<::System::String*>* Method_1_325FB2092638A4A6()
	{
		return ((::R3::Observable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E_METHOD_1_325FB2092638A4A6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1B1C1CCEF5791333*>* get_Items()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1B1C1CCEF5791333*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E_GET_ITEMS_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::Class_1_1B1C1CCEF5791333*>* get_InitialFocusItem()
	{
		return ((::R3::ReactiveProperty_1<::Class_1_1B1C1CCEF5791333*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C58399FF0AF9177E_GET_INITIALFOCUSITEM_OFFSET))(this);
	}
};
