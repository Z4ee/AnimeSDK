#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System::CodeDom { class CodeExpressionCollection; }
namespace System::CodeDom { class CodeMethodReferenceExpression; }

#define SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E96FD70)
#define SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E96FDF0)
#define SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1E96FDB0)
#define SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96FCF0)
#define SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E96FD30)
#define SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96FCB0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMethodInvokeExpression_TypeDefinitionIndex = 4265;

	class CodeMethodInvokeExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject, ::System::String* methodName, ::Il2CppArray<::System::CodeDom::CodeExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION__CTOR_1_OFFSET))(this, targetObject, methodName, parameters);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeMethodReferenceExpression* method, ::Il2CppArray<::System::CodeDom::CodeExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeMethodReferenceExpression*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION__CTOR_2_OFFSET))(this, method, parameters);
		}

		::System::CodeDom::CodeMethodReferenceExpression* get_Method()
		{
			return ((::System::CodeDom::CodeMethodReferenceExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::CodeDom::CodeMethodReferenceExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeMethodReferenceExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION_SET_METHOD_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpressionCollection* get_Parameters()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODINVOKEEXPRESSION_GET_PARAMETERS_OFFSET))(this);
		}
	};
}
