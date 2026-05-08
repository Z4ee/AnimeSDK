#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152D1C80)
#define MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x152D1C90)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityIconLiveBtnWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 40565;

	class UIActivityIconLiveBtnWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* onClick; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYICONLIVEBTNWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
