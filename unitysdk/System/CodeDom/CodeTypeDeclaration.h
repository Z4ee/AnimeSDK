#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System::CodeDom { class CodeTypeMemberCollection; }
namespace System::CodeDom { class CodeTypeParameterCollection; }
namespace System::CodeDom { class CodeTypeReferenceCollection; }

#define SYSTEM_CODEDOM_CODETYPEDECLARATION_ADD_POPULATEBASETYPES_OFFSET UNITYSDK_OFFSET(0x1DD0F7F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_ADD_POPULATEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1DD0F870)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_BASETYPES_OFFSET UNITYSDK_OFFSET(0x1DD0F430)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1DD0F470)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x1DD0F4F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x1DD0F570)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISPARTIAL_OFFSET UNITYSDK_OFFSET(0x1DD0F5F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x1DD0F670)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1DD0F6F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_TYPEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DD0F730)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_TYPEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DD0F7B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_REMOVE_POPULATEBASETYPES_OFFSET UNITYSDK_OFFSET(0x1DD0F830)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_REMOVE_POPULATEMEMBERS_OFFSET UNITYSDK_OFFSET(0x1DD0F8B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1DD0F4B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISENUM_OFFSET UNITYSDK_OFFSET(0x1DD0F530)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x1DD0F5B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISPARTIAL_OFFSET UNITYSDK_OFFSET(0x1DD0F630)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x1DD0F6B0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_TYPEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DD0F770)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD0F3F0)
#define SYSTEM_CODEDOM_CODETYPEDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0F3E0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeDeclaration_TypeDefinitionIndex = 3213;

	class CodeTypeDeclaration : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION__CTOR_1_OFFSET))(this, name);
		}

		::System::CodeDom::CodeTypeReferenceCollection* get_BaseTypes()
		{
			return ((::System::CodeDom::CodeTypeReferenceCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_BASETYPES_OFFSET))(this);
		}

		::System::Boolean get_IsClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISCLASS_OFFSET))(this);
		}

		::System::Void set_IsClass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISCLASS_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISENUM_OFFSET))(this);
		}

		::System::Void set_IsEnum(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISENUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsInterface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISINTERFACE_OFFSET))(this);
		}

		::System::Void set_IsInterface(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISINTERFACE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPartial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISPARTIAL_OFFSET))(this);
		}

		::System::Void set_IsPartial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISPARTIAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsStruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_ISSTRUCT_OFFSET))(this);
		}

		::System::Void set_IsStruct(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_ISSTRUCT_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeMemberCollection* get_Members()
		{
			return ((::System::CodeDom::CodeTypeMemberCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_MEMBERS_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes get_TypeAttributes()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_TYPEATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_TypeAttributes(::System::Reflection::TypeAttributes value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::TypeAttributes))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_SET_TYPEATTRIBUTES_OFFSET))(this, value);
		}

		::System::CodeDom::CodeTypeParameterCollection* get_TypeParameters()
		{
			return ((::System::CodeDom::CodeTypeParameterCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_GET_TYPEPARAMETERS_OFFSET))(this);
		}

		::System::Void add_PopulateBaseTypes(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_ADD_POPULATEBASETYPES_OFFSET))(this, value);
		}

		::System::Void remove_PopulateBaseTypes(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_REMOVE_POPULATEBASETYPES_OFFSET))(this, value);
		}

		::System::Void add_PopulateMembers(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_ADD_POPULATEMEMBERS_OFFSET))(this, value);
		}

		::System::Void remove_PopulateMembers(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDECLARATION_REMOVE_POPULATEMEMBERS_OFFSET))(this, value);
		}
	};
}
