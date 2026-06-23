#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_029B536AEC3836F4;
class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_733;
class Class_2_80486DA64C1484CD;
namespace MoleMole { class UIABInLevelCountDownWidgetController; }
namespace MoleMole { class UIAutoBattleMonsterHudWidgetController; }
namespace MoleMole { class UIAutoBattleMonsterHudWidgetController_Context; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x173ADFC0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CLONEMATERIALS_OFFSET UNITYSDK_OFFSET(0x173ACD40)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CREATEACTIVATEEFFECTFORCAMP_OFFSET UNITYSDK_OFFSET(0x173B16D0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CREATEHUD_OFFSET UNITYSDK_OFFSET(0x173AD710)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET UNITYSDK_OFFSET(0x173AD530)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_GETDMGTXTROOT_OFFSET UNITYSDK_OFFSET(0x173ADBA0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ISSTARTTIPSPLAYING_OFFSET UNITYSDK_OFFSET(0x173AE2C0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x173AD5E0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x173AE370)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCAMPCHANGE_OFFSET UNITYSDK_OFFSET(0x173B1110)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173AD2D0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONENTERBATTLEANIMFINISH_OFFSET UNITYSDK_OFFSET(0x173B0FF0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x173AF180)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONENTERRESULT_OFFSET UNITYSDK_OFFSET(0x173AF330)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONHUDCHANGE_OFFSET UNITYSDK_OFFSET(0x173AE610)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x173AECF0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173AD360)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173ACB20)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173AD130)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_REFRESHRESULTTIPSBASEINFO_OFFSET UNITYSDK_OFFSET(0x173B09B0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_REFRESHSTARTTIPSBASEINFO_OFFSET UNITYSDK_OFFSET(0x173AF380)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_SETPLAYERNAMEANDICON_OFFSET UNITYSDK_OFFSET(0x173AF680)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET UNITYSDK_OFFSET(0x173ADEA0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET UNITYSDK_OFFSET(0x173ADC00)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_UPDATEHUDRENDERORDER_OFFSET UNITYSDK_OFFSET(0x173AD8E0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x173B2060)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173B1E10)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__ONSTAGECHANGE_B__26_0_OFFSET UNITYSDK_OFFSET(0x173B20A0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173B2130)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173B21C0)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173B2250)
#define MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x173B22E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABBattlePhaseWidgetController_TypeDefinitionIndex = 46031;

	class UIABBattlePhaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_PercentShaderParamID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIABBattlePhaseWidgetController_TypeDefinitionIndex)->GetStaticField(0xFBE0);
		}
		::Class_2_029B536AEC3836F4* _view; // 0x2C0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2C8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2D0
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* _damageTextContainerCtrl; // 0x2D8
		::MoleMole::UIABInLevelCountDownWidgetController* _countDownCtrl; // 0x2E0
		::MoleMole::UIBangBooAutoBattleInLevelPageController* _parentCtrl; // 0x2E8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIAutoBattleMonsterHudWidgetController*>* _hudControllers; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattleMonsterHudWidgetController*>* _hudList; // 0x2F8
		::System::Collections::Generic::Queue_1<::MoleMole::UIAutoBattleMonsterHudWidgetController_Context*>* _unInitQueue; // 0x300
		::UnityEngine::Material* _selfHPMat; // 0x308
		::UnityEngine::Material* _otherHPMat; // 0x310
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _curAcitivated; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateHUDRenderOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_UPDATEHUDRENDERORDER_OFFSET))(this);
		}

		::UnityEngine::Transform* GetDmgTxtRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_GETDMGTXTROOT_OFFSET))(this);
		}

		::System::Void ToggleHUDFocus(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDFOCUS_OFFSET))(this, entityId);
		}

		::System::Void ToggleHUDDrag(::System::UInt32 entityId, ::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_TOGGLEHUDDRAG_OFFSET))(this, entityId, isDrag);
		}

		::System::Void BindView(::MoleMole::UIInLevelDamageTextContainerChildWindowController* dmgCtrl, ::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelDamageTextContainerChildWindowController*, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, dmgCtrl, viewModel);
		}

		::System::Boolean IsStartTipsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ISSTARTTIPSPLAYING_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONBEFOREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnHUDChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONHUDCHANGE_OFFSET))(this, args);
		}

		::System::Void CreateHUD(::MoleMole::UIAutoBattleMonsterHudWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAutoBattleMonsterHudWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CREATEHUD_OFFSET))(this, context);
		}

		::System::Void OnStageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONSTAGECHANGE_OFFSET))(this);
		}

		::System::Void RefreshStartTipsBaseInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_REFRESHSTARTTIPSBASEINFO_OFFSET))(this);
		}

		::System::Void RefreshResultTipsBaseInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_REFRESHRESULTTIPSBASEINFO_OFFSET))(this);
		}

		::System::Void OnEnterResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONENTERRESULT_OFFSET))(this);
		}

		::System::Void OnEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONENTERBATTLE_OFFSET))(this);
		}

		::System::Void OnEnterBattleAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONENTERBATTLEANIMFINISH_OFFSET))(this);
		}

		::System::Void CloneMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CLONEMATERIALS_OFFSET))(this);
		}

		::System::Void DisposeMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_DISPOSEMATERIALS_OFFSET))(this);
		}

		static ::System::Void SetPlayerNameAndIcon(::Class_2_80486DA64C1484CD* playerData, ::UnityEngine::UI::Extension::UILocalizationText* name, ::Class_2_1A39E1B51756BF41* icon, ::Class_2_1A39E1B51756BF41* deathIcon, ::UnityEngine::UI::Extension::UILocalizationText* hpNum, ::Class_2_1A39E1B51756BF41* HP, ::UnityEngine::UI::Extension::UILocalizationText* lvlText, ::System::Boolean isFoe, ::UnityEngine::UI::Extension::UILocalizationText* foeHPSub, ::System::Int32 expectedDmg)
		{
			return ((::System::Void(*)(::Class_2_80486DA64C1484CD*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_SETPLAYERNAMEANDICON_OFFSET))(playerData, name, icon, deathIcon, hpNum, HP, lvlText, isFoe, foeHPSub, expectedDmg);
		}

		::System::Void OnCampChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_ONCAMPCHANGE_OFFSET))(this);
		}

		::System::Void CreateActivateEffectForCamp(::Class_2_208CC9941471731A_733* campCfg, ::System::Int32 camp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_733*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER_CREATEACTIVATEEFFECTFORCAMP_OFFSET))(this, campCfg, camp);
		}

		::System::Void _OnStageChange_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER__ONSTAGECHANGE_B__26_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABBATTLEPHASEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
