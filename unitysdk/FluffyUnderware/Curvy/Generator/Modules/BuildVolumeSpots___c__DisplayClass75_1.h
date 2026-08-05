#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGBounds; }
namespace FluffyUnderware::Curvy::Generator::Modules { class BuildVolumeSpots___c__DisplayClass75_0; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE66460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x1EE68160)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeSpots___c__DisplayClass75_1_TypeDefinitionIndex = 39597;

	class BuildVolumeSpots___c__DisplayClass75_1 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots___c__DisplayClass75_0* CS___8__locals1; // 0x10
		::System::Single availableSpace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _Refresh_b__0(::FluffyUnderware::Curvy::Generator::CGBounds* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGBounds*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS___C__DISPLAYCLASS75_1__REFRESH_B__0_OFFSET))(this, i);
		}
	};
}
