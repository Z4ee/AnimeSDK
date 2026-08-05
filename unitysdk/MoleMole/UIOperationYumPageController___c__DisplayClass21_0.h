#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOperationYumPageController; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1673BBF0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___C__DISPLAYCLASS21_0__INITTABS_B__1_OFFSET UNITYSDK_OFFSET(0x1673BC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumPageController___c__DisplayClass21_0_TypeDefinitionIndex = 40285;

	class UIOperationYumPageController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UITabButton* tab; // 0x10
		::MoleMole::UIOperationYumPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTabs_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___C__DISPLAYCLASS21_0__INITTABS_B__1_OFFSET))(this);
		}
	};
}
