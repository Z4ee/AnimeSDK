#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_COMPILER_GENERATEDCODEATTRIBUTE_GET_TOOL_OFFSET UNITYSDK_OFFSET(0x1B1E2470)
#define SYSTEM_CODEDOM_COMPILER_GENERATEDCODEATTRIBUTE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1B1E2480)
#define SYSTEM_CODEDOM_COMPILER_GENERATEDCODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E2460)

namespace System::CodeDom::Compiler
{
	inline static constexpr unsigned int GeneratedCodeAttribute_TypeDefinitionIndex = 3216;

	class GeneratedCodeAttribute : public ::System::Attribute
	{
	public:
		::System::String* tool; // 0x10
		::System::String* version; // 0x18

		::System::Void _ctor(::System::String* tool, ::System::String* version)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_GENERATEDCODEATTRIBUTE__CTOR_OFFSET))(this, tool, version);
		}

		::System::String* get_Tool()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_GENERATEDCODEATTRIBUTE_GET_TOOL_OFFSET))(this);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_COMPILER_GENERATEDCODEATTRIBUTE_GET_VERSION_OFFSET))(this);
		}
	};
}
