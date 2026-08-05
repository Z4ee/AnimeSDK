#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom { class CodeExpression; }

#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3EF0D0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D3EF150)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3EF110)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D3EF190)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3EF050)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3EF090)
#define SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF010)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeAttributeArgument_TypeDefinitionIndex = 4051;

	class CodeAttributeArgument : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::String* name, ::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT__CTOR_2_OFFSET))(this, name, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_SET_NAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeExpression* get_Value()
		{
			return ((::System::CodeDom::CodeExpression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::CodeDom::CodeExpression* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeExpression*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEARGUMENT_SET_VALUE_OFFSET))(this, value);
		}
	};
}
