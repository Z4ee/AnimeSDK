#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

#define SYSTEM_CODEDOM_CODEPROPERTYSETVALUEREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FFD0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodePropertySetValueReferenceExpression_TypeDefinitionIndex = 4271;

	class CodePropertySetValueReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPROPERTYSETVALUEREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}
	};
}
