#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_TOGGLELEFTATTRIBUTE_GET_EXPANDCLICKABLEAREA_OFFSET UNITYSDK_OFFSET(0x1E32B560)
#define SIRENIX_ODININSPECTOR_TOGGLELEFTATTRIBUTE_SET_EXPANDCLICKABLEAREA_OFFSET UNITYSDK_OFFSET(0x1E32B570)
#define SIRENIX_ODININSPECTOR_TOGGLELEFTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32B580)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ToggleLeftAttribute_TypeDefinitionIndex = 7373;

	class ToggleLeftAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ExpandClickableArea_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLELEFTATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ExpandClickableArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLELEFTATTRIBUTE_GET_EXPANDCLICKABLEAREA_OFFSET))(this);
		}

		::System::Void set_ExpandClickableArea(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLELEFTATTRIBUTE_SET_EXPANDCLICKABLEAREA_OFFSET))(this, value);
		}
	};
}
