#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x19EE5350)
#define SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x19EE5390)
#define SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EE5310)
#define SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE52D0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeDefaultValueExpression_TypeDefinitionIndex = 4252;

	class CodeDefaultValueExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION__CTOR_1_OFFSET))(this, type);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDEFAULTVALUEEXPRESSION_SET_TYPE_OFFSET))(this, value);
		}
	};
}
