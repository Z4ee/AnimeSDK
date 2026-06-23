#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEREFERENCEOBJECTPICKERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329280)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideReferenceObjectPickerAttribute_TypeDefinitionIndex = 7315;

	class HideReferenceObjectPickerAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEREFERENCEOBJECTPICKERATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
