#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuickEditPopWindowController; }

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5A740)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS36_0__ONGOBTNCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x15F5A750)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c__DisplayClass36_0_TypeDefinitionIndex = 70119;

	class UIQuickEditPopWindowController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* teamData1; // 0x10
		::Il2CppArray<::System::Int32>* teamData2; // 0x18
		::MoleMole::UIQuickEditPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoBtnClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS36_0__ONGOBTNCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
