#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_GUICOLORATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E328EE0)
#define SIRENIX_ODININSPECTOR_GUICOLORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328EC0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int GUIColorAttribute_TypeDefinitionIndex = 7299;

	class GUIColorAttribute : public ::System::Attribute
	{
	public:
		::System::String* GetColor; // 0x10
		::UnityEngine::Color Color; // 0x18

		::System::Void _ctor(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_GUICOLORATTRIBUTE__CTOR_OFFSET))(this, r, g, b, a);
		}

		::System::Void _ctor_1(::System::String* getColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_GUICOLORATTRIBUTE__CTOR_1_OFFSET))(this, getColor);
		}
	};
}
