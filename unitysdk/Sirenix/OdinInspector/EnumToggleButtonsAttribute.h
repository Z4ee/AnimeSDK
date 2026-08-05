#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ENUMTOGGLEBUTTONSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FF90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int EnumToggleButtonsAttribute_TypeDefinitionIndex = 7298;

	class EnumToggleButtonsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENUMTOGGLEBUTTONSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
