#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITitleSelectDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B84C90)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKAPPLYMEDALSETTINGBTN_B__2_OFFSET UNITYSDK_OFFSET(0x11B880C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass20_0_TypeDefinitionIndex = 62081;

	class UITitleSelectDialogPopWindowController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UITitleSelectDialogPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* recommendSelectList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickApplyMedalSettingBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKAPPLYMEDALSETTINGBTN_B__2_OFFSET))(this);
		}
	};
}
