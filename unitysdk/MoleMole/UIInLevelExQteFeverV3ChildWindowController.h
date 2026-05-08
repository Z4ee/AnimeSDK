#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"

class Class_1_7D80245AA250FE12;
class Class_1_FBD3B8F833098AE6;
class Class_2_79F6D62CE30E3F8E_98;
namespace MoleMole { class FeverV3MaterialParam; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_CLEARMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x163FE840)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_DOUPGRADE_OFFSET UNITYSDK_OFFSET(0x16400A90)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GETOPERATIONNORMALTEXTKEY_OFFSET UNITYSDK_OFFSET(0x163FFC80)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GETOUTANIMNAME_OFFSET UNITYSDK_OFFSET(0x164009C0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GETUPGRADEANIMNAME_OFFSET UNITYSDK_OFFSET(0x16400C10)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x163FE160)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x163FE150)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_INITMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x163FF160)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x163FE240)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_KILLUPGRADECOROUTINE_OFFSET UNITYSDK_OFFSET(0x16400550)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x163FE740)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x163FE7D0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIHIDEITEMPROCESSUIPERFORM_OFFSET UNITYSDK_OFFSET(0x16400D20)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x163FE170)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x163FE680)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_REFRESHMATERIALPARAM_OFFSET UNITYSDK_OFFSET(0x163FF690)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x164005E0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETMATERIALPARAM_OFFSET UNITYSDK_OFFSET(0x163FFB10)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETOPERATIONAREAVISIBLE_OFFSET UNITYSDK_OFFSET(0x164001A0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETOPERATIONTEXT_OFFSET UNITYSDK_OFFSET(0x163FFEC0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETPTSAREAVISIBLE_OFFSET UNITYSDK_OFFSET(0x163FFF90)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETPTSTEXT_OFFSET UNITYSDK_OFFSET(0x163FFE00)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_TRYPLAYOPERATIONBLINKANIM_OFFSET UNITYSDK_OFFSET(0x16400470)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x163FF0D0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x163FEEA0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_UPGRADEBYLEVEL_OFFSET UNITYSDK_OFFSET(0x16400730)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16400FC0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16400FB0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x16401080)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__TRYPLAYOPERATIONBLINKANIM_B__24_0_OFFSET UNITYSDK_OFFSET(0x164011E0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16401210)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164012A0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164012B0)
#define MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164012C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex = 51456;

	class UIInLevelExQteFeverV3ChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_FEVER_LEVEL_02_FADE_IN_ANIM_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x46B40);
		}
		static ::System::String** StaticGet_FEVER_LEVEL_03_FADE_IN_ANIM_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x46B48);
		}
		static ::System::String** StaticGet_FEVER_LEVEL_02_FADE_OUT_ANIM_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x46B50);
		}
		static ::System::String** StaticGet_FEVER_LEVEL_01_FADE_IN_ANIM_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x46B58);
		}
		static ::System::String** StaticGet_FEVER_LEVEL_01_FADE_OUT_ANIM_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x46B60);
		}
		static ::System::Int32* StaticGet_ColorMoveSpeedPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11080);
		}
		static ::System::Int32* StaticGet_RampColorAPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11084);
		}
		static ::System::Int32* StaticGet_RampColorBPropertyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelExQteFeverV3ChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11088);
		}
		::Class_2_79F6D62CE30E3F8E_98* _view; // 0x310
		::Class_1_FBD3B8F833098AE6* Noice; // 0x318
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7D80245AA250FE12*>* _subFeverControllers; // 0x320
		::Class_1_7D80245AA250FE12* _lastController; // 0x328
		::MonoUIHideItem_ShowStatus _inLevelMainPageShowStatus; // 0x330
		::MonoUIHideItem_ShowStatus _inLevelFeverStatus; // 0x334
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _gradeWidgetList; // 0x338
		::Foundation::Coroutine::CoroutineHandle _upgradeDelayHandler; // 0x340
		::UnityEngine::Material* _ptsMat; // 0x348
		::UnityEngine::Material* _operationMat; // 0x350
		::UnityEngine::Material* _ptsNormalMat; // 0x358
		::UnityEngine::Material* _operationNormalMat; // 0x360
		::System::Boolean _isPtsShow; // 0x368
		::System::Boolean _isOperationShow; // 0x369
		::System::Collections::Generic::List_1<::System::String*>* _allLevelAnimNameList; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_79F6D62CE30E3F8E_98* get_View()
		{
			return ((::Class_2_79F6D62CE30E3F8E_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::Class_1_7D80245AA250FE12* controller)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D80245AA250FE12*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_UPDATE_1_OFFSET))(this, controller);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_INITMATERIALCACHE_OFFSET))(this);
		}

		::System::Void ClearMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_CLEARMATERIALCACHE_OFFSET))(this);
		}

		::System::Void RefreshMaterialParam(::System::Int32 toLevel, ::System::Boolean isNoneOp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_REFRESHMATERIALPARAM_OFFSET))(this, toLevel, isNoneOp);
		}

		::System::Void SetMaterialParam(::UnityEngine::Material* material, ::MoleMole::FeverV3MaterialParam* materialParam, ::System::Boolean isDark)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::MoleMole::FeverV3MaterialParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETMATERIALPARAM_OFFSET))(this, material, materialParam, isDark);
		}

		::System::String* GetOperationNormalTextKey(::System::Int32 toLevel, ::System::Boolean isFeverMax)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GETOPERATIONNORMALTEXTKEY_OFFSET))(this, toLevel, isFeverMax);
		}

		::System::Void SetPtsText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETPTSTEXT_OFFSET))(this, text);
		}

		::System::Void SetOperationText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETOPERATIONTEXT_OFFSET))(this, text);
		}

		::System::Void SetPtsAreaVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETPTSAREAVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Void SetOperationAreaVisible(::System::Boolean isVisible, ::System::Boolean isLevelChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETOPERATIONAREAVISIBLE_OFFSET))(this, isVisible, isLevelChanged);
		}

		::System::Void TryPlayOperationBlinkAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_TRYPLAYOPERATIONBLINKANIM_OFFSET))(this);
		}

		::System::Void KillUpgradeCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_KILLUPGRADECOROUTINE_OFFSET))(this);
		}

		::System::Void SetLevel(::System::Int32 level, ::System::Boolean isOpNone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_SETLEVEL_OFFSET))(this, level, isOpNone);
		}

		::System::Void UpgradeByLevel(::System::Int32 fromLevel, ::System::Int32 toLevel, ::System::Boolean force, ::System::Action_2<::System::Int32, ::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_UPGRADEBYLEVEL_OFFSET))(this, fromLevel, toLevel, force, callback);
		}

		::System::Void DoUpgrade(::System::Int32 toLevel, ::System::Boolean force, ::System::Action_2<::System::Int32, ::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_DOUPGRADE_OFFSET))(this, toLevel, force, callback);
		}

		::System::String* GetUpgradeAnimName(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GETUPGRADEANIMNAME_OFFSET))(this, level);
		}

		::System::String* GetOutAnimName(::System::Int32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_GETOUTANIMNAME_OFFSET))(this, level);
		}

		::System::Boolean OnUIHideItemProcessUIPerform(::System::String* tag, ::MonoUIHideItem_ShowStatus showStatus)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER_ONUIHIDEITEMPROCESSUIPERFORM_OFFSET))(this, tag, showStatus);
		}

		::System::Void _OnUIOpen_b__7_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__ONUIOPEN_B__7_0_OFFSET))(this, args);
		}

		::System::Boolean _TryPlayOperationBlinkAnim_b__24_0(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER__TRYPLAYOPERATIONBLINKANIM_B__24_0_OFFSET))(this, name);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEXQTEFEVERV3CHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
