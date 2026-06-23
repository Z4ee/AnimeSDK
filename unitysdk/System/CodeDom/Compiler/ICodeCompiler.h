#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::CodeDom { class CodeCompileUnit; }
namespace System::CodeDom::Compiler { class CompilerParameters; }
namespace System::CodeDom::Compiler { class CompilerResults; }

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int ICodeCompiler_TypeDefinitionIndex = 4030;

	class ICodeCompiler
	{
	public:
	};
}
