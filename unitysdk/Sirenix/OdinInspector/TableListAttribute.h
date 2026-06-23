#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SCROLLVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E32AEE0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SHOWPAGINGHASVALUE_OFFSET UNITYSDK_OFFSET(0x1E32AED0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_GET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1E32AEB0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_SET_SCROLLVIEWHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E32AEF0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE_SET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1E32AEC0)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32AF50)
#define SIRENIX_ODININSPECTOR_TABLELISTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32AF00)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TableListAttribute_TypeDefinitionIndex = 7367;

	class TableListAttribute : public ::System::Attribute
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>** StaticGet_SyncVectors()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(TableListAttribute_TypeDefinitionIndex)->GetStaticField(0x6120);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_SyncRowHeights()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(TableListAttribute_TypeDefinitionIndex)->GetStaticField(0x6128);
		}
		::System::String* CustomToolbarGUI; // 0x10
		::System::String* CustomDelete; // 0x18
		::System::String* CustomAdd; // 0x20
		::System::Int32 SyncIndex; // 0x28
		::System::Boolean IsReadOnly; // 0x2C
		::System::Boolean ShowIndexLabels; // 0x2D
		::System::Int32 MinScrollViewHeight; // 0x30
		::System::Int32 CellPadding; // 0x34
		::System::Int32 DefaultMinColumnWidth; // 0x38
		::System::Boolean HideToolbar; // 0x3C
		::System::Boolean VerticalScrollLeader; // 0x3D
		::System::Boolean VerticalScrollFollower; // 0x3E
		::System::Boolean showPaging; // 0x3F
		::System::Boolean DrawHorizontalScrollView; // 0x40
		::System::Boolean showPagingHasValue; // 0x41
		::System::Boolean AlwaysExpanded; // 0x42
		::System::Boolean DrawScrollView; // 0x43
		::System::Boolean HideCustomToolbarWhenFolded; // 0x44
		::System::Boolean RowHeightFollower; // 0x45
		::System::Boolean RowHeightLeader; // 0x46
		::System::Single Offset; // 0x48
		::System::Int32 MaxScrollViewHeight; // 0x4C
		::System::Int32 NumberOfItemsPerPage; // 0x50
		::System::Int32 RowHeight; // 0x54

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
