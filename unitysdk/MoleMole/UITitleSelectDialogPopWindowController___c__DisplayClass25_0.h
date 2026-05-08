#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITitleSelectDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1340E5A0)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__DEALCLOSEMEDALLOGIC_B__7_OFFSET UNITYSDK_OFFSET(0x1340E5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass25_0_TypeDefinitionIndex = 62080;

	class UITitleSelectDialogPopWindowController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* recommendSelectList; // 0x10
		::MoleMole::UITitleSelectDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _DealCloseMedalLogic_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__DEALCLOSEMEDALLOGIC_B__7_OFFSET))(this);
		}
	};
}
