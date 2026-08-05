#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

#define SYSTEM_CODEDOM_CODEDIRECTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0EC20)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeDirective_TypeDefinitionIndex = 4040;

	class CodeDirective : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDIRECTIVE__CTOR_OFFSET))(this);
		}
	};
}
