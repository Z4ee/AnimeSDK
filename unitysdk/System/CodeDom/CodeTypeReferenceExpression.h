#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C486F60)
#define SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C486FA0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C486EA0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C486EE0)
#define SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C486F20)
#define SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C486E60)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeReferenceExpression_TypeDefinitionIndex = 4285;

	class CodeTypeReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, type);
		}

		::System::Void _ctor_2(::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_2_OFFSET))(this, type);
		}

		::System::Void _ctor_3(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION__CTOR_3_OFFSET))(this, type);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEREFERENCEEXPRESSION_SET_TYPE_OFFSET))(this, value);
		}
	};
}
