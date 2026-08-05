#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT_GET_TOTHROW_OFFSET UNITYSDK_OFFSET(0x1DD0F360)
#define SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT_SET_TOTHROW_OFFSET UNITYSDK_OFFSET(0x1DD0F3A0)
#define SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD0F320)
#define SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0F2E0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeThrowExceptionStatement_TypeDefinitionIndex = 4280;

	class CodeThrowExceptionStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* toThrow)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT__CTOR_1_OFFSET))(this, toThrow);
		}

		::System::CodeDom::CodeExpression* get_ToThrow()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT_GET_TOTHROW_OFFSET))(this);
		}

		::System::Void set_ToThrow(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETHROWEXCEPTIONSTATEMENT_SET_TOTHROW_OFFSET))(this, value);
		}
	};
}
