#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUATTRIBUTE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1C01F650)
#define SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUATTRIBUTE_SET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1C01F660)
#define SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F670)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int CustomContextMenuAttribute_TypeDefinitionIndex = 7137;

	class CustomContextMenuAttribute : public ::System::Attribute
	{
	public:
		::System::String* MenuItem; // 0x10
		::System::String* Action; // 0x18

		::System::Void _ctor(::System::String* menuItem, ::System::String* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUATTRIBUTE__CTOR_OFFSET))(this, menuItem, action);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUATTRIBUTE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Void set_MethodName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUATTRIBUTE_SET_METHODNAME_OFFSET))(this, value);
		}
	};
}
