#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovTaskDetailWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F21D0)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x162F21E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 87645;

	class UIZenkovTaskDetailWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTaskDetailWidgetController* __4__this; // 0x10
		::System::String* anim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS16_0__ONSHOW_B__0_OFFSET))(this);
		}
	};
}
