#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeExpression.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x1C8882B0)
#define SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION_SET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x1C8882F0)
#define SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C888270)
#define SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C888230)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeArgumentReferenceExpression_TypeDefinitionIndex = 4099;

	class CodeArgumentReferenceExpression : public ::System::CodeDom::CodeExpression
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* parameterName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION__CTOR_1_OFFSET))(this, parameterName);
		}

		::System::String* get_ParameterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION_GET_PARAMETERNAME_OFFSET))(this);
		}

		::System::Void set_ParameterName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEARGUMENTREFERENCEEXPRESSION_SET_PARAMETERNAME_OFFSET))(this, value);
		}
	};
}
