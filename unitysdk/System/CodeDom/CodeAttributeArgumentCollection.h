#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeAttributeArgument; }

#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1C1BC970)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1C1BC930)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C1BC8F0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C1BC9B0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C1BC9F0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C1BC870)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C1BCA30)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1C1BCA70)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C1BCAB0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C1BC8B0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1BC7F0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C1BC830)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1BC7B0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeAttributeArgumentCollection_TypeDefinitionIndex = 4052;

	class CodeAttributeArgumentCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeAttributeArgumentCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeArgumentCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeAttributeArgument* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeAttributeArgument*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeAttributeArgument* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeAttributeArgument* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeAttributeArgumentCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeArgumentCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeAttributeArgument* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeAttributeArgument* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeAttributeArgument* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeAttributeArgument* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeArgument*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENTCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
