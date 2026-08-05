#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ONPASTECALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770ED0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int OnPasteCallbackAttribute_TypeDefinitionIndex = 7339;

	class OnPasteCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ONPASTECALLBACKATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
