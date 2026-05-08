#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SCROLLVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C021BE0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SHOWPAGINGHASVALUE_OFFSET UNITYSDK_OFFSET(0x1C021BD0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1C021BB0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_SET_SCROLLVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C021BF0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_SET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1C021BC0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C021C50)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021C00)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableListAttribute_TypeDefinitionIndex = 7236;

	class TableListAttribute : public ::System::Attribute
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>** StaticGet_SyncVectors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(TableListAttribute_TypeDefinitionIndex)->GetStaticField(0x6030);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_SyncRowHeights()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(TableListAttribute_TypeDefinitionIndex)->GetStaticField(0x6038);
		}
		::System::String* CustomDelete; // 0x10
		::System::String* CustomAdd; // 0x18
		::System::String* CustomToolbarGUI; // 0x20
		::System::Int32 RowHeight; // 0x28
		::System::Boolean ShowIndexLabels; // 0x2C
		::System::Boolean RowHeightLeader; // 0x2D
		::System::Boolean DrawScrollView; // 0x2E
		::System::Boolean VerticalScrollFollower; // 0x2F
		::System::Boolean showPagingHasValue; // 0x30
		::System::Boolean HideToolbar; // 0x31
		::System::Boolean HideCustomToolbarWhenFolded; // 0x32
		::System::Single Offset; // 0x34
		::System::Int32 MaxScrollViewHeight; // 0x38
		::System::Int32 CellPadding; // 0x3C
		::System::Int32 DefaultMinColumnWidth; // 0x40
		::System::Int32 NumberOfItemsPerPage; // 0x44
		::System::Int32 MinScrollViewHeight; // 0x48
		::System::Boolean showPaging; // 0x4C
		::System::Boolean DrawHorizontalScrollView; // 0x4D
		::System::Boolean IsReadOnly; // 0x4E
		::System::Boolean RowHeightFollower; // 0x4F
		::System::Boolean AlwaysExpanded; // 0x50
		::System::Boolean VerticalScrollLeader; // 0x51
		::System::Int32 SyncIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE__CCTOR_OFFSET))();
		}

		::System::Boolean get_ShowPaging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SHOWPAGING_OFFSET))(this);
		}

		::System::Void set_ShowPaging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_SET_SHOWPAGING_OFFSET))(this, value);
		}

		::System::Boolean get_ShowPagingHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SHOWPAGINGHASVALUE_OFFSET))(this);
		}

		::System::Int32 get_ScrollViewHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SCROLLVIEWHEIGHT_OFFSET))(this);
		}

		::System::Void set_ScrollViewHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_SET_SCROLLVIEWHEIGHT_OFFSET))(this, value);
		}
	};
}
