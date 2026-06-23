#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuickEditPopWindowController; }

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1789A8F0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__ONGOBTNCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x1789A900)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c__DisplayClass34_0_TypeDefinitionIndex = 51849;

	class UIQuickEditPopWindowController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UIQuickEditPopWindowController* __4__this; // 0x10
		::Il2CppArray<::System::Int32>* teamData2; // 0x18
		::Il2CppArray<::System::Int32>* teamData1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoBtnClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__ONGOBTNCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
