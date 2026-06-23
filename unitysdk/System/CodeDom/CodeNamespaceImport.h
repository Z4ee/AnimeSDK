#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

namespace System { class String; }
namespace System::CodeDom { class CodeLinePragma; }

#define SYSTEM_CODEDOM_CODENAMESPACEIMPORT_GET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1B73A850)
#define SYSTEM_CODEDOM_CODENAMESPACEIMPORT_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B73A8D0)
#define SYSTEM_CODEDOM_CODENAMESPACEIMPORT_SET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1B73A890)
#define SYSTEM_CODEDOM_CODENAMESPACEIMPORT_SET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B73A910)
#define SYSTEM_CODEDOM_CODENAMESPACEIMPORT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B73A810)
#define SYSTEM_CODEDOM_CODENAMESPACEIMPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73A7D0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeNamespaceImport_TypeDefinitionIndex = 4044;

	class CodeNamespaceImport : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACEIMPORT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* nameSpace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACEIMPORT__CTOR_1_OFFSET))(this, nameSpace);
		}

		::System::CodeDom::CodeLinePragma* get_LinePragma()
		{
			return ((::System::CodeDom::CodeLinePragma*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACEIMPORT_GET_LINEPRAGMA_OFFSET))(this);
		}

		::System::Void set_LinePragma(::System::CodeDom::CodeLinePragma* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeLinePragma*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACEIMPORT_SET_LINEPRAGMA_OFFSET))(this, value);
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACEIMPORT_GET_NAMESPACE_OFFSET))(this);
		}

		::System::Void set_Namespace(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACEIMPORT_SET_NAMESPACE_OFFSET))(this, value);
		}
	};
}
