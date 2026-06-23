#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1CAE6410)
#define SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1CAE6490)
#define SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_SET_LEFT_OFFSET UNITYSDK_OFFSET(0x1CAE6450)
#define SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1CAE64D0)
#define SYSTEM_CODEDOM_CODEASSIGNSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CAE63D0)
#define SYSTEM_CODEDOM_CODEASSIGNSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE6390)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeAssignStatement_TypeDefinitionIndex = 4239;

	class CodeAssignStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEASSIGNSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* left, ::System::CodeDom::CodeExpression* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEASSIGNSTATEMENT__CTOR_1_OFFSET))(this, left, right);
		}

		::System::CodeDom::CodeExpression* get_Left()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_GET_LEFT_OFFSET))(this);
		}

		::System::Void set_Left(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_SET_LEFT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Right()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_Right(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEASSIGNSTATEMENT_SET_RIGHT_OFFSET))(this, value);
		}
	};
}
