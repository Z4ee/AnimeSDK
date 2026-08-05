#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINPREFABINSTANCESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FEA0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInPrefabInstancesAttribute_TypeDefinitionIndex = 7287;

	class DisableInPrefabInstancesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINPREFABINSTANCESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
