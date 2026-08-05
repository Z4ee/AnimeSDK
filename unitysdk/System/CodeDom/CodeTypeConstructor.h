#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeMemberMethod.h"

#define SYSTEM_CODEDOM_CODETYPECONSTRUCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87E780)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeConstructor_TypeDefinitionIndex = 4282;

	class CodeTypeConstructor : public ::System::CodeDom::CodeMemberMethod
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPECONSTRUCTOR__CTOR_OFFSET))(this);
		}
	};
}
