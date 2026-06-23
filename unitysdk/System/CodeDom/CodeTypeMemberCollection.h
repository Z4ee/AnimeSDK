#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeTypeMember; }

#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1CAE7450)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1CAE7410)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CAE73D0)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CAE7490)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CAE74D0)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CAE7350)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1CAE7510)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1CAE7550)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CAE7590)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CAE7390)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAE72D0)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CAE7310)
#define SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE7290)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeMemberCollection_TypeDefinitionIndex = 4060;

	class CodeTypeMemberCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeMemberCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeMemberCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeTypeMember*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeMember*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeMember* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeTypeMember*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeTypeMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeTypeMember* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeTypeMemberCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeMemberCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeTypeMember*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeMember*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeTypeMember* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeTypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeTypeMember*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeMember*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeTypeMember* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeTypeMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeTypeMember* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeMember*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBERCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
