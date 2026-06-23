#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_COLORPALETTEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E328950)
#define SIRENIX_ODININSPECTOR_COLORPALETTEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328940)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ColorPaletteAttribute_TypeDefinitionIndex = 7267;

	class ColorPaletteAttribute : public ::System::Attribute
	{
	public:
		::System::String* PaletteName; // 0x10
		::System::Boolean ShowAlpha; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_COLORPALETTEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* paletteName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_COLORPALETTEATTRIBUTE__CTOR_1_OFFSET))(this, paletteName);
		}
	};
}
