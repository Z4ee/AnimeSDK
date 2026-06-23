#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAINFOATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B7CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAINFOATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E3B7CF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAINFOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B7CC0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGDataInfoAttribute_TypeDefinitionIndex = 38946;

	class CGDataInfoAttribute : public ::System::Attribute
	{
	public:
		::UnityEngine::Color Color; // 0x10

		::System::Void _ctor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAINFOATTRIBUTE__CTOR_OFFSET))(this, color);
		}

		::System::Void _ctor_1(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAINFOATTRIBUTE__CTOR_1_OFFSET))(this, r, g, b, a);
		}

		::System::Void _ctor_2(::System::String* htmlColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAINFOATTRIBUTE__CTOR_2_OFFSET))(this, htmlColor);
		}
	};
}
