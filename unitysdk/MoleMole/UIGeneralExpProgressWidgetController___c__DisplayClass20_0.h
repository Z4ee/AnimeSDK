#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralExpProgressWidgetController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172F23B0)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__STARTEXPPROGRESS_G___FULL_HANDLE_1_OFFSET UNITYSDK_OFFSET(0x172F2430)
#define MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__STARTEXPPROGRESS_G____FILL_EXP_0_OFFSET UNITYSDK_OFFSET(0x172F23C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralExpProgressWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 67969;

	class UIGeneralExpProgressWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController* __4__this; // 0x10
		::System::Int32 addExpPerS; // 0x18
		::System::Single inFillDuration; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _StartExpProgress_g____Fill_Exp_0(::System::Int32 fromExp, ::System::Int32 toExp, ::System::Int32 total, ::System::Action* _fillDone)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__STARTEXPPROGRESS_G____FILL_EXP_0_OFFSET))(this, fromExp, toExp, total, _fillDone);
		}

		::System::Collections::IEnumerator* _StartExpProgress_g___Full_Handle_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALEXPPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS20_0__STARTEXPPROGRESS_G___FULL_HANDLE_1_OFFSET))(this);
		}
	};
}
