#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A9562DD0E29E3C8.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CIMONOGAMEPADSELECTABLETRANSITIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14196990)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam_TypeDefinitionIndex = 51357;

	class MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam : public ::System::Object
	{
	public:
		::Enum_3_4A9562DD0E29E3C8 CursorTransitionStyle; // 0x10
		::System::String* FadeToSelectAnimation; // 0x18
		::System::String* FadeToNormalAnimation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_CIMONOGAMEPADSELECTABLETRANSITIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
