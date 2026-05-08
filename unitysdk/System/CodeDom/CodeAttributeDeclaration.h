#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::CodeDom { class CodeAttributeArgument; }
namespace System::CodeDom { class CodeAttributeArgumentCollection; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x19E24C20)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x19E24C60)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19E24CA0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x19E24CE0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E24B20)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19E24B60)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19E24BA0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19E24BE0)
#define SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E24AE0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeAttributeDeclaration_TypeDefinitionIndex = 4051;

	class CodeAttributeDeclaration : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::CodeDom::CodeTypeReference* attributeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_1_OFFSET))(this, attributeType);
		}

		::System::Void _ctor_2(::System::CodeDom::CodeTypeReference* attributeType, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_2_OFFSET))(this, attributeType, arguments);
		}

		::System::Void _ctor_3(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_3_OFFSET))(this, name);
		}

		::System::Void _ctor_4(::System::String* name, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::CodeDom::CodeAttributeArgument*>*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION__CTOR_4_OFFSET))(this, name, arguments);
		}

		::System::CodeDom::CodeAttributeArgumentCollection* get_Arguments()
		{
			return ((::System::CodeDom::CodeAttributeArgumentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReference* get_AttributeType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEATTRIBUTEDECLARATION_SET_NAME_OFFSET))(this, value);
		}
	};
}
