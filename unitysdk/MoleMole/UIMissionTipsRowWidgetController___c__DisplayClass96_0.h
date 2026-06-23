#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_23;
namespace System { class String; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169452B0)
#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS96_0__SETQUESTTEXTFUNC_B__0_OFFSET UNITYSDK_OFFSET(0x169452C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetController___c__DisplayClass96_0_TypeDefinitionIndex = 40293;

	class UIMissionTipsRowWidgetController___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_23* questCondition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::String* _SetQuestTextFunc_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTROLLER___C__DISPLAYCLASS96_0__SETQUESTTEXTFUNC_B__0_OFFSET))(this);
		}
	};
}
