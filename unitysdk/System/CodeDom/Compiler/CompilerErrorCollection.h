#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom::Compiler { class CompilerError; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1A23D4B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1A23D470)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A23D430)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A23D4F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1A23D530)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x1A23D330)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_HASWARNINGS_OFFSET UNITYSDK_OFFSET(0x1A23D370)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A23D3B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A23D570)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1A23D5B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A23D5F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A23D3F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A23D2B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A23D2F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23D270)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerErrorCollection_TypeDefinitionIndex = 4025;

	class CompilerErrorCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::Compiler::CompilerErrorCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::CompilerErrorCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::CodeDom::Compiler::CompilerError*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::Compiler::CompilerError*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_2_OFFSET))(this, value);
		}

		::System::Boolean get_HasErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_HASERRORS_OFFSET))(this);
		}

		::System::Boolean get_HasWarnings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_HASWARNINGS_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CompilerError* get_Item(::System::Int32 index)
		{
			return ((::System::CodeDom::Compiler::CompilerError*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::CodeDom::Compiler::CompilerError* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::Compiler::CompilerError*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::CodeDom::Compiler::CompilerError* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::Compiler::CompilerError*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::CodeDom::Compiler::CompilerErrorCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::CompilerErrorCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::CodeDom::Compiler::CompilerError*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::Compiler::CompilerError*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::CodeDom::Compiler::CompilerError* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::CodeDom::Compiler::CompilerError*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::CodeDom::Compiler::CompilerError*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::CodeDom::Compiler::CompilerError*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::CodeDom::Compiler::CompilerError* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::CodeDom::Compiler::CompilerError*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::CodeDom::Compiler::CompilerError* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::CodeDom::Compiler::CompilerError*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::CodeDom::Compiler::CompilerError* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::CompilerError*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
