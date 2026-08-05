#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_5773E3AF07ABF14E.h"

class Class_1_466597060C7011BF;
class Class_1_6B9BA8441E94A95A;
class Class_2_2F3C7D4EFC74D485;
class Class_2_9D03A501FFCBD526;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMedalIconRowWidgetController_Context; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONCATENATEDESCSTRING_OFFSET UNITYSDK_OFFSET(0x19015D80)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19014F60)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITMEDALVIEW_OFFSET UNITYSDK_OFFSET(0x19015400)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITTITLEVIEW_OFFSET UNITYSDK_OFFSET(0x19014990)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x19015EB0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19015820)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTMEDALITEM_OFFSET UNITYSDK_OFFSET(0x19015920)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTTITLEITEM_OFFSET UNITYSDK_OFFSET(0x19014DC0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190158B0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19014F70)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190152A0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHMEDALPANELUI_OFFSET UNITYSDK_OFFSET(0x19015980)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHTITLEPANELUI_OFFSET UNITYSDK_OFFSET(0x19014E20)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19016050)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_0_OFFSET UNITYSDK_OFFSET(0x19016060)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_1_OFFSET UNITYSDK_OFFSET(0x190160D0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_2_OFFSET UNITYSDK_OFFSET(0x190160F0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_3_OFFSET UNITYSDK_OFFSET(0x19016160)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19016180)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19016210)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19016220)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19016230)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalEditPopWindowController_TypeDefinitionIndex = 74310;

	class UIMedalEditPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean isVariableTitle; // 0x318
		::Struct_2_5773E3AF07ABF14E _titleData; // 0x320
		::System::Collections::Generic::List_1<::Class_1_466597060C7011BF*>* _titleList; // 0x340
		::Class_2_9D03A501FFCBD526* _view; // 0x348
		::Class_2_2F3C7D4EFC74D485* _model; // 0x350
		::System::Boolean isVariableMedal; // 0x358
		::Class_1_6B9BA8441E94A95A* _medalData; // 0x360
		::System::Int32 _currSelectedMedalID; // 0x368
		::System::Action* triggerWhenCloseAfterClickOK; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIMedalIconRowWidgetController_Context*>* _medalContextList; // 0x378
		::System::Int32 _currSelectedIdx; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitTitleView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITTITLEVIEW_OFFSET))(this);
		}

		::System::Void OnSelectTitleItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTTITLEITEM_OFFSET))(this, index);
		}

		::System::Void RefreshTitlePanelUI(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHTITLEPANELUI_OFFSET))(this, index);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMedalView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITMEDALVIEW_OFFSET))(this);
		}

		::System::Void OnSelectMedalItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTMEDALITEM_OFFSET))(this, index);
		}

		::System::Void RefreshMedalPanelUI(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHMEDALPANELUI_OFFSET))(this, index);
		}

		::System::String* ConcatenateDescString(::System::String* descKey, ::System::Boolean isPermanent)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONCATENATEDESCSTRING_OFFSET))(this, descKey, isPermanent);
		}

		::System::Void OnClickOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_0_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_1_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_2_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
