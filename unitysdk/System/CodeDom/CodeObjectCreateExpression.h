#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeExpressionCollection; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION_GET_CREATETYPE_OFFSET UNITYSDK_OFFSET(0x1C64AB40)
#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C64ABC0)
#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION_SET_CREATETYPE_OFFSET UNITYSDK_OFFSET(0x1C64AB80)
#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C64AA80)
#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C64AAC0)
#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C64AB00)
#define SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64AA40)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeObjectCreateExpression_TypeDefinitionIndex = 4268;

	class CodeObjectCreateExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* createType, ::Il2CppArray<::System::CodeDom::CodeExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_1_OFFSET))(this, createType, parameters);
		}

		::System::Void _ctor_2(::System::String* createType, ::Il2CppArray<::System::CodeDom::CodeExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_2_OFFSET))(this, createType, parameters);
		}

		::System::Void _ctor_3(::System::Type* createType, ::Il2CppArray<::System::CodeDom::CodeExpression*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::CodeDom::CodeExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION__CTOR_3_OFFSET))(this, createType, parameters);
		}

		::System::CodeDom::CodeTypeReference* get_CreateType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION_GET_CREATETYPE_OFFSET))(this);
		}

		::System::Void set_CreateType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION_SET_CREATETYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpressionCollection* get_Parameters()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECTCREATEEXPRESSION_GET_PARAMETERS_OFFSET))(this);
		}
	};
}
