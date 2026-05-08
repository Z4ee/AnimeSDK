#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEREFERENCEOBJECTPICKERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01FF70)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideReferenceObjectPickerAttribute_TypeDefinitionIndex = 7184;

	class HideReferenceObjectPickerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEREFERENCEOBJECTPICKERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
