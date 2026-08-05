#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom::Compiler { class CodeDomProvider; }
namespace System::CodeDom::Compiler { class CompilerParameters; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_CREATEDEFAULTCOMPILERPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E9704B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_CREATEPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1E970530)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_CREATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x1E9704F0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GETEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1E970570)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GETLANGUAGES_OFFSET UNITYSDK_OFFSET(0x1E9705B0)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GET_CODEDOMPROVIDERTYPE_OFFSET UNITYSDK_OFFSET(0x1E970430)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GET_ISCODEDOMPROVIDERTYPEVALID_OFFSET UNITYSDK_OFFSET(0x1E970470)
#define SYSTEM_CODEDOM_COMPILER_COMPILERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9703F0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CompilerInfo_TypeDefinitionIndex = 4058;

	class CompilerInfo : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO__CTOR_OFFSET))(this);
		}

		::System::Type* get_CodeDomProviderType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GET_CODEDOMPROVIDERTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsCodeDomProviderTypeValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GET_ISCODEDOMPROVIDERTYPEVALID_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CompilerParameters* CreateDefaultCompilerParameters()
		{
			return ((::System::CodeDom::Compiler::CompilerParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_CREATEDEFAULTCOMPILERPARAMETERS_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CodeDomProvider* CreateProvider()
		{
			return ((::System::CodeDom::Compiler::CodeDomProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_CREATEPROVIDER_OFFSET))(this);
		}

		::System::CodeDom::Compiler::CodeDomProvider* CreateProvider_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* providerOptions)
		{
			return ((::System::CodeDom::Compiler::CodeDomProvider*(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_CREATEPROVIDER_1_OFFSET))(this, providerOptions);
		}

		::Il2CppArray<::System::String*>* GetExtensions()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GETEXTENSIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetLanguages()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_COMPILERINFO_GETLANGUAGES_OFFSET))(this);
		}
	};
}
