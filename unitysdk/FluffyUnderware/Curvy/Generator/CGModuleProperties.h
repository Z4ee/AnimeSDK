#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55B950)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleProperties_TypeDefinitionIndex = 37332;

	class CGModuleProperties : public ::System::Object
	{
	public:
		::UnityEngine::Rect Dimensions; // 0x10
		::System::Single MinWidth; // 0x20
		::System::Single LabelWidth; // 0x24
		::UnityEngine::Color BackgroundColor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEPROPERTIES__CTOR_OFFSET))(this);
		}
	};
}
