#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AA94C0)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA9500)
#define MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER___C__ONSUREBTNCLICK_G__EXITNORMAL_21_0_OFFSET UNITYSDK_OFFSET(0x16AA9510)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventureChildWindowController___c_TypeDefinitionIndex = 85137;

	class UIGrandMarcelAdventureChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGrandMarcelAdventureChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGrandMarcelAdventureChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGrandMarcelAdventureChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSureBtnClick_g__ExitNormal_21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTURECHILDWINDOWCONTROLLER___C__ONSUREBTNCLICK_G__EXITNORMAL_21_0_OFFSET))(this);
		}
	};
}
