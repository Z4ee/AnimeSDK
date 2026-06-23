#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
class Class_2_BA0E092CFC4D361C;
namespace MoleMole { class UIMainCitySwitchRoleTimePanelWidgetController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169C4CA0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_B__1_OFFSET UNITYSDK_OFFSET(0x169C4CB0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET UNITYSDK_OFFSET(0x169C4DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 78545;

	class UIMainCitySwitchRoleTimePanelWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* content; // 0x10
		::Class_2_BA0E092CFC4D361C* cfgMgr; // 0x18
		::MoleMole::UIMainCitySwitchRoleTimePanelWidgetController* __4__this; // 0x20
		::System::Int32 cnt; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshDesc_b__1(::Class_2_208CC9941471731A_296* a, ::Class_2_208CC9941471731A_296* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_296*, ::Class_2_208CC9941471731A_296*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_B__1_OFFSET))(this, a, b);
		}

		::System::Void _RefreshDesc_g__AddTextRow_0(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C__DISPLAYCLASS27_0__REFRESHDESC_G__ADDTEXTROW_0_OFFSET))(this, key);
		}
	};
}
