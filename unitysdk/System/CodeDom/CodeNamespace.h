#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System::CodeDom { class CodeCommentStatementCollection; }
namespace System::CodeDom { class CodeNamespaceImportCollection; }
namespace System::CodeDom { class CodeTypeDeclarationCollection; }

#define SYSTEM_CODEDOM_CODENAMESPACE_ADD_POPULATECOMMENTS_OFFSET UNITYSDK_OFFSET(0x1DEAE7A0)
#define SYSTEM_CODEDOM_CODENAMESPACE_ADD_POPULATEIMPORTS_OFFSET UNITYSDK_OFFSET(0x1DEAE820)
#define SYSTEM_CODEDOM_CODENAMESPACE_ADD_POPULATETYPES_OFFSET UNITYSDK_OFFSET(0x1DEAE8A0)
#define SYSTEM_CODEDOM_CODENAMESPACE_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x1DEAE660)
#define SYSTEM_CODEDOM_CODENAMESPACE_GET_IMPORTS_OFFSET UNITYSDK_OFFSET(0x1DEAE6A0)
#define SYSTEM_CODEDOM_CODENAMESPACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DEAE6E0)
#define SYSTEM_CODEDOM_CODENAMESPACE_GET_TYPES_OFFSET UNITYSDK_OFFSET(0x1DEAE760)
#define SYSTEM_CODEDOM_CODENAMESPACE_REMOVE_POPULATECOMMENTS_OFFSET UNITYSDK_OFFSET(0x1DEAE7E0)
#define SYSTEM_CODEDOM_CODENAMESPACE_REMOVE_POPULATEIMPORTS_OFFSET UNITYSDK_OFFSET(0x1DEAE860)
#define SYSTEM_CODEDOM_CODENAMESPACE_REMOVE_POPULATETYPES_OFFSET UNITYSDK_OFFSET(0x1DEAE8E0)
#define SYSTEM_CODEDOM_CODENAMESPACE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DEAE720)
#define SYSTEM_CODEDOM_CODENAMESPACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAE620)
#define SYSTEM_CODEDOM_CODENAMESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE5E0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeNamespace_TypeDefinitionIndex = 4035;

	class CodeNamespace : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE__CTOR_1_OFFSET))(this, name);
		}

		::System::CodeDom::CodeCommentStatementCollection* get_Comments()
		{
			return ((::System::CodeDom::CodeCommentStatementCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_GET_COMMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeNamespaceImportCollection* get_Imports()
		{
			return ((::System::CodeDom::CodeNamespaceImportCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_GET_IMPORTS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_SET_NAME_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeDeclarationCollection* get_Types()
		{
			return ((::System::CodeDom::CodeTypeDeclarationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_GET_TYPES_OFFSET))(this);
		}

		::System::Void add_PopulateComments(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_ADD_POPULATECOMMENTS_OFFSET))(this, value);
		}

		::System::Void remove_PopulateComments(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_REMOVE_POPULATECOMMENTS_OFFSET))(this, value);
		}

		::System::Void add_PopulateImports(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_ADD_POPULATEIMPORTS_OFFSET))(this, value);
		}

		::System::Void remove_PopulateImports(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_REMOVE_POPULATEIMPORTS_OFFSET))(this, value);
		}

		::System::Void add_PopulateTypes(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_ADD_POPULATETYPES_OFFSET))(this, value);
		}

		::System::Void remove_PopulateTypes(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODENAMESPACE_REMOVE_POPULATETYPES_OFFSET))(this, value);
		}
	};
}
