#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_INCLUDEMYATTRIBUTESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3294E0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int IncludeMyAttributesAttribute_TypeDefinitionIndex = 7391;

	class IncludeMyAttributesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INCLUDEMYATTRIBUTESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
