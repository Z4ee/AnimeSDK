#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::CodeDom { class CodeCompileUnit; }
namespace System::IO { class TextReader; }

#define SYSTEM_CODEDOM_COMPILER_CODEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A313ED0)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int CodeParser_TypeDefinitionIndex = 4291;

	class CodeParser : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_CODEPARSER__CTOR_OFFSET))(this);
		}
	};
}
