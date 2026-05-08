#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeParameterDeclarationExpression; }

#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1AA8EC40)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1AA8EC00)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1AA8EBC0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AA8EC80)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AA8ECC0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AA8EB40)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AA8ED00)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1AA8ED40)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AA8ED80)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AA8EB80)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA8EAC0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AA8EB00)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8EA80)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeParameterDeclarationExpressionCollection_TypeDefinitionIndex = 4083;

	class CodeParameterDeclarationExpressionCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeParameterDeclarationExpressionCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpressionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeParameterDeclarationExpression*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeParameterDeclarationExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeParameterDeclarationExpression* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeParameterDeclarationExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeParameterDeclarationExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeParameterDeclarationExpression* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeParameterDeclarationExpressionCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpressionCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeParameterDeclarationExpression*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeParameterDeclarationExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeParameterDeclarationExpression* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeParameterDeclarationExpression*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeParameterDeclarationExpression*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeParameterDeclarationExpression* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeParameterDeclarationExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeParameterDeclarationExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeParameterDeclarationExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
