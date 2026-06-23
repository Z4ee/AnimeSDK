#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINPLAYMODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328AE0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInPlayModeAttribute_TypeDefinitionIndex = 7281;

	class DisableInPlayModeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINPLAYMODEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
