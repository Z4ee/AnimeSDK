#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeStatement; }

#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x19EE57D0)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x19EE5790)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x19EE5750)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19EE5710)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19EE5810)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19EE5850)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EE5690)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19EE5890)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x19EE58D0)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19EE5910)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EE56D0)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EE5610)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19EE5650)
#define SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE55D0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeStatementCollection_TypeDefinitionIndex = 4071;

	class CodeStatementCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeStatementCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatementCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeStatement*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatement* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeStatement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Int32 Add_1(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADD_1_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeStatementCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatementCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeStatement*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeStatement*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeStatement*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeStatement*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeStatement* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeStatement*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENTCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
