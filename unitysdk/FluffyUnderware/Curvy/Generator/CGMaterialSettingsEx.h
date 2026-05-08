#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGMaterialSettings.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMATERIALSETTINGSEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B727590)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGMaterialSettingsEx_TypeDefinitionIndex = 37310;

	class CGMaterialSettingsEx : public ::FluffyUnderware::Curvy::Generator::CGMaterialSettings
	{
	public:
		::System::Int32 MaterialID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMATERIALSETTINGSEX__CTOR_OFFSET))(this);
		}
	};
}
