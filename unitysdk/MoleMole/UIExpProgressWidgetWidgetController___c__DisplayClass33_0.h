#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIExpProgressWidgetWidgetController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175D0840)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0__STARTEXPPROGRESS_G___FULL_HANDLE_1_OFFSET UNITYSDK_OFFSET(0x175D08B0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0__STARTEXPPROGRESS_G____FILL_EXP_0_OFFSET UNITYSDK_OFFSET(0x175D0850)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpProgressWidgetWidgetController___c__DisplayClass33_0_TypeDefinitionIndex = 68667;

	class UIExpProgressWidgetWidgetController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MoleMole::UIExpProgressWidgetWidgetController* __4__this; // 0x10
		::System::Single inFillDuration; // 0x18
		::System::Int32 addExpPerS; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _StartExpProgress_g____Fill_Exp_0(::System::Int32 targetExpCount, ::System::Action* _fillDone)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0__STARTEXPPROGRESS_G____FILL_EXP_0_OFFSET))(this, targetExpCount, _fillDone);
		}

		::System::Collections::IEnumerator* _StartExpProgress_g___Full_Handle_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0__STARTEXPPROGRESS_G___FULL_HANDLE_1_OFFSET))(this);
		}
	};
}
