#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeDirectiveCollection; }
namespace System::CodeDom { class CodeNamespaceCollection; }
namespace System::Collections::Specialized { class StringCollection; }

#define SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_ASSEMBLYCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B3E7140)
#define SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_ENDDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x1B3E7180)
#define SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x1B3E71C0)
#define SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_REFERENCEDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x1B3E7200)
#define SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_STARTDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x1B3E7240)
#define SYSTEM_CODEDOM_CODECOMPILEUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E7130)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeCompileUnit_TypeDefinitionIndex = 3212;

	class CodeCompileUnit : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMPILEUNIT__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeAttributeDeclarationCollection* get_AssemblyCustomAttributes()
		{
			return ((::System::CodeDom::CodeAttributeDeclarationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_ASSEMBLYCUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::CodeDom::CodeDirectiveCollection* get_EndDirectives()
		{
			return ((::System::CodeDom::CodeDirectiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_ENDDIRECTIVES_OFFSET))(this);
		}

		::System::CodeDom::CodeNamespaceCollection* get_Namespaces()
		{
			return ((::System::CodeDom::CodeNamespaceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_NAMESPACES_OFFSET))(this);
		}

		::System::Collections::Specialized::StringCollection* get_ReferencedAssemblies()
		{
			return ((::System::Collections::Specialized::StringCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_REFERENCEDASSEMBLIES_OFFSET))(this);
		}

		::System::CodeDom::CodeDirectiveCollection* get_StartDirectives()
		{
			return ((::System::CodeDom::CodeDirectiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECOMPILEUNIT_GET_STARTDIRECTIVES_OFFSET))(this);
		}
	};
}
