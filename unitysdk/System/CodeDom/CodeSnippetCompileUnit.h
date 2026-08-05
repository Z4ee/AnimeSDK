#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeCompileUnit.h"

namespace System { class String; }
namespace System::CodeDom { class CodeLinePragma; }

#define SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_GET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1D223D00)
#define SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D223D80)
#define SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_SET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1D223D40)
#define SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D223DC0)
#define SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D223CC0)
#define SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D223C80)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeSnippetCompileUnit_TypeDefinitionIndex = 4275;

	class CodeSnippetCompileUnit : public ::System::CodeDom::CodeCompileUnit
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT__CTOR_1_OFFSET))(this, value);
		}

		::System::CodeDom::CodeLinePragma* get_LinePragma()
		{
			return ((::System::CodeDom::CodeLinePragma*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_GET_LINEPRAGMA_OFFSET))(this);
		}

		::System::Void set_LinePragma(::System::CodeDom::CodeLinePragma* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeLinePragma*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_SET_LINEPRAGMA_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESNIPPETCOMPILEUNIT_SET_VALUE_OFFSET))(this, value);
		}
	};
}
