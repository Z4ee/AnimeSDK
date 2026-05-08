#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

#define SYSTEM_CODEDOM_CODEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19201510)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeExpression_TypeDefinitionIndex = 4034;

	class CodeExpression : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
