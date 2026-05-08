#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SHOWODINSERIALIZEDPROPERTIESININSPECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C021220)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowOdinSerializedPropertiesInInspectorAttribute_TypeDefinitionIndex = 7226;

	class ShowOdinSerializedPropertiesInInspectorAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWODINSERIALIZEDPROPERTIESININSPECTORATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
