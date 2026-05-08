#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWELIMINATEDAMNATIONWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162EC7C0)
#define MOLEMOLE_UIHOLLOWELIMINATEDAMNATIONWIDGETCONTROLLER___C__DISPLAYCLASS5_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x162EC7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEliminateDamnationWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 38442;

	class UIHollowEliminateDamnationWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* clickCallback; // 0x10
		::System::Int32 blessID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWELIMINATEDAMNATIONWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWELIMINATEDAMNATIONWIDGETCONTROLLER___C__DISPLAYCLASS5_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
