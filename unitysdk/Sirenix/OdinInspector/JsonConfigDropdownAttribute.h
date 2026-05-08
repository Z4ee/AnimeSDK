#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_JSONCONFIGDROPDOWNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0126C0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int JsonConfigDropdownAttribute_TypeDefinitionIndex = 7922;

	class JsonConfigDropdownAttribute : public ::System::Attribute
	{
	public:
		::System::String* FunctionName; // 0x10
		::System::String* FieldName; // 0x18
		::System::String* JsonConfigName; // 0x20

		::System::Void _ctor(::System::String* JsonConfigName, ::System::String* DescFieldName, ::System::String* DescCustomGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_JSONCONFIGDROPDOWNATTRIBUTE__CTOR_OFFSET))(this, JsonConfigName, DescFieldName, DescCustomGetter);
		}
	};
}
