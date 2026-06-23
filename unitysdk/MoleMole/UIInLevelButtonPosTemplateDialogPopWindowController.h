#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_188;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIButtonPosTemplateWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMobileButtonSettingWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATERUNTIMEBUTTONS_OFFSET UNITYSDK_OFFSET(0x186E3CA0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATESLIDERWIDGETS_OFFSET UNITYSDK_OFFSET(0x186E2C00)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BANGBOO_OFFSET UNITYSDK_OFFSET(0x186E7E10)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BANGKOV_OFFSET UNITYSDK_OFFSET(0x186E8720)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BIGSCENE_OFFSET UNITYSDK_OFFSET(0x186E8290)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_CURRENT_OFFSET UNITYSDK_OFFSET(0x186E6F80)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_HOLLOW_OFFSET UNITYSDK_OFFSET(0x186E79A0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_INLEVEL_OFFSET UNITYSDK_OFFSET(0x186E7070)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_MAINCITY_OFFSET UNITYSDK_OFFSET(0x186E7500)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETPOSITIONTYPEFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x186E6930)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x186E2950)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISBANGBOOMODE_OFFSET UNITYSDK_OFFSET(0x186E2900)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISBANGKOVMODE_OFFSET UNITYSDK_OFFSET(0x186E2930)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISBIGSCENEMODE_OFFSET UNITYSDK_OFFSET(0x186E2920)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISHOLLOW_OFFSET UNITYSDK_OFFSET(0x186E28F0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISINLEVEL_OFFSET UNITYSDK_OFFSET(0x186E28D0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISMAINCITY_OFFSET UNITYSDK_OFFSET(0x186E28E0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISTRIGGERTPSMODE_OFFSET UNITYSDK_OFFSET(0x186E2910)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x186E2940)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_INITRTBG_OFFSET UNITYSDK_OFFSET(0x186E58E0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_MARKALLBUTTONLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x186E5820)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0x186E5F90)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCLICKBUTTONPOSTEMPLATE_OFFSET UNITYSDK_OFFSET(0x186E6290)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186E5630)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186E56C0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186E2960)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186E55C0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHBUTTONPOSTEMPLATEWIDGETICON_OFFSET UNITYSDK_OFFSET(0x186E4690)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x186E4240)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RELEASECAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x186E5770)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RESETALLSLIDERVALUEANDBUTTONPOSITION_OFFSET UNITYSDK_OFFSET(0x186E8BA0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186E8EC0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186E8E30)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__22_0_OFFSET UNITYSDK_OFFSET(0x186E8EE0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186E8F40)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186E8FD0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186E8FE0)
#define MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186E8FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex = 63367;

	class UIInLevelButtonPosTemplateDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_EnableBlurBG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0xE5B0);
		}
		static ::System::Boolean* StaticGet_EnableNewBattleButton()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0xE5B1);
		}
		static ::System::Boolean* StaticGet_Disable3DEntityiesOnFinishCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0xE5B2);
		}
		::Class_2_79AE422BA06F6D26_188* _view; // 0x318
		::MoleMole::UIMobileButtonSettingWidgetController* _joyStickHorizontalPadding; // 0x320
		::MoleMole::UIMobileButtonSettingWidgetController* _joyStickVerticalPadding; // 0x328
		::MoleMole::UIMobileButtonSettingWidgetController* _joyStickSize; // 0x330
		::MoleMole::UIMobileButtonSettingWidgetController* _buttonHorizontalPadding; // 0x338
		::MoleMole::UIMobileButtonSettingWidgetController* _buttonVerticalPadding; // 0x340
		::MoleMole::UIMobileButtonSettingWidgetController* _buttonSize; // 0x348
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_InLevel; // 0x350
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_InLevel; // 0x358
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_InLevel; // 0x360
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_InLevel; // 0x368
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_InLevel; // 0x370
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_MainCity; // 0x378
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_MainCity; // 0x380
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_MainCity; // 0x388
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_MainCity; // 0x390
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_MainCity; // 0x398
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_Bangboo; // 0x3A0
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_Bangboo; // 0x3A8
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_Bangboo; // 0x3B0
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_Bangboo; // 0x3B8
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_Bangboo; // 0x3C0
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_BigScene; // 0x3C8
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_BigScene; // 0x3D0
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_BigScene; // 0x3D8
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_BigScene; // 0x3E0
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_BigScene; // 0x3E8
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerLeft_Bangkov; // 0x3F0
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerRight_Bangkov; // 0x3F8
		::MoleMole::UIButtonPosTemplateWidgetController* _middleLeft_Bangkov; // 0x400
		::MoleMole::UIButtonPosTemplateWidgetController* _middleRight_Bangkov; // 0x408
		::MoleMole::UIButtonPosTemplateWidgetController* _upperRight_Bangkov; // 0x410
		::MoleMole::UIButtonPosTemplateWidgetController* _lowerOuterLeft_Bangkov; // 0x418
		::MoleMole::UIButtonPosTemplateWidgetController* _currentSelectPosTemplate; // 0x420
		::MoleMole::ConfigUICommon_Input_PositionType _currentSelectPositionType; // 0x428
		::MoleMole::ConfigUICommon_Input_SceneType _currentSelectSceneType; // 0x42C
		::UnityEngine::RenderTexture* rt; // 0x430
		::System::Int32 propertyID; // 0x438
		::System::Boolean _ui3dModelControllerHasHide3dSceneEntities; // 0x43C
		::MoleMole::UIBaseController* _commonSkillButton; // 0x440
		::MoleMole::UIBaseController* _bangkovMedicineButton; // 0x448
		::System::Collections::Generic::List_1<::MoleMole::UIButtonPosTemplateWidgetController*>* _buttonPosTemplateWidgets; // 0x450

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsInLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISINLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsMainCity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISMAINCITY_OFFSET))(this);
		}

		::System::Boolean get_IsHollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISHOLLOW_OFFSET))(this);
		}

		::System::Boolean get_IsBangbooMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISBANGBOOMODE_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerTPSMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISTRIGGERTPSMODE_OFFSET))(this);
		}

		::System::Boolean get_IsBigSceneMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISBIGSCENEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsBangkovMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISBANGKOVMODE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Void MarkAllButtonLayoutDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_MARKALLBUTTONLAYOUTDIRTY_OFFSET))();
		}

		::System::Void InitRTBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_INITRTBG_OFFSET))(this);
		}

		::System::Void OnCaptureFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCAPTUREFINISHED_OFFSET))(this);
		}

		::System::Void ReleaseCaptureTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RELEASECAPTURETEXTURE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void CreateSliderWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATESLIDERWIDGETS_OFFSET))(this);
		}

		::System::Void CreateRuntimeButtons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATERUNTIMEBUTTONS_OFFSET))(this);
		}

		::System::Void OnClickButtonPosTemplate(::MoleMole::UIButtonPosTemplateWidgetController* posTemplateWidget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIButtonPosTemplateWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCLICKBUTTONPOSTEMPLATE_OFFSET))(this, posTemplateWidget);
		}

		::MoleMole::ConfigUICommon_Input_PositionType GetPositionTypeFromTemplate(::MoleMole::UIButtonPosTemplateWidgetController* posTemplateWidget)
		{
			return ((::MoleMole::ConfigUICommon_Input_PositionType(*)(::PVOID, ::MoleMole::UIButtonPosTemplateWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETPOSITIONTYPEFROMTEMPLATE_OFFSET))(this, posTemplateWidget);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_Current(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_CURRENT_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_InLevel(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_INLEVEL_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_MainCity(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_MAINCITY_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_Hollow(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_HOLLOW_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_Bangboo(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BANGBOO_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_BigScene(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BIGSCENE_OFFSET))(this, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ButtonType GetButtonTypeByPositionType_Bangkov(::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BANGKOV_OFFSET))(this, positionType);
		}

		::System::Void ResetAllSliderValueAndButtonPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RESETALLSLIDERVALUEANDBUTTONPOSITION_OFFSET))(this);
		}

		::System::Void RefreshButtonPosTemplateWidgetIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHBUTTONPOSTEMPLATEWIDGETICON_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__22_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__22_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
