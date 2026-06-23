#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom::Compiler { class CompilerErrorCollection; }
namespace System::CodeDom::Compiler { class TempFileCollection; }
namespace System::Collections::Specialized { class StringCollection; }
namespace System::Reflection { class Assembly; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_COMPILEDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1B1B2420)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_ERRORS_OFFSET UNITYSDK_OFFSET(0x1B1B24A0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_EVIDENCE_OFFSET UNITYSDK_OFFSET(0x1B1B24E0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_NATIVECOMPILERRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1B1B2560)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1B1B25E0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_PATHTOASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1B1B2620)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_TEMPFILES_OFFSET UNITYSDK_OFFSET(0x1B1B26A0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_COMPILEDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1B1B2460)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_EVIDENCE_OFFSET UNITYSDK_OFFSET(0x1B1B2520)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_NATIVECOMPILERRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1B1B25A0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_PATHTOASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1B1B2660)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_TEMPFILES_OFFSET UNITYSDK_OFFSET(0x1B1B26E0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B23E0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerResults_TypeDefinitionIndex = 4029;

	class CompilerResults : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::CodeDom::Compiler::TempFileCollection* tempFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::TempFileCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS__CTOR_OFFSET))(this, tempFiles);
		}

		::System::Reflection::Assembly* get_CompiledAssembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_COMPILEDASSEMBLY_OFFSET))(this);
		}

		::System::Void set_CompiledAssembly(::System::Reflection::Assembly* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_COMPILEDASSEMBLY_OFFSET))(this, value);
		}

		::System::CodeDom::Compiler::CompilerErrorCollection* get_Errors()
		{
			return ((::System::CodeDom::Compiler::CompilerErrorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_ERRORS_OFFSET))(this);
		}

		::System::Security::Policy::Evidence* get_Evidence()
		{
			return ((::System::Security::Policy::Evidence*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_EVIDENCE_OFFSET))(this);
		}

		::System::Void set_Evidence(::System::Security::Policy::Evidence* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_EVIDENCE_OFFSET))(this, value);
		}

		::System::Int32 get_NativeCompilerReturnValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_NATIVECOMPILERRETURNVALUE_OFFSET))(this);
		}

		::System::Void set_NativeCompilerReturnValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_NATIVECOMPILERRETURNVALUE_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringCollection* get_Output()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_OUTPUT_OFFSET))(this);
		}

		::System::String* get_PathToAssembly()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_PATHTOASSEMBLY_OFFSET))(this);
		}

		::System::Void set_PathToAssembly(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_PATHTOASSEMBLY_OFFSET))(this, value);
		}

		::System::CodeDom::Compiler::TempFileCollection* get_TempFiles()
		{
			return ((::System::CodeDom::Compiler::TempFileCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_GET_TEMPFILES_OFFSET))(this);
		}

		::System::Void set_TempFiles(::System::CodeDom::Compiler::TempFileCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::Compiler::TempFileCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERRESULTS_SET_TEMPFILES_OFFSET))(this, value);
		}
	};
}
