#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x19A407E0)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x19A40860)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_GET_TYPEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19A408E0)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_SET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x19A40820)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x19A408A0)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A40760)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19A407A0)
#define SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A40720)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMethodReferenceExpression_TypeDefinitionIndex = 4267;

	class CodeMethodReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, targetObject, methodName);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeExpression* targetObject, ::System::String* methodName, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>* typeParameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*, ::Il2CppArray<::System::CodeDom::CodeTypeReference*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION__CTOR_2_OFFSET))(this, targetObject, methodName, typeParameters);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_GET_METHODNAME_OFFSET))(this);
		}

		::System::Void set_MethodName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_SET_METHODNAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_TypeArguments()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMETHODREFERENCEEXPRESSION_GET_TYPEARGUMENTS_OFFSET))(this);
		}
	};
}
