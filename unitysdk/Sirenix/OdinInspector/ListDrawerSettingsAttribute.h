#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770BD0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEITEMS_OFFSET UNITYSDK_OFFSET(0x1F770AA0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770BF0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F770B40)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1F770B20)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLYHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770BE0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1F770AE0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGEHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770BC0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGE_OFFSET UNITYSDK_OFFSET(0x1F770AC0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ONTITLEBARGUI_OFFSET UNITYSDK_OFFSET(0x1F770B80)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_PAGINGHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770BA0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELSHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770C00)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELS_OFFSET UNITYSDK_OFFSET(0x1F770B60)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNTHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F770BB0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1F770B00)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1F770A80)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_DRAGGABLEITEMS_OFFSET UNITYSDK_OFFSET(0x1F770AB0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1F770B50)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1F770B30)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1F770AF0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_NUMBEROFITEMSPERPAGE_OFFSET UNITYSDK_OFFSET(0x1F770AD0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ONTITLEBARGUI_OFFSET UNITYSDK_OFFSET(0x1F770B90)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWINDEXLABELS_OFFSET UNITYSDK_OFFSET(0x1F770B70)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1F770B10)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1F770A90)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770C10)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ListDrawerSettingsAttribute_TypeDefinitionIndex = 7329;

	class ListDrawerSettingsAttribute : public ::System::Attribute
	{
	public:
		::System::String* CustomRemoveElementFunction; // 0x10
		::System::String* PagingController; // 0x18
		::System::String* onTitleBarGUI; // 0x20
		::System::String* OriginalItemHandlerIdentifier; // 0x28
		::System::String* CustomRemoveIndexFunction; // 0x30
		::System::String* OnListElementAdd; // 0x38
		::System::String* OnBeginListElementGUI; // 0x40
		::System::String* CustomRemoveElementFunction4Array; // 0x48
		::System::String* OnEndListElementGUI; // 0x50
		::System::String* ListElementLabelName; // 0x58
		::System::String* AddItemHandlerIdentifier; // 0x60
		::System::String* CustomAddFunction; // 0x68
		::System::Int32 expandedLevel; // 0x70
		::System::Boolean showItemCount; // 0x74
		::System::Boolean AlwaysAddDefaultValue; // 0x75
		::System::Boolean draggableHasValue; // 0x76
		::System::Boolean pagingHasValue; // 0x77
		::System::Int32 numberOfItemsPerPage; // 0x78
		::System::Boolean HideAddButton; // 0x7C
		::System::Boolean showIndexLabelsHasValue; // 0x7D
		::System::Boolean showItemCountHasValue; // 0x7E
		::System::Boolean AddCopiesLastElement; // 0x7F
		::System::Boolean expanded; // 0x80
		::System::Boolean draggable; // 0x81
		::System::Boolean isReadOnly; // 0x82
		::System::Boolean expandedHasValue; // 0x83
		::System::Boolean paging; // 0x84
		::System::Boolean isReadOnlyHasValue; // 0x85
		::System::Boolean numberOfItemsPerPageHasValue; // 0x86
		::System::Boolean HideRemoveButton; // 0x87
		::System::Boolean showIndexLabels; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowPaging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWPAGING_OFFSET))(this);
		}

		::System::Void set_ShowPaging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWPAGING_OFFSET))(this, value);
		}

		::System::Boolean get_DraggableItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEITEMS_OFFSET))(this);
		}

		::System::Void set_DraggableItems(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_DRAGGABLEITEMS_OFFSET))(this, value);
		}

		::System::Int32 get_NumberOfItemsPerPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGE_OFFSET))(this);
		}

		::System::Void set_NumberOfItemsPerPage(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_NUMBEROFITEMSPERPAGE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void set_IsReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ISREADONLY_OFFSET))(this, value);
		}

		::System::Boolean get_ShowItemCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ShowItemCount(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWITEMCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDED_OFFSET))(this);
		}

		::System::Void set_Expanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDED_OFFSET))(this, value);
		}

		::System::Int32 get_ExpandedLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDLEVEL_OFFSET))(this);
		}

		::System::Void set_ExpandedLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDEDLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_ShowIndexLabels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELS_OFFSET))(this);
		}

		::System::Void set_ShowIndexLabels(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWINDEXLABELS_OFFSET))(this, value);
		}

		::System::String* get_OnTitleBarGUI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ONTITLEBARGUI_OFFSET))(this);
		}

		::System::Void set_OnTitleBarGUI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ONTITLEBARGUI_OFFSET))(this, value);
		}

		::System::Boolean get_PagingHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_PAGINGHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_ShowItemCountHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNTHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_NumberOfItemsPerPageHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGEHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_DraggableHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnlyHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLYHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_ExpandedHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_ShowIndexLabelsHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELSHASVALUE_OFFSET))(this);
		}
	};
}
