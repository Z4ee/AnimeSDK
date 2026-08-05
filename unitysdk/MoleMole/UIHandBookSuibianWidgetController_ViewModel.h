#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
namespace MoleMole { class UIHandBookSuibianWidgetController_ItemRowData; }
namespace MoleMole { class UIHandBookSuibianWidgetController_SuibianStore; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_149;
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19F0E4B0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x19F0E570)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_STORELIST_OFFSET UNITYSDK_OFFSET(0x19F0E550)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19F0E590)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x19F0E4C0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0x19F0E580)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_STORELIST_OFFSET UNITYSDK_OFFSET(0x19F0E560)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0E410)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_0_OFFSET UNITYSDK_OFFSET(0x19F0E740)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_1_OFFSET UNITYSDK_OFFSET(0x19F0E750)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianWidgetController_ViewModel_TypeDefinitionIndex = 56469;

	class UIHandBookSuibianWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::Int32>* _level; // 0x80
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>* _rowDataList; // 0x88
		::Class_0_16E4307DCC41950C_14<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>* _StoreList_k__BackingField; // 0x90
		::Class_0_16E4307DCC419505_149<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>* _RowDataList_k__BackingField; // 0x98

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_159<::System::Int32>* get_Level()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::Class_0_16E4307DCC419505_159<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_LEVEL_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC41950C_14<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>* get_StoreList()
		{
			return ((::Class_0_16E4307DCC41950C_14<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_STORELIST_OFFSET))(this);
		}

		::System::Void set_StoreList(::Class_0_16E4307DCC41950C_14<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_14<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_STORELIST_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_149<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>* get_RowDataList()
		{
			return ((::Class_0_16E4307DCC419505_149<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_ROWDATALIST_OFFSET))(this);
		}

		::System::Void set_RowDataList(::Class_0_16E4307DCC419505_149<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_149<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_ROWDATALIST_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>* _OnCreateProperty_b__14_0()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_0_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__14_1(::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__14_1_OFFSET))(this, value);
		}
	};
}
