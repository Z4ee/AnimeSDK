#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeNamespace; }

#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1DAAE8F0)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1DAAE8B0)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DAAE870)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DAAE930)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DAAE970)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAAE7F0)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DAAE9B0)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1DAAE9F0)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DAAEA30)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DAAE830)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAAE770)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DAAE7B0)
#define SYSTEM_CODEDOM_CODENAMESPACECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAE730)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeNamespaceCollection_TypeDefinitionIndex = 4059;

	class CodeNamespaceCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeNamespaceCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespaceCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeNamespace*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeNamespace*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeNamespace* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeNamespace*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeNamespace* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeNamespace* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeNamespaceCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespaceCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeNamespace*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeNamespace*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeNamespace* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeNamespace*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeNamespace*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeNamespace* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeNamespace* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeNamespace* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACECOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
