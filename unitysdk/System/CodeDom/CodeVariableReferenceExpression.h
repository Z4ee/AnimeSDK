#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION_GET_VARIABLENAME_OFFSET UNITYSDK_OFFSET(0x1D5C9CB0)
#define SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION_SET_VARIABLENAME_OFFSET UNITYSDK_OFFSET(0x1D5C9CF0)
#define SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5C9C70)
#define SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9C30)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeVariableReferenceExpression_TypeDefinitionIndex = 4287;

	class CodeVariableReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* variableName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, variableName);
		}

		::System::String* get_VariableName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION_GET_VARIABLENAME_OFFSET))(this);
		}

		::System::Void set_VariableName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEREFERENCEEXPRESSION_SET_VARIABLENAME_OFFSET))(this, value);
		}
	};
}
