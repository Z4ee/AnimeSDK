#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuickEditPopWindowController; }

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E163E0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_1__ONGOBTNCLICKHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x12E163F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c__DisplayClass34_1_TypeDefinitionIndex = 74598;

	class UIQuickEditPopWindowController___c__DisplayClass34_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* teamData; // 0x10
		::MoleMole::UIQuickEditPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoBtnClickHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_1__ONGOBTNCLICKHANDLE_B__1_OFFSET))(this);
		}
	};
}
