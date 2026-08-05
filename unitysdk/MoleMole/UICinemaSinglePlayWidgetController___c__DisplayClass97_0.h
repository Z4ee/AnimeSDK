#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35BB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS97_0__STARTFEVERAPPEARUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x18D35BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController___c__DisplayClass97_0_TypeDefinitionIndex = 46346;

	class UICinemaSinglePlayWidgetController___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::System::Action* triggerOnFinish; // 0x10
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartFeverAppearUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___C__DISPLAYCLASS97_0__STARTFEVERAPPEARUPDATE_B__0_OFFSET))(this);
		}
	};
}
