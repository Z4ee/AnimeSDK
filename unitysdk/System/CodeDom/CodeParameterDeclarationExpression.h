#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"
#include "unitysdk/System/CodeDom/FieldDirection.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D87E580)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1D87E600)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D87E680)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D87E700)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D87E5C0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1D87E640)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D87E6C0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D87E740)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D87E4C0)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D87E500)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D87E540)
#define SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87E480)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeParameterDeclarationExpression_TypeDefinitionIndex = 4083;

	class CodeParameterDeclarationExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_1_OFFSET))(this, type, name);
		}

		::System::Void _ctor_2(::System::String* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_2_OFFSET))(this, type, name);
		}

		::System::Void _ctor_3(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION__CTOR_3_OFFSET))(this, type, name);
		}

		::System::CodeDom::CodeAttributeDeclarationCollection* get_CustomAttributes()
		{
			return ((::System::CodeDom::CodeAttributeDeclarationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_CUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_CustomAttributes(::System::CodeDom::CodeAttributeDeclarationCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_CUSTOMATTRIBUTES_OFFSET))(this, value);
		}

		::System::CodeDom::FieldDirection get_Direction()
		{
			return ((::System::CodeDom::FieldDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::System::CodeDom::FieldDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::FieldDirection))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_NAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEPARAMETERDECLARATIONEXPRESSION_SET_TYPE_OFFSET))(this, value);
		}
	};
}
