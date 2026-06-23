#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_1_66C4D81440373C6E;
class Class_2_208CC9941471731A_428;
class Class_2_3BEB019E352B28D9_1;
class Class_2_3BEB019E352B28D9_1_Class_2_A56950714DAA0424;
class Class_2_47BB065BE5107FA1;
class Class_3_4CC9DF6D10E3002D_Class_4_70913AC4DAB8FEAC_12;
class UIControllerExtensionData;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMonsterFantasyInLevelMainPageController; }
namespace MoleMole { class UIMonsterFantasySkillButtonChildWindowController; }
namespace MoleMole { class UIMonsterFantasySkillInfoWidgetController; }
namespace MoleMole { class UIMonsterFantasySkillPanelChildWindowController_SpDataBindView; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_BUILDSPHELPER_OFFSET UNITYSDK_OFFSET(0x14C5EAE0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_CLEARSPBARSTEP_OFFSET UNITYSDK_OFFSET(0x14C5DC80)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_GET_CURINFOCFG_OFFSET UNITYSDK_OFFSET(0x14C60360)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14C59E00)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C59E10)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_HANDLEMOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x14C5C140)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_INITSP_OFFSET UNITYSDK_OFFSET(0x14C5CFC0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14C5A4F0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONBEFOREOPENNEWBIE_OFFSET UNITYSDK_OFFSET(0x14C5FCE0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C59E80)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x14C60050)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C5AFA0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x14C5CB00)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONPREVIEWCHANGE_OFFSET UNITYSDK_OFFSET(0x14C5DFD0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x14C60100)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONSKILLINPUTMUTE_OFFSET UNITYSDK_OFFSET(0x14C5FB50)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C5AF50)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C5A0F0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C59F40)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITCHANGE_OFFSET UNITYSDK_OFFSET(0x14C5C380)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITCHANGE_PANEL_OFFSET UNITYSDK_OFFSET(0x14C5D2C0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITMODIFIED_OFFSET UNITYSDK_OFFSET(0x14C5EC90)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITSELECTED_OFFSET UNITYSDK_OFFSET(0x14C5F760)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITTRYSELECT_OFFSET UNITYSDK_OFFSET(0x14C5F270)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_RESETCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x14C5BA20)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x14C5DB70)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SETSPBARMATERIAL_OFFSET UNITYSDK_OFFSET(0x14C5E570)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SHOWSKILLINFO_OFFSET UNITYSDK_OFFSET(0x14C5BDF0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SWITCHLOCKTARGET_OFFSET UNITYSDK_OFFSET(0x14C5B760)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14C60260)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C60450)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C60390)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER__HANDLEMOUSESCROLL_B__53_0_OFFSET UNITYSDK_OFFSET(0x14C60600)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14C60610)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C606B0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C606E0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C606F0)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C60700)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex = 69663;

	class UIMonsterFantasySkillPanelChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::Il2CppArray<::MoleMole::LogicButtonInputType>** StaticGet_BUTTON_INPUT_TYPE()
		{
			return (::Il2CppArray<::MoleMole::LogicButtonInputType>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x4B1E0);
		}
		static ::Il2CppArray<::MoleMole::InputLogicEventType>** StaticGet_BUTTON_INPUT_EVENT()
		{
			return (::Il2CppArray<::MoleMole::InputLogicEventType>**)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x4B1E8);
		}
		static ::System::Int32* StaticGet_StepPosShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11C50);
		}
		static ::System::Int32* StaticGet_StepColorAShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11C54);
		}
		static ::System::Int32* StaticGet_StepColorBShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11C58);
		}
		static ::System::Int32* StaticGet_WaveHeightShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMonsterFantasySkillPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11C5C);
		}
		// static const ::System::Int32 MAX_SKILL_COUNT = 0x3; // 0x0
		::System::String* FillMatPath_CurSP; // 0x318
		::UnityEngine::Material* spMat; // 0x320
		::Il2CppArray<::MoleMole::UIMonsterFantasySkillButtonChildWindowController*>* _skillBtns; // 0x328
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x330
		::Class_3_4CC9DF6D10E3002D_Class_4_70913AC4DAB8FEAC_12* _spBarView; // 0x338
		::UIControllerExtensionData* _extData; // 0x340
		::MoleMole::UIMonsterFantasyInLevelMainPageController* _parentCtrl; // 0x348
		::Class_1_66C4D81440373C6E* _curFighterData; // 0x350
		::Class_2_3BEB019E352B28D9_1* _hudHelper_sp; // 0x358
		::Class_2_3BEB019E352B28D9_1_Class_2_A56950714DAA0424* _spIDataBindModel; // 0x360
		::MoleMole::UIMonsterFantasySkillPanelChildWindowController_SpDataBindView* _spIDataBindView; // 0x368
		::MoleMole::UIMonsterFantasySkillInfoWidgetController* _infoCtrl; // 0x370
		::System::Boolean _scrollInCD; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_47BB065BE5107FA1* get__viewModel()
		{
			return ((::Class_2_47BB065BE5107FA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUnitChange(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITCHANGE_OFFSET))(this, unit);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* data, ::System::Boolean isLongPress)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONPOINTERUP_OFFSET))(this, data, isLongPress);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnUnitChange_Panel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITCHANGE_PANEL_OFFSET))(this);
		}

		::System::Void OnPreviewChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONPREVIEWCHANGE_OFFSET))(this);
		}

		::System::Void InitSp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_INITSP_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void OnUnitModified(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITMODIFIED_OFFSET))(this, args);
		}

		::System::Void OnUnitTrySelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITTRYSELECT_OFFSET))(this, args);
		}

		::System::Void OnUnitSelected(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONUNITSELECTED_OFFSET))(this, args);
		}

		::System::Void OnSkillInputMute(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONSKILLINPUTMUTE_OFFSET))(this, args);
		}

		::System::Void OnBeforeOpenNewBie(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONBEFOREOPENNEWBIE_OFFSET))(this, args);
		}

		::System::Void BuildSpHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_BUILDSPHELPER_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void OnPropertyChange(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty propertyType, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_ONPROPERTYCHANGE_OFFSET))(this, fighterID, propertyType, customType, oldValue, newValue);
		}

		::System::Void SetSPBarMaterial(::System::Boolean isConsume, ::System::Single cost, ::System::Single curPercent, ::System::Single maxSp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SETSPBARMATERIAL_OFFSET))(this, isConsume, cost, curPercent, maxSp);
		}

		::System::Void ClearSPBarStep(::System::Single cur, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_CLEARSPBARSTEP_OFFSET))(this, cur, max);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_428* get_CurInfoCfg()
		{
			return ((::Class_2_208CC9941471731A_428*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_GET_CURINFOCFG_OFFSET))(this);
		}

		::System::Void ShowSkillInfo(::Class_2_208CC9941471731A_428* cfg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_428*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SHOWSKILLINFO_OFFSET))(this, cfg);
		}

		::System::Void SwitchLockTarget(::System::Boolean isPrev)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_SWITCHLOCKTARGET_OFFSET))(this, isPrev);
		}

		::System::Void ResetCameraLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_RESETCAMERALOCK_OFFSET))(this);
		}

		::System::Boolean HandleMouseScroll(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER_HANDLEMOUSESCROLL_OFFSET))(this, inputAction);
		}

		::System::Void _HandleMouseScroll_b__53_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER__HANDLEMOUSESCROLL_B__53_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
