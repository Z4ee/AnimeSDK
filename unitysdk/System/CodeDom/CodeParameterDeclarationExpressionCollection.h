#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeParameterDeclarationExpression; }

#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1CEC0370)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1CEC0330)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1CEC02F0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CEC03B0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CEC03F0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CEC0270)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1CEC0430)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1CEC0470)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CEC04B0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CEC02B0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEC01F0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CEC0230)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC01B0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeParameterDeclarationExpressionCollection_TypeDefinitionIndex = 4082;

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
