#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

#define SYSTEM_CODEDOM_CODEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8631D0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeExpression_TypeDefinitionIndex = 4033;

	class CodeExpression : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
