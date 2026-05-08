#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_ASSETSONLYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F180)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AssetsOnlyAttribute_TypeDefinitionIndex = 7130;

	class AssetsOnlyAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSONLYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
