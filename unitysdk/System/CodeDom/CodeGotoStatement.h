#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }

#define SYSTEM_CODEDOM_CODEGOTOSTATEMENT_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1B1E1AA0)
#define SYSTEM_CODEDOM_CODEGOTOSTATEMENT_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x1B1E1AE0)
#define SYSTEM_CODEDOM_CODEGOTOSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E1A60)
#define SYSTEM_CODEDOM_CODEGOTOSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E1A20)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeGotoStatement_TypeDefinitionIndex = 4259;

	class CodeGotoStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEGOTOSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* label)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEGOTOSTATEMENT__CTOR_1_OFFSET))(this, label);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEGOTOSTATEMENT_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_Label(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEGOTOSTATEMENT_SET_LABEL_OFFSET))(this, value);
		}
	};
}
