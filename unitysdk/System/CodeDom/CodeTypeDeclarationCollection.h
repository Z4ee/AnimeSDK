#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom { class CodeTypeDeclaration; }

#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1A23D0F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1A23D0B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A23D070)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A23D130)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A23D170)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A23CFF0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A23D1B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1A23D1F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A23D230)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A23D030)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A23CF70)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A23CFB0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23CF30)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeDeclarationCollection_TypeDefinitionIndex = 4046;

	class CodeTypeDeclarationCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeDeclarationCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::CodeTypeDeclaration*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeDeclaration*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeDeclaration* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::CodeTypeDeclaration*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::CodeTypeDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::CodeTypeDeclaration* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::CodeTypeDeclarationCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::CodeTypeDeclaration*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeDeclaration*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::CodeTypeDeclaration* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::CodeTypeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::CodeTypeDeclaration*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::CodeTypeDeclaration*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::CodeTypeDeclaration* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::CodeTypeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::CodeTypeDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::CodeTypeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::CodeTypeDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATIONCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
