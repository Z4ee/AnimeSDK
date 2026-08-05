#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ENABLEFORPREFABONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76FF20)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int EnableForPrefabOnlyAttribute_TypeDefinitionIndex = 7294;

	class EnableForPrefabOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEFORPREFABONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
