#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGKeepAspectMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMATERIALSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CB450)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGMaterialSettings_TypeDefinitionIndex = 39020;

	class CGMaterialSettings : public ::System::Object
	{
	public:
		::System::Boolean SwapUV; // 0x10
		::FluffyUnderware::Curvy::Generator::CGKeepAspectMode KeepAspect; // 0x14
		::System::Single UVRotation; // 0x18
		::UnityEngine::Vector2 UVOffset; // 0x1C
		::UnityEngine::Vector2 UVScale; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMATERIALSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
