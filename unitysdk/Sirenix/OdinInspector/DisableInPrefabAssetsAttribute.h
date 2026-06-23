#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_DISABLEINPREFABASSETSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328AF0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DisableInPrefabAssetsAttribute_TypeDefinitionIndex = 7282;

	class DisableInPrefabAssetsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DISABLEINPREFABASSETSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
