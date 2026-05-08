#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DELAYEDPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F6D0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DelayedPropertyAttribute_TypeDefinitionIndex = 7141;

	class DelayedPropertyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DELAYEDPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
