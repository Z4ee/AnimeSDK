#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeStatement.h"

namespace System { class String; }
namespace System::CodeDom { class CodeComment; }

#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENT_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1D5C9370)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENT_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1D5C93B0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5C92B0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D5C92F0)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D5C9330)
#define SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9270)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeCommentStatement_TypeDefinitionIndex = 4037;

	class CodeCommentStatement : public ::System::CodeDom::CodeStatement
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeComment* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeComment*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_1_OFFSET))(this, comment);
		}

		::System::Void _ctor_2(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_2_OFFSET))(this, text);
		}

		::System::Void _ctor_3(::System::String* text, ::System::Boolean docComment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENT__CTOR_3_OFFSET))(this, text, docComment);
		}

		::System::CodeDom::CodeComment* get_Comment()
		{
			return ((::System::CodeDom::CodeComment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENT_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::CodeDom::CodeComment* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeComment*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMMENTSTATEMENT_SET_COMMENT_OFFSET))(this, value);
		}
	};
}
