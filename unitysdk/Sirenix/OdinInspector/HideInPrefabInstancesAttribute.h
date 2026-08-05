#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINPREFABINSTANCESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7705B0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInPrefabInstancesAttribute_TypeDefinitionIndex = 7312;

	class HideInPrefabInstancesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINPREFABINSTANCESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
