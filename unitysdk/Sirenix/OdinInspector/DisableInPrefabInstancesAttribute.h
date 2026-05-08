#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINPREFABINSTANCESATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F7F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInPrefabInstancesAttribute_TypeDefinitionIndex = 7152;

	class DisableInPrefabInstancesAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINPREFABINSTANCESATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
