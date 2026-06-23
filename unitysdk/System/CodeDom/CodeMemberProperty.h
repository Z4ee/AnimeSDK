#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeTypeMember.h"

namespace System::CodeDom { class CodeParameterDeclarationExpressionCollection; }
namespace System::CodeDom { class CodeStatementCollection; }
namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_GETSTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1C64A400)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_HASGET_OFFSET UNITYSDK_OFFSET(0x1C64A440)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_HASSET_OFFSET UNITYSDK_OFFSET(0x1C64A4C0)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_IMPLEMENTATIONTYPES_OFFSET UNITYSDK_OFFSET(0x1C64A540)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C64A580)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_PRIVATEIMPLEMENTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C64A5C0)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_SETSTATEMENTS_OFFSET UNITYSDK_OFFSET(0x1C64A640)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C64A680)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_HASGET_OFFSET UNITYSDK_OFFSET(0x1C64A480)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_HASSET_OFFSET UNITYSDK_OFFSET(0x1C64A500)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_PRIVATEIMPLEMENTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C64A600)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1C64A6C0)
#define SYSTEM_CODEDOM_CODEMEMBERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64A3C0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMemberProperty_TypeDefinitionIndex = 4264;

	class CodeMemberProperty : public ::System::CodeDom::CodeTypeMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeStatementCollection* get_GetStatements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_GETSTATEMENTS_OFFSET))(this);
		}

		::System::Boolean get_HasGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_HASGET_OFFSET))(this);
		}

		::System::Void set_HasGet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_HASGET_OFFSET))(this, value);
		}

		::System::Boolean get_HasSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_HASSET_OFFSET))(this);
		}

		::System::Void set_HasSet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_HASSET_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_ImplementationTypes()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_IMPLEMENTATIONTYPES_OFFSET))(this);
		}

		::System::CodeDom::CodeParameterDeclarationExpressionCollection* get_Parameters()
		{
			return ((::System::CodeDom::CodeParameterDeclarationExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_PARAMETERS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReference* get_PrivateImplementationType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_PRIVATEIMPLEMENTATIONTYPE_OFFSET))(this);
		}

		::System::Void set_PrivateImplementationType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_PRIVATEIMPLEMENTATIONTYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeStatementCollection* get_SetStatements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_SETSTATEMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReference* get_Type()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERPROPERTY_SET_TYPE_OFFSET))(this, value);
		}
	};
}
