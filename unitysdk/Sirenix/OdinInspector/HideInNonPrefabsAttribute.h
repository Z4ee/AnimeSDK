#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINNONPREFABSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770580)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInNonPrefabsAttribute_TypeDefinitionIndex = 7309;

	class HideInNonPrefabsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINNONPREFABSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
