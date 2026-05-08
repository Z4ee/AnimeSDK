#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BASECONFIGENVIRONMENTFEATUREMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xFEFEDA0)

namespace MoleMole
{
	inline static constexpr unsigned int BaseConfigEnvironmentFeatureModifier_TypeDefinitionIndex = 80131;

	class BaseConfigEnvironmentFeatureModifier : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BASECONFIGENVIRONMENTFEATUREMODIFIER__CTOR_OFFSET))(this);
		}
	};
}
