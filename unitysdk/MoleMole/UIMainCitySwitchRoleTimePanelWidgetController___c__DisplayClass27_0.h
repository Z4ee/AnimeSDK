#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_931;
class Class_2_D4543FD41E1C7939;
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179EB4F0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_B__1_OFFSET UNITYSDK_OFFSET(0x179EB500)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET UNITYSDK_OFFSET(0x179EB640)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 55664;

	class UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* __4__this; // 0x10
		::UnityEngine::RectTransform* content; // 0x18
		::Class_2_D4543FD41E1C7939* cfgMgr; // 0x20
		::System::Int32 cnt; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshDesc_b__1(::Class_2_208CC9941471731A_931* a, ::Class_2_208CC9941471731A_931* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_931*, ::Class_2_208CC9941471731A_931*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_B__1_OFFSET))(this, a, b);
		}

		::System::Void _RefreshDesc_g__AddTextRow_0(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET))(this, key);
		}
	};
}
