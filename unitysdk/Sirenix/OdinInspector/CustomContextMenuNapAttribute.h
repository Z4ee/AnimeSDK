#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFD460)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int CustomContextMenuNapAttribute_TypeDefinitionIndex = 8230;

	class CustomContextMenuNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* VisibleMethod; // 0x10
		::System::String* MenuItem; // 0x18
		::System::String* MethodName; // 0x20
		::System::Boolean IsVisible; // 0x28

		::System::Void _ctor(::System::String* menuItem, ::System::String* methodName, ::System::String* visibleMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMCONTEXTMENUNAPATTRIBUTE__CTOR_OFFSET))(this, menuItem, methodName, visibleMethod);
		}
	};
}
