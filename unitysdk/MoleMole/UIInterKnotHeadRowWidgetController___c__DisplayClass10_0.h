#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;

#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14826400)
#define MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14826410)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotHeadRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 44266;

	class UIInterKnotHeadRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MonoUITableScrollV2* scroll; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTHEADROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
