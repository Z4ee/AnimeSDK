#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDENETWORKBEHAVIOURFIELDSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01FF60)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideNetworkBehaviourFieldsAttribute_TypeDefinitionIndex = 7183;

	class HideNetworkBehaviourFieldsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDENETWORKBEHAVIOURFIELDSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
