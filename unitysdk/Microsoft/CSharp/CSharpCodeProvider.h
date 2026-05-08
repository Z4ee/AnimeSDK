#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/Compiler/CodeDomProvider.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeTypeMember; }
namespace System::CodeDom::Compiler { class CodeGeneratorOptions; }
namespace System::CodeDom::Compiler { class ICodeCompiler; }
namespace System::CodeDom::Compiler { class ICodeGenerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::ComponentModel { class TypeConverter; }
namespace System::IO { class TextWriter; }

#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_CREATECOMPILER_OFFSET UNITYSDK_OFFSET(0x1938C950)
#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_CREATEGENERATOR_OFFSET UNITYSDK_OFFSET(0x1938C990)
#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_GENERATECODEFROMMEMBER_OFFSET UNITYSDK_OFFSET(0x1938C9D0)
#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1938CA10)
#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER_GET_FILEEXTENSION_OFFSET UNITYSDK_OFFSET(0x1938C910)
#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1938C8D0)
#define MICROSOFT_CSHARP_CSHARPCODEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1938C890)

namespace Microsoft::CSharp
{
	inline static constexpr unsigned int CSharpCodeProvider_TypeDefinitionIndex = 4314;

	class CSharpCodeProvider : public ::System::CodeDom::Compiler::CodeDomProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* providerOptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER__CTOR_1_OFFSET))(this, providerOptions);
		}

		::System::String* get_FileExtension()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_GET_FILEEXTENSION_OFFSET))(this);
		}

		::System::CodeDom::Compiler::ICodeCompiler* CreateCompiler()
		{
			return ((::System::CodeDom::Compiler::ICodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_CREATECOMPILER_OFFSET))(this);
		}

		::System::CodeDom::Compiler::ICodeGenerator* CreateGenerator()
		{
			return ((::System::CodeDom::Compiler::ICodeGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_CREATEGENERATOR_OFFSET))(this);
		}

		::System::Void GenerateCodeFromMember(::System::CodeDom::CodeTypeMember* member, ::System::IO::TextWriter* writer, ::System::CodeDom::Compiler::CodeGeneratorOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeMember*, ::System::IO::TextWriter*, ::System::CodeDom::Compiler::CodeGeneratorOptions*))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_GENERATECODEFROMMEMBER_OFFSET))(this, member, writer, options);
		}

		::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type)
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_CSHARPCODEPROVIDER_GETCONVERTER_OFFSET))(this, type);
		}
	};
}
