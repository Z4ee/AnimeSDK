#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINPREFABSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329220)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInPrefabsAttribute_TypeDefinitionIndex = 7309;

	class HideInPrefabsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINPREFABSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
