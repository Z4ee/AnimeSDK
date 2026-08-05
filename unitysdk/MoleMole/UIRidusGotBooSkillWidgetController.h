#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRidusGotBooPageController_KeyPosition.h"

class Class_2_1F8F0D5E90FA07BD;
class Class_2_208CC9941471731A_74;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRidusGotBooSkillWidgetControllerContext; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_GET_BTNMAIN_OFFSET UNITYSDK_OFFSET(0x160CBBE0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_GET_KEYPOS_OFFSET UNITYSDK_OFFSET(0x160CB9B0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x160CC1E0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCHANGEMASK_OFFSET UNITYSDK_OFFSET(0x160CBD70)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCLICKBTNEMPTY_OFFSET UNITYSDK_OFFSET(0x160CBBA0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCLICKSKILL_OFFSET UNITYSDK_OFFSET(0x160CC200)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160CBC00)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x160CBD10)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160CBC90)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160CB9C0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x160CBEA0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_SETHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x160CBE30)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160CC2D0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160CC310)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x160CC3A0)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160CC440)
#define MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160CC4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSkillWidgetController_TypeDefinitionIndex = 90900;

	class UIRidusGotBooSkillWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UIRidusGotBooPageController_KeyPosition m_keyPos; // 0x2F0
		::Class_2_1F8F0D5E90FA07BD* _view; // 0x2F8
		::Class_2_208CC9941471731A_74* m_skillCfg; // 0x300
		::System::Action_2<::System::Int32, ::MoleMole::UIRidusGotBooPageController_KeyPosition>* m_onClickAction; // 0x308
		::System::String* BtnPressAnim; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRidusGotBooPageController_KeyPosition get_KeyPos()
		{
			return ((::MoleMole::UIRidusGotBooPageController_KeyPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_GET_KEYPOS_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickBtnEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCLICKBTNEMPTY_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_BtnMain()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_GET_BTNMAIN_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnChangeMask(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCHANGEMASK_OFFSET))(this, args);
		}

		::System::Void SetHighlight(::System::Boolean isHighlight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_SETHIGHLIGHT_OFFSET))(this, isHighlight);
		}

		::System::Void RefreshByContext(::MoleMole::UIRidusGotBooSkillWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRidusGotBooSkillWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, ctx);
		}

		::System::Int32 get_SkillID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_GET_SKILLID_OFFSET))(this);
		}

		::System::Void OnClickSkill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER_ONCLICKSKILL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSKILLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
