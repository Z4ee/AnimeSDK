#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_GET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x1C6F2B90)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6F2C10)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_SET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x1C6F2BD0)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6F2C50)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6F2B50)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F2B10)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeFieldReferenceExpression_TypeDefinitionIndex = 4257;

	class CodeFieldReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* targetObject, ::System::String* fieldName)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, targetObject, fieldName);
		}

		::System::String* get_FieldName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_GET_FIELDNAME_OFFSET))(this);
		}

		::System::Void set_FieldName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_SET_FIELDNAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_TargetObject()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET))(this, value);
		}
	};
}
