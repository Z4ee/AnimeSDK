#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS191_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D9F280)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS191_0__SETDRAGENABLED_B__2_OFFSET UNITYSDK_OFFSET(0x14D9F290)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass191_0_TypeDefinitionIndex = 45169;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass191_0 : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* userCanStartDrag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS191_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetDragEnabled_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS191_0__SETDRAGENABLED_B__2_OFFSET))(this);
		}
	};
}
