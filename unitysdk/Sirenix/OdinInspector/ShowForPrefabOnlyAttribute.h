#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SHOWFORPREFABONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C020FC0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ShowForPrefabOnlyAttribute_TypeDefinitionIndex = 7221;

	class ShowForPrefabOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SHOWFORPREFABONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
