#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DELAYEDPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3289E0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DelayedPropertyAttribute_TypeDefinitionIndex = 7272;

	class DelayedPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DELAYEDPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
