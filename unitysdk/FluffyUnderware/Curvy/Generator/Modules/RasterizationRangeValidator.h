#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RASTERIZATIONRANGEVALIDATOR_VALIDATEDFROMVALUE_OFFSET UNITYSDK_OFFSET(0x1E3B9850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RASTERIZATIONRANGEVALIDATOR_VALIDATETOVALUE_OFFSET UNITYSDK_OFFSET(0x1E3B98A0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int RasterizationRangeValidator_TypeDefinitionIndex = 38990;

	class RasterizationRangeValidator : public ::System::Object
	{
	public:
		static ::System::Void ValidatedFromValue(::System::Single& from)
		{
			return ((::System::Void(*)(::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RASTERIZATIONRANGEVALIDATOR_VALIDATEDFROMVALUE_OFFSET))(from);
		}

		static ::System::Void ValidateToValue(::System::Single& to, ::System::Single from, ::System::Boolean isPathOpen)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RASTERIZATIONRANGEVALIDATOR_VALIDATETOVALUE_OFFSET))(to, from, isPathOpen);
		}
	};
}
