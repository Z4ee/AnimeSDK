#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A9562DD0E29E3C8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CCURSORTRANSITIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x126389F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_CCursorTransitionParam_TypeDefinitionIndex = 51352;

	class MonoGamepadVirtualCursor_CCursorTransitionParam : public ::System::Object
	{
	public:
		::Enum_3_4A9562DD0E29E3C8 CursorTransitionStyle; // 0x10
		::UnityEngine::Color NormalColor; // 0x14
		::UnityEngine::Color SelectColor; // 0x24
		::System::String* FadeToSelectAnimation; // 0x38
		::System::String* FadeToNormalAnimation; // 0x40
		::System::Single FadeToSelectTime; // 0x48
		::System::Single FadeToNormalTime; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CCURSORTRANSITIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
