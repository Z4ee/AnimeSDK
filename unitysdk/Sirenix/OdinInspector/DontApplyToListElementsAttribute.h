#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DONTAPPLYTOLISTELEMENTSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FEF0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DontApplyToListElementsAttribute_TypeDefinitionIndex = 7291;

	class DontApplyToListElementsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DONTAPPLYTOLISTELEMENTSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
