#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"
#include "unitysdk/System/CodeDom/MemberAttributes.h"

namespace System { class String; }
namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeCommentStatementCollection; }
namespace System::CodeDom { class CodeDirectiveCollection; }
namespace System::CodeDom { class CodeLinePragma; }

#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19A40AE0)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x19A40B60)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19A40BA0)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_ENDDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x19A40C20)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x19A40C60)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19A40CE0)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_GET_STARTDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x19A40D60)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19A40B20)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_SET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19A40BE0)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_SET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x19A40CA0)
#define SYSTEM_CODEDOM_CODETYPEMEMBER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19A40D20)
#define SYSTEM_CODEDOM_CODETYPEMEMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A40AA0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeMember_TypeDefinitionIndex = 4057;

	class CodeTypeMember : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER__CTOR_OFFSET))(this);
		}

		::System::CodeDom::MemberAttributes get_Attributes()
		{
			return ((::System::CodeDom::MemberAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::CodeDom::MemberAttributes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::MemberAttributes))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_SET_ATTRIBUTES_OFFSET))(this, value);
		}

		::System::CodeDom::CodeCommentStatementCollection* get_Comments()
		{
			return ((::System::CodeDom::CodeCommentStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_COMMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeAttributeDeclarationCollection* get_CustomAttributes()
		{
			return ((::System::CodeDom::CodeAttributeDeclarationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_CUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_CustomAttributes(::System::CodeDom::CodeAttributeDeclarationCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeAttributeDeclarationCollection*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_SET_CUSTOMATTRIBUTES_OFFSET))(this, value);
		}

		::System::CodeDom::CodeDirectiveCollection* get_EndDirectives()
		{
			return ((::System::CodeDom::CodeDirectiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_ENDDIRECTIVES_OFFSET))(this);
		}

		::System::CodeDom::CodeLinePragma* get_LinePragma()
		{
			return ((::System::CodeDom::CodeLinePragma*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_LINEPRAGMA_OFFSET))(this);
		}

		::System::Void set_LinePragma(::System::CodeDom::CodeLinePragma* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeLinePragma*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_SET_LINEPRAGMA_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_SET_NAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeDirectiveCollection* get_StartDirectives()
		{
			return ((::System::CodeDom::CodeDirectiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEMEMBER_GET_STARTDIRECTIVES_OFFSET))(this);
		}
	};
}
