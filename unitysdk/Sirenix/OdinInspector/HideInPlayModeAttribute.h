#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINPLAYMODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3291F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInPlayModeAttribute_TypeDefinitionIndex = 7306;

	class HideInPlayModeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINPLAYMODEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
