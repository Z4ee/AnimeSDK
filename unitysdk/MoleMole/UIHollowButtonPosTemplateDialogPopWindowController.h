#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_57;
namespace MoleMole { class UIButtonPosTemplateWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMobileButtonSettingWidgetController; }
namespace System { class EventArgs; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_CREATESLIDERWIDGETS_OFFSET UNITYSDK_OFFSET(0x18AFD820)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_BIGSCENE_OFFSET UNITYSDK_OFFSET(0x183641A0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_CURRENT_OFFSET UNITYSDK_OFFSET(0x18AFFD70)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_HOLLOW_OFFSET UNITYSDK_OFFSET(0x18363D40)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_INLEVEL_OFFSET UNITYSDK_OFFSET(0x18363450)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETBUTTONTYPEBYPOSITIONTYPE_MAINCITY_OFFSET UNITYSDK_OFFSET(0x183638D0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GETPOSITIONTYPEFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18AFFAB0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18AFD5A0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISHOLLOW_OFFSET UNITYSDK_OFFSET(0x18AFD580)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISINLEVEL_OFFSET UNITYSDK_OFFSET(0x18AFD560)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_ISMAINCITY_OFFSET UNITYSDK_OFFSET(0x18AFD570)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18AFD590)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_INITRTBG_OFFSET UNITYSDK_OFFSET(0x18AFEA60)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_MARKALLBUTTONLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x18AFE9D0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCAPTUREFINISHED_OFFSET UNITYSDK_OFFSET(0x18AFF110)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCLICKBUTTONPOSTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18AFF410)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AFE820)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AFE8B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AFD5B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AFE7B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHBUTTONPOSTEMPLATEWIDGETICON_OFFSET UNITYSDK_OFFSET(0x183648B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18AFE4B0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RELEASECAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x18AFE920)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER_RESETALLSLIDERVALUEANDBUTTONPOSITION_OFFSET UNITYSDK_OFFSET(0x18364620)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18364ED0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18364EC0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__14_0_OFFSET UNITYSDK_OFFSET(0x18364EF0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18364F50)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18364FE0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18364FF0)
#define MOLEMOLE_UIHOLLOWBUTTONPOSTEMPLATEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18365000)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex = 67080;

	class UIHollowButtonPosTemplateDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_Disable3DEntityiesOnFinishCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11EB0);
		}
		static ::System::Boolean* StaticGet_EnableNewBattleButton()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11EB1);
		}
		static ::System::Boolean* StaticGet_EnableBlurBG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIHollowButtonPosTemplateDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x11EB2);
		}
		::Class_2_79AE422BA06F6D26_57* _view; // 0x318
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
		::MoleMole::UIButtonPosTemplateWidgetController* _currentSelectPosTemplate; // 0x3A0
		::MoleMole::ConfigUICommon_Input_PositionType _currentSelectPositionType; // 0x3A8
		::MoleMole::ConfigUICommon_Input_SceneType _currentSelectSceneType; // 0x3AC
		::UnityEngine::RenderTexture* rt; // 0x3B0
		::System::Int32 propertyID; // 0x3B8
		::System::Boolean _ui3dModelControllerHasHide3dSceneEntities; // 0x3BC

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
