#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_GET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1A7D2F20)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1A7D2FA0)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1A7D3020)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_SET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1A7D2F60)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_SET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1A7D2FE0)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1A7D3060)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7D2EE0)
#define SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D2EA0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeDelegateCreateExpression_TypeDefinitionIndex = 4253;

	class CodeDelegateCreateExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* delegateType, ::System::CodeDom::CodeExpression* targetObject, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::CodeDom::CodeExpression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION__CTOR_1_OFFSET))(this, delegateType, targetObject, methodName);
		}

		::System::CodeDom::CodeTypeReference* get_DelegateType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_GET_DELEGATETYPE_OFFSET))(this);
		}

		::System::Void set_DelegateType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_SET_DELEGATETYPE_OFFSET))(this, value);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_GET_METHODNAME_OFFSET))(this);
		}

		::System::Void set_MethodName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_SET_METHODNAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEDELEGATECREATEEXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}
	};
}
