#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_GET_INITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1D3EF8D0)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3EF950)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D3EF9D0)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_SET_INITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1D3EF910)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3EF990)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D3EFA10)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3EF750)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3EF790)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D3EF7D0)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D3EF810)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D3EF850)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D3EF890)
#define SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF710)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeVariableDeclarationStatement_TypeDefinitionIndex = 4286;

	class CodeVariableDeclarationStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_1_OFFSET))(this, type, name);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeTypeReference* type, ::System::String* name, ::System::CodeDom::CodeExpression* initExpression)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_2_OFFSET))(this, type, name, initExpression);
		}

		::System::Void _ctor_3(::System::String* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_3_OFFSET))(this, type, name);
		}

		::System::Void _ctor_4(::System::String* type, ::System::String* name, ::System::CodeDom::CodeExpression* initExpression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_4_OFFSET))(this, type, name, initExpression);
		}

		::System::Void _ctor_5(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_5_OFFSET))(this, type, name);
		}

		::System::Void _ctor_6(::System::Type* type, ::System::String* name, ::System::CodeDom::CodeExpression* initExpression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT__CTOR_6_OFFSET))(this, type, name, initExpression);
		}

		::System::CodeDom::CodeExpression* get_InitExpression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_GET_INITEXPRESSION_OFFSET))(this);
		}

		::System::Void set_InitExpression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_SET_INITEXPRESSION_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_SET_NAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEVARIABLEDECLARATIONSTATEMENT_SET_TYPE_OFFSET))(this, value);
		}
	};
}
