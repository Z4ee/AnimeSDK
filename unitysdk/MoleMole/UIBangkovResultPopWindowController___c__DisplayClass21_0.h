#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
class Class_3_0D78EA91F90092C6;
namespace MoleMole { class UIBangkovResultPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1802B940)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1802B950)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1802B980)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 48500;

	class UIBangkovResultPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_0_16E4307DCC419505_175*>* __9__1; // 0x10
		::Class_3_0D78EA91F90092C6* item; // 0x18
		::MoleMole::UIBangkovResultPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshItemView_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__0_OFFSET))(this, ctrl);
		}

		::System::Void _RefreshItemView_b__1(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__1_OFFSET))(this, ctrl);
		}
	};
}
