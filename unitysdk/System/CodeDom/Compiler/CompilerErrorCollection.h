#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::CodeDom::Compiler { class CompilerError; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1C64B1C0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1C64B180)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C64B140)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C64B200)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C64B240)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x1C64B040)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_HASWARNINGS_OFFSET UNITYSDK_OFFSET(0x1C64B080)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C64B0C0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C64B280)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1C64B2C0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C64B300)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C64B100)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C64AFC0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C64B000)
#define SYSTEM_CODEDOM_COMPILER_COMPILERERRORCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64AF80)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerErrorCollection_TypeDefinitionIndex = 4024;

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
