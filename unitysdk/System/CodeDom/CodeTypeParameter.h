#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

namespace System { class String; }
namespace System::CodeDom { class CodeAttributeDeclarationCollection; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B1E1FE0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_CUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B1E2020)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_HASCONSTRUCTORCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B1E2060)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B1E20E0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_SET_HASCONSTRUCTORCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1B1E20A0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B1E2120)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B1E1FA0)
#define SYSTEM_CODEDOM_CODETYPEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1E1F60)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeParameter_TypeDefinitionIndex = 4048;

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
