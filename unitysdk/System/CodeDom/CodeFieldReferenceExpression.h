#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_GET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x1B1B2160)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1B1B21E0)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_SET_FIELDNAME_OFFSET UNITYSDK_OFFSET(0x1B1B21A0)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0x1B1B2220)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1B2120)
#define SYSTEM_CODEDOM_CODEFIELDREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B20E0)

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
