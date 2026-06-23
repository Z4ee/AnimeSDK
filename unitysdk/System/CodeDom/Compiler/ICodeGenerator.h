#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/Compiler/GeneratorSupport.h"

namespace System { class String; }
namespace System::CodeDom { class CodeCompileUnit; }
namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeNamespace; }
namespace System::CodeDom { class CodeStatement; }
namespace System::CodeDom { class CodeTypeDeclaration; }
namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom::Compiler { class CodeGeneratorOptions; }
namespace System::IO { class TextWriter; }

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int ICodeGenerator_TypeDefinitionIndex = 4031;

	class ICodeGenerator
	{
	public:
	};
}
