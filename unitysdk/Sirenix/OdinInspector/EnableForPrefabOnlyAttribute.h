#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ENABLEFORPREFABONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F870)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int EnableForPrefabOnlyAttribute_TypeDefinitionIndex = 7159;

	class EnableForPrefabOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ENABLEFORPREFABONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
