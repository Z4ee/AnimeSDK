#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1DD0EE20)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1DD0EDE0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1DD0EDA0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DD0EE60)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DD0EEA0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DD0ED20)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1DD0EEE0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1DD0EF20)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DD0EF60)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DD0ED60)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD0ECA0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DD0ECE0)
#define SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0EC60)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeExpressionCollection_TypeDefinitionIndex = 4237;

	class CodeExpressionCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpressionCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpressionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeExpression*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeExpressionCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpressionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeExpression*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeExpression*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeExpression*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSIONCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
