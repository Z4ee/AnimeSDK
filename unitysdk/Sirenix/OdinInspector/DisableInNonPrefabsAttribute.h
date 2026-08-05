#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINNONPREFABSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FE70)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInNonPrefabsAttribute_TypeDefinitionIndex = 7284;

	class DisableInNonPrefabsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINNONPREFABSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
