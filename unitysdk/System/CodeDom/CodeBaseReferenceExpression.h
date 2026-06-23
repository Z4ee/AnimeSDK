#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

#define SYSTEM_CODEDOM_CODEBASEREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9230)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeBaseReferenceExpression_TypeDefinitionIndex = 4242;

	class CodeBaseReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEBASEREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
