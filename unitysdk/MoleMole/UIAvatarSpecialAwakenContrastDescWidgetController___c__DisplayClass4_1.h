#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarSpecialAwakenContrastDescWidgetController___c__DisplayClass4_0; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDESCWIDGETCONTROLLER___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECC6A0)
#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDESCWIDGETCONTROLLER___C__DISPLAYCLASS4_1__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x15ECC6B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastDescWidgetController___c__DisplayClass4_1_TypeDefinitionIndex = 72069;

	class UIAvatarSpecialAwakenContrastDescWidgetController___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarSpecialAwakenContrastDescWidgetController___c__DisplayClass4_0* CS___8__locals1; // 0x10
		::System::String* desc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDESCWIDGETCONTROLLER___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::String* _OnScrollItemUpdate_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTDESCWIDGETCONTROLLER___C__DISPLAYCLASS4_1__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
