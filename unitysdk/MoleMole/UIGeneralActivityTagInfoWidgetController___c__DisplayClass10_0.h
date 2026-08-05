#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace System { class Action; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIGENERALACTIVITYTAGINFOWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E79E80)
#define MOLEMOLE_UIGENERALACTIVITYTAGINFOWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHTIMEINFO_B__0_OFFSET UNITYSDK_OFFSET(0x19E79E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagInfoWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 59440;

	class UIGeneralActivityTagInfoWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralActivityTagInfoWidgetController* __4__this; // 0x10
		::System::Action* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGINFOWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTimeInfo_b__0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGINFOWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHTIMEINFO_B__0_OFFSET))(this, t);
		}
	};
}
