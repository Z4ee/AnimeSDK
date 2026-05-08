#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINPREFABSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F800)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInPrefabsAttribute_TypeDefinitionIndex = 7153;

	class DisableInPrefabsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINPREFABSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
