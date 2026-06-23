#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_CUSTOMVALUEDRAWERATTRIBUTE_GET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1E3289B0)
#define SIRENIX_ODININSPECTOR_CUSTOMVALUEDRAWERATTRIBUTE_SET_METHODNAME_OFFSET UNITYSDK_OFFSET(0x1E3289C0)
#define SIRENIX_ODININSPECTOR_CUSTOMVALUEDRAWERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3289D0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int CustomValueDrawerAttribute_TypeDefinitionIndex = 7271;

	class CustomValueDrawerAttribute : public ::System::Attribute
	{
	public:
		::System::String* Action; // 0x10

		::System::Void _ctor(::System::String* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMVALUEDRAWERATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::String* get_MethodName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMVALUEDRAWERATTRIBUTE_GET_METHODNAME_OFFSET))(this);
		}

		::System::Void set_MethodName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_CUSTOMVALUEDRAWERATTRIBUTE_SET_METHODNAME_OFFSET))(this, value);
		}
	};
}
