#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_209;
namespace MoleMole { class UIButtonPosTemplateWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMobileButtonSettingWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATESLIDERWIDGETS_OFFSET UNITYSDK_OFFSET(0x15A353E0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BIGSCENE_OFFSET UNITYSDK_OFFSET(0x15A38D50)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A37F20)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_HOLLOW_OFFSET UNITYSDK_OFFSET(0x15A388E0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_INLEVEL_OFFSET UNITYSDK_OFFSET(0x15A37FE0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_MAINCITY_OFFSET UNITYSDK_OFFSET(0x15A38470)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETPOSITIONTYPEFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x15A37C60)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x15A35190)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISHOLLOW_OFFSET UNITYSDK_OFFSET(0x15A35170)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISINLEVEL_OFFSET UNITYSDK_OFFSET(0x15A35150)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISMAINCITY_OFFSET UNITYSDK_OFFSET(0x15A35160)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15A35180)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_INITRTBG_OFFSET UNITYSDK_OFFSET(0x15A36C20)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_MARKALLBUTTONLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x15A36B90)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0x15A372D0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCLICKBUTTONPOSTEMPLATE_OFFSET UNITYSDK_OFFSET(0x15A375C0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A369E0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A36A70)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A351A0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A36970)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHBUTTONPOSTEMPLATEWIDGETICON_OFFSET UNITYSDK_OFFSET(0x15A36360)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15A36060)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RELEASECAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x15A36AE0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RESETALLSLIDERVALUEANDBUTTONPOSITION_OFFSET UNITYSDK_OFFSET(0x15A391E0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A39490)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A39480)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x15A394B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A39510)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A395A0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A395B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A395C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex = 65623;

	class UIHollowButtonPosTemplateDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_EnableNewBattleButton()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x102A0);
		}
		static ::System::Boolean* StaticGet_Disable3DEntityiesOnFinishCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x102A1);
		}
		static ::System::Boolean* StaticGet_EnableBlurBG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x102A2);
		}
		::Class_2_79AE422BA06F6D26_209* _view; // 0x310
		::MoleMole::UIMobileButtonSettingWidgetController* _joyStickHorizontalPadding; // 0x318
		::MoleMole::UIMobileButtonSettingWidgetController* _joyStickVerticalPadding; // 0x320
		::MoleMole::UIMobileButtonSettingWidgetController* _joyStickSize; // 0x328
		::MoleMole::UIMobileButtonSettingWidgetController* _buttonHorizontalPadding; // 0x330
		::MoleMole::UIMobileButtonSettingWidgetController* _buttonVerticalPadding; // 0x338
		::MoleMole::UIMobileButtonSettingWidgetController* _buttonSize; // 0x340
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_InLevel; // 0x348
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_InLevel; // 0x350
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_InLevel; // 0x358
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_InLevel; // 0x360
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_InLevel; // 0x368
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_MainCity; // 0x370
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_MainCity; // 0x378
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_MainCity; // 0x380
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_MainCity; // 0x388
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_MainCity; // 0x390
		::MoleMole::UIButtonPosTemplateWidgetController* _currentSelectPosTemplate; // 0x398
		::MoleMole::ConfigUICommon_Input_PositionType _currentSelectPositionType; // 0x3A0
		::MoleMole::ConfigUICommon_Input_SceneType _currentSelectSceneType; // 0x3A4
		::UnityEngine::RenderTexture* rt; // 0x3A8
		::System::Int32 propertyID; // 0x3B0
		::System::Boolean _ui3dModelControllerHasHide3dSceneEntities; // 0x3B4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsInLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISINLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsMainCity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISMAINCITY_OFFSET))(this);
		}

		::System::Boolean get_IsHollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISHOLLOW_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Void MarkAllButtonLayoutDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_MARKALLBUTTONLAYOUTDIRTY_OFFSET))();
		}

		::System::Void InitRTBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_INITRTBG_OFFSET))(this);
		}

		::System::Void OnCaptureFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCAPTUREFINISHED_OFFSET))(this);
		}

		::System::Void ReleaseCaptureTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RELEASECAPTURETEXTURE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void CreateSliderWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATESLIDERWIDGETS_OFFSET))(this);
		}

		::System::Void OnClickButtonPosTemplate(::MoleMole::UIButtonPosTemplateWidgetController* posTemplateWidget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIButtonPosTemplateWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCLICKBUTTONPOSTEMPLATE_OFFSET))(this, posTemplateWidget);
		}

		::MoleMole::ConfigUICommon_Input_PositionType GetPositionTypeFromTemplate(::MoleMole::UIButtonPosTemplateWidgetController* posTemplateWidget)
		{
			return ((::MoleMole::ConfigUICommon_Input_PositionType(*)(::PVOID, ::MoleMole::UIButtonPosTemplateWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETPOSITIONTYPEFROMTEMPLATE_OFFSET))(this, posTemplateWidget);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_Current(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_CURRENT_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_InLevel(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_INLEVEL_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_MainCity(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_MAINCITY_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_Hollow(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_HOLLOW_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_BigScene(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BIGSCENE_OFFSET))(this, positionType);
		}

		::System::Void ResetAllSliderValueAndButtonPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RESETALLSLIDERVALUEANDBUTTONPOSITION_OFFSET))(this);
		}

		::System::Void RefreshButtonPosTemplateWidgetIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHBUTTONPOSTEMPLATEWIDGETICON_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__14_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__14_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
