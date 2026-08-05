#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17496240)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c__DisplayClass134_0_TypeDefinitionIndex = 79231;

	class UIZenkovBagPopWindowController___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadModule* gamepadModule; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}
	};
}
