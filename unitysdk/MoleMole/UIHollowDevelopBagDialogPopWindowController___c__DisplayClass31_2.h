#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_0; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA4160)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x15FA4170)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_2_TypeDefinitionIndex = 68844;

	class UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_2 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_0* CS___8__locals2; // 0x10
		::MoleMole::MonoGamepadCustomList* customlist; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
