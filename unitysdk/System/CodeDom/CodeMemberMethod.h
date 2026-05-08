#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeTypeMember.h"

namespace System { class EventHandler; }
namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeParameterDeclarationExpressionCollection; }
namespace System::CodeDom { class CodeStatementCollection; }
namespace System::CodeDom { class CodeTypeParameterCollection; }
namespace System::CodeDom { class CodeTypeReference; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_ADD_POPULATEIMPLEMENTATIONTYPES_OFFSET UNITYSDK_OFFSET(0x19A405A0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_ADD_POPULATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19A40620)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_ADD_POPULATESTATEMENTS_OFFSET UNITYSDK_OFFSET(0x19A406A0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_IMPLEMENTATIONTYPES_OFFSET UNITYSDK_OFFSET(0x19A40360)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x19A403A0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_PRIVATEIMPLEMENTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x19A403E0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19A404E0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x19A40460)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_STATEMENTS_OFFSET UNITYSDK_OFFSET(0x19A40520)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_TYPEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19A40560)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_REMOVE_POPULATEIMPLEMENTATIONTYPES_OFFSET UNITYSDK_OFFSET(0x19A405E0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_REMOVE_POPULATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19A40660)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_REMOVE_POPULATESTATEMENTS_OFFSET UNITYSDK_OFFSET(0x19A406E0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_SET_PRIVATEIMPLEMENTATIONTYPE_OFFSET UNITYSDK_OFFSET(0x19A40420)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD_SET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x19A404A0)
#define SYSTEM_CODEDOM_CODEMEMBERMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A40320)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeMemberMethod_TypeDefinitionIndex = 4082;

	class CodeMemberMethod : public ::System::CodeDom::CodeTypeMember
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_ImplementationTypes()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_IMPLEMENTATIONTYPES_OFFSET))(this);
		}

		::System::CodeDom::CodeParameterDeclarationExpressionCollection* get_Parameters()
		{
			return ((::System::CodeDom::CodeParameterDeclarationExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_PARAMETERS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReference* get_PrivateImplementationType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_PRIVATEIMPLEMENTATIONTYPE_OFFSET))(this);
		}

		::System::Void set_PrivateImplementationType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_SET_PRIVATEIMPLEMENTATIONTYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeReference* get_ReturnType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Void set_ReturnType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_SET_RETURNTYPE_OFFSET))(this, value);
		}

		::System::CodeDom::CodeAttributeDeclarationCollection* get_ReturnTypeCustomAttributes()
		{
			return ((::System::CodeDom::CodeAttributeDeclarationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::CodeDom::CodeStatementCollection* get_Statements()
		{
			return ((::System::CodeDom::CodeStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_STATEMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeParameterCollection* get_TypeParameters()
		{
			return ((::System::CodeDom::CodeTypeParameterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_GET_TYPEPARAMETERS_OFFSET))(this);
		}

		::System::Void add_PopulateImplementationTypes(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_ADD_POPULATEIMPLEMENTATIONTYPES_OFFSET))(this, value);
		}

		::System::Void remove_PopulateImplementationTypes(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_REMOVE_POPULATEIMPLEMENTATIONTYPES_OFFSET))(this, value);
		}

		::System::Void add_PopulateParameters(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_ADD_POPULATEPARAMETERS_OFFSET))(this, value);
		}

		::System::Void remove_PopulateParameters(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_REMOVE_POPULATEPARAMETERS_OFFSET))(this, value);
		}

		::System::Void add_PopulateStatements(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_ADD_POPULATESTATEMENTS_OFFSET))(this, value);
		}

		::System::Void remove_PopulateStatements(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEMEMBERMETHOD_REMOVE_POPULATESTATEMENTS_OFFSET))(this, value);
		}
	};
}
