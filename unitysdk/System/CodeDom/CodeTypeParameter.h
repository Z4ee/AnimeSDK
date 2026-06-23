#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

namespace System { class String; }
namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1D5C9AB0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D5C9AF0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_HASCONSTRUCTORCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1D5C9B30)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D5C9BB0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_SET_HASCONSTRUCTORCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1D5C9B70)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D5C9BF0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5C9A70)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9A30)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeParameter_TypeDefinitionIndex = 4047;

	class CodeTypeParameter : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER__CTOR_1_OFFSET))(this, name);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_Constraints()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::CodeDom::CodeAttributeDeclarationCollection* get_CustomAttributes()
		{
			return ((::System::CodeDom::CodeAttributeDeclarationCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_CUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_HasConstructorConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_HASCONSTRUCTORCONSTRAINT_OFFSET))(this);
		}

		::System::Void set_HasConstructorConstraint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER_SET_HASCONSTRUCTORCONSTRAINT_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEPARAMETER_SET_NAME_OFFSET))(this, value);
		}
	};
}
