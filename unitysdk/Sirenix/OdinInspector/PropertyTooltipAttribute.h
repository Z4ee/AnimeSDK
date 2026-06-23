#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROPERTYTOOLTIPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32A110)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int PropertyTooltipAttribute_TypeDefinitionIndex = 7345;

	class PropertyTooltipAttribute : public ::System::Attribute
	{
	public:
		::System::String* Tooltip; // 0x10

		::System::Void _ctor(::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROPERTYTOOLTIPATTRIBUTE__CTOR_OFFSET))(this, tooltip);
		}
	};
}
