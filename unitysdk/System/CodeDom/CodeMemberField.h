#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeTypeMember.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeExpression; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEMEMBERFIELD_GET_INITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A0F33C0)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A0F3440)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD_SET_INITEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A0F3400)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A0F3480)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0F3300)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A0F3340)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A0F3380)
#define SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F32C0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMemberField_TypeDefinitionIndex = 4264;

	class CodeMemberField : public ::System::CodeDom::CodeTypeMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_1_OFFSET))(this, type, name);
		}

		::System::Void _ctor_2(::System::String* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_2_OFFSET))(this, type, name);
		}

		::System::Void _ctor_3(::System::Type* type, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD__CTOR_3_OFFSET))(this, type, name);
		}

		::System::CodeDom::CodeExpression* get_InitExpression()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD_GET_INITEXPRESSION_OFFSET))(this);
		}

		::System::Void set_InitExpression(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD_SET_INITEXPRESSION_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERFIELD_SET_TYPE_OFFSET))(this, value);
		}
	};
}
