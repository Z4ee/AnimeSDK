#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeMemberMethod.h"

#define SYSTEM_CODEDOM_CODEENTRYPOINTMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C008A40)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeEntryPointMethod_TypeDefinitionIndex = 4255;

	class CodeEntryPointMethod : public ::System::CodeDom::CodeMemberMethod
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEENTRYPOINTMETHOD__CTOR_OFFSET))(this);
		}
	};
}
