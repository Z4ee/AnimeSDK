#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_75D3976A6C462D53.h"

class Class_1_2A0117F72708B5DF;
class Class_1_C52591F09EF1D4E4;
class Class_2_2F3C7D4EFC74D485;
class Class_2_9D03A501FFCBD526;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMedalIconRowWidgetController_Context; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONCATENATEDESCSTRING_OFFSET UNITYSDK_OFFSET(0x15F03330)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15F02510)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITMEDALVIEW_OFFSET UNITYSDK_OFFSET(0x15F029B0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITTITLEVIEW_OFFSET UNITYSDK_OFFSET(0x15F01F40)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x15F03460)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F02DD0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTMEDALITEM_OFFSET UNITYSDK_OFFSET(0x15F02ED0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTTITLEITEM_OFFSET UNITYSDK_OFFSET(0x15F02370)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F02E60)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F02520)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F02850)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHMEDALPANELUI_OFFSET UNITYSDK_OFFSET(0x15F02F30)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHTITLEPANELUI_OFFSET UNITYSDK_OFFSET(0x15F023D0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F03600)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_0_OFFSET UNITYSDK_OFFSET(0x15F03610)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_1_OFFSET UNITYSDK_OFFSET(0x15F03680)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_2_OFFSET UNITYSDK_OFFSET(0x15F036A0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_3_OFFSET UNITYSDK_OFFSET(0x15F03710)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15F03730)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15F037C0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15F037D0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15F037E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalEditPopWindowController_TypeDefinitionIndex = 75331;

	class UIMedalEditPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean isVariableTitle; // 0x318
		::Struct_2_75D3976A6C462D53 _titleData; // 0x320
		::System::Collections::Generic::List_1<::Class_1_C52591F09EF1D4E4*>* _titleList; // 0x340
		::Class_2_9D03A501FFCBD526* _view; // 0x348
		::Class_2_2F3C7D4EFC74D485* _model; // 0x350
		::System::Boolean isVariableMedal; // 0x358
		::Class_1_2A0117F72708B5DF* _medalData; // 0x360
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
