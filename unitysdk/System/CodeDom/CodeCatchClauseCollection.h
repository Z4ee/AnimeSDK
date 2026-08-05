#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeCatchClause; }

#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1D612AC0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1D612A80)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D612A40)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D612B00)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D612B40)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D6129C0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1D612B80)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1D612BC0)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D612C00)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D612A00)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D612940)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D612980)
#define SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D612900)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeCatchClauseCollection_TypeDefinitionIndex = 4247;

	class CodeCatchClauseCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeCatchClauseCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCatchClauseCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeCatchClause*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeCatchClause* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeCatchClause*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeCatchClause* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeCatchClause*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeCatchClause* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeCatchClause*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeCatchClauseCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCatchClauseCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeCatchClause*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeCatchClause* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeCatchClause*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeCatchClause*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeCatchClause*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeCatchClause* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeCatchClause*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeCatchClause* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeCatchClause*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeCatchClause* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeCatchClause*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECATCHCLAUSECOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
