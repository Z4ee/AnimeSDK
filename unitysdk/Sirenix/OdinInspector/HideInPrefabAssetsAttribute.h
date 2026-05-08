#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINPREFABASSETSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01FEF0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInPrefabAssetsAttribute_TypeDefinitionIndex = 7176;

	class HideInPrefabAssetsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINPREFABASSETSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
