#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_ECardClampType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EGyroStickMergeType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EGyroType.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EStickState.h"
#include "unitysdk/MoleMole/UIMindscapeWidgetController_EStickType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_2CCC5D7984CDCED4;
class Class_1_5F780812A1FAD31A;
class Class_2_1824EF69C8E376A3;
class Class_2_82E7DB6BA9499BE4_2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace MoleMole { class UIMindscapeCutBgController; }
namespace MoleMole { class UIMindscapeSwitchBtnRowWidgetController; }
namespace MoleMole { class UIRoleChangeWidgetController; }
namespace MoleMole { class UIRoleInfoPageContext; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHANGETABSTATE_OFFSET UNITYSDK_OFFSET(0x184EB680)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHECKITEMISCALLINGCARDRECURSION_OFFSET UNITYSDK_OFFSET(0x184EDF40)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DORELEASEMINDSCAPECUTBG_OFFSET UNITYSDK_OFFSET(0x184ED770)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETCANSHOWLENTICULAR_OFFSET UNITYSDK_OFFSET(0x184EDC90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETDEFAULTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x184ED560)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETLENTICULAROPEN_OFFSET UNITYSDK_OFFSET(0x184EA040)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETMINDSCAPECUTBGNAME_OFFSET UNITYSDK_OFFSET(0x184EC860)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETPCLERPSPEED_OFFSET UNITYSDK_OFFSET(0x184EB120)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GET__CURINPUTVEC_OFFSET UNITYSDK_OFFSET(0x184E8670)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x184E73B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ISTRAININGROOM_OFFSET UNITYSDK_OFFSET(0x184E81E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONAVATARCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x184EC410)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONBACKCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x184E78F0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184E8580)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x184EB2E0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGETITEMDURINGMINDSCAPE_OFFSET UNITYSDK_OFFSET(0x184EE670)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x184E80B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x184E8700)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x184EB210)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLENTICULARTOGGLEHANDLE_OFFSET UNITYSDK_OFFSET(0x184EF060)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184E7D60)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSWITCHBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x184E76C0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTABCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x184EB600)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNLOCKOVERHANDLE_OFFSET UNITYSDK_OFFSET(0x184ED850)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNOCKEND_OFFSET UNITYSDK_OFFSET(0x184EDE60)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x184E7C10)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184EF1D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184E7070)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184E79A0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OPENGMLENTICULAR_OFFSET UNITYSDK_OFFSET(0x184E7B90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x184EC740)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYVIEWFADEIN_OFFSET UNITYSDK_OFFSET(0x184E8300)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PRESETBGTABSTATE_OFFSET UNITYSDK_OFFSET(0x184EBB50)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET UNITYSDK_OFFSET(0x184ECE90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHLENTICULARTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x184EE270)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHSWITCHINPUTKEY_OFFSET UNITYSDK_OFFSET(0x184EB4D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHTABSTATE_OFFSET UNITYSDK_OFFSET(0x184EEB80)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x184E7FE0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_RESETATTITUDECURRENTVEC_OFFSET UNITYSDK_OFFSET(0x184EA080)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETBGMODEL_OFFSET UNITYSDK_OFFSET(0x184ECA30)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETCLOSEACTION_OFFSET UNITYSDK_OFFSET(0x184E8610)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETDEAULTSWITCHTAB_OFFSET UNITYSDK_OFFSET(0x184EE870)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETGYROSCOPEVEC_OFFSET UNITYSDK_OFFSET(0x184EA0D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETLENTICULARTIPANI_OFFSET UNITYSDK_OFFSET(0x184EBD50)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETTOGGLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x184E7810)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SET__CURINPUTVEC_OFFSET UNITYSDK_OFFSET(0x184E8680)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATELENTICULAR_OFFSET UNITYSDK_OFFSET(0x184EA850)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x184EA530)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x184EF820)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CHECKITEMISCALLINGCARDRECURSION_B__116_0_OFFSET UNITYSDK_OFFSET(0x184EFC90)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184EF580)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__DORELEASEMINDSCAPECUTBG_B__112_0_OFFSET UNITYSDK_OFFSET(0x184EFB20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__ONBACKCLICKHANDLE_B__26_0_OFFSET UNITYSDK_OFFSET(0x184EF8B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__PLAYVIEWFADEIN_B__34_0_OFFSET UNITYSDK_OFFSET(0x184EF8D0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__105_0_OFFSET UNITYSDK_OFFSET(0x184EF970)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__105_1_OFFSET UNITYSDK_OFFSET(0x184EFA80)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__105_2_OFFSET UNITYSDK_OFFSET(0x184EFAD0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184EFCA0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x184EFD30)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x184EFE20)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x184EFEB0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x184EFEE0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184EFF70)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x184F0010)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184F0020)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184F00B0)
#define MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184F0140)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeWidgetController_TypeDefinitionIndex = 78678;

	class UIMindscapeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::MoleMole::UIMindscapeWidgetController_EGyroType* StaticGet_GyroType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EGyroType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFD0);
		}
		static ::MoleMole::UIMindscapeWidgetController_ECardClampType* StaticGet_CardClampType()
		{
			return (::MoleMole::UIMindscapeWidgetController_ECardClampType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFD4);
		}
		static ::System::Single* StaticGet_DampRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFD8);
		}
		static ::System::Single* StaticGet_StickMoveThesholdSqr()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFDC);
		}
		static ::System::Single* StaticGet_PCDampRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFE0);
		}
		static ::System::Single* StaticGet_StickMoveTheshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFE4);
		}
		static ::UnityEngine::Vector2* StaticGet_PcDragSpeed()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFE8);
		}
		static ::System::Single* StaticGet_GyroscopeRateY()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFF0);
		}
		static ::System::Single* StaticGet_PcLerpSpeedMax()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFF4);
		}
		static ::System::Single* StaticGet_PcLerpSpeedPower()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFF8);
		}
		static ::MoleMole::UIMindscapeWidgetController_EGyroStickMergeType* StaticGet_GyroStickMergeType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EGyroStickMergeType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0xFFFC);
		}
		static ::System::Boolean* StaticGet_UseOldGyroscope()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10000);
		}
		static ::System::Boolean* StaticGet_IsStickUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10001);
		}
		static ::System::Boolean* StaticGet_IsPcUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10002);
		}
		static ::System::Boolean* StaticGet_IsPcUseDrag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10003);
		}
		static ::MoleMole::UIMindscapeWidgetController_EStickType* StaticGet_StickType()
		{
			return (::MoleMole::UIMindscapeWidgetController_EStickType*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10004);
		}
		static ::System::Single* StaticGet_AccelIgnoreRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10008);
		}
		static ::System::Single* StaticGet_StickMoveRate()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x1000C);
		}
		static ::System::Single* StaticGet_PcLerpSpeedMin()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10010);
		}
		static ::System::Single* StaticGet_GyroscopeSpeed()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10014);
		}
		static ::MoleMole::UIMindscapeWidgetController_EStickState* StaticGet_StickState()
		{
			return (::MoleMole::UIMindscapeWidgetController_EStickState*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10018);
		}
		static ::System::Single* StaticGet_StickToGyroTheshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x1001C);
		}
		static ::System::Single* StaticGet_GyroscopeRateX()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10020);
		}
		static ::System::Boolean* StaticGet_IsGyroscopeUseDamp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10024);
		}
		static ::System::Boolean* StaticGet_IsPcResetWhenMouseUp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeWidgetController_TypeDefinitionIndex)->GetStaticField(0x10025);
		}
		// static const ::System::Int32 BgCacheCount = 0x5; // 0x0
		::Class_2_82E7DB6BA9499BE4_2* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeCutBgController*>* _bgCtrlList; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _bgAssetDir; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIMindscapeSwitchBtnRowWidgetController*>* _switchBtnList; // 0x2D8
		::MoleMole::UIGeneralToggleWidgetController* _lenticularToggle; // 0x2E0
		::System::Boolean _isLenticularToggleOn; // 0x2E8
		::MoleMole::UIMindscapeCutBgController* _currentBgCtrl; // 0x2F0
		::MoleMole::UIRoleChangeWidgetController* _roleChangeWidget; // 0x2F8
		::MoleMole::UIRoleInfoPageContext* _lastContext; // 0x300
		::Class_2_1824EF69C8E376A3* _avatarData; // 0x308
		::System::Boolean _previewMode; // 0x310
		::System::Boolean _friendPreviewMode; // 0x311
		::System::Boolean _isShowLevelRow; // 0x312
		::Il2CppArray<::System::Boolean>* tabState; // 0x318
		::System::Action* _closeAction; // 0x320
		::System::Action* _closeOverAction; // 0x328
		::System::Boolean _isLenticularUnlock; // 0x330
		::System::Int32 itemCheckIndex; // 0x334
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x338
		::System::String* LenticularSwitchAni; // 0x340
		::System::Single clickTime; // 0x348
		::Foundation::Coroutine::CoroutineHandle coroutineHandle; // 0x34C
		::System::Single _gyroscope_X; // 0x350
		::System::Single _gyroscope_Y; // 0x354
		::UnityEngine::Vector2 _curStickVec; // 0x358
		::UnityEngine::Vector2 __curInputVec; // 0x360
		::System::Nullable_1<::UnityEngine::Quaternion> _lastAttitude; // 0x368
		::Class_1_5F780812A1FAD31A* _gyroscopeInputHandler; // 0x380
		::System::Single _currentX; // 0x388
		::System::Single _currentY; // 0x38C
		::System::Boolean _useFollow; // 0x390
		::System::Boolean _isAttitudeReset; // 0x391
		::System::Single _lerpBetweenGyroAndStick; // 0x394
		::UnityEngine::Vector2 _lastGyroWhenStickReset; // 0x398
		::UnityEngine::Vector2 _stickInputVecLerpThreePointZeroPoint; // 0x3A0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _tempVecList; // 0x3A8
		::System::Single _dampRate; // 0x3B0
		::UnityEngine::Vector2 _startMousePos; // 0x3B4
		::UnityEngine::Vector2 _lastMousePos; // 0x3BC
		::UnityEngine::Vector2 _lastMouseVec; // 0x3C4
		::Foundation::Coroutine::CoroutineHandle _tipAniHandle; // 0x3CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSWITCHBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetToggleBtnState(::System::Boolean isOn, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETTOGGLEBTNSTATE_OFFSET))(this, isOn, withAni);
		}

		::System::Void OnBackClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONBACKCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OpenGMLenticular()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_OPENGMLENTICULAR_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean IsTrainingRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ISTRAININGROOM_OFFSET))(this);
		}

		::System::Void PlayViewFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYVIEWFADEIN_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetCloseAction(::System::Action* action, ::System::Action* overAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETCLOSEACTION_OFFSET))(this, action, overAction);
		}

		::UnityEngine::Vector2 get__curInputVec()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GET__CURINPUTVEC_OFFSET))(this);
		}

		::System::Void set__curInputVec(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SET__CURINPUTVEC_OFFSET))(this, value);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ResetAttitudeCurrentVec()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_RESETATTITUDECURRENTVEC_OFFSET))(this);
		}

		::System::Void SetGyroscopeVec(::System::Single x, ::System::Single y, ::System::Boolean useFollow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETGYROSCOPEVEC_OFFSET))(this, x, y, useFollow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLenticular()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_UPDATELENTICULAR_OFFSET))(this);
		}

		::System::Single GetPcLerpSpeed(::System::Single pos)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETPCLERPSPEED_OFFSET))(this, pos);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void RefreshSwitchInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHSWITCHINPUTKEY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnTabClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTABCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void PreSetBgTabState(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PRESETBGTABSTATE_OFFSET))(this, obj);
		}

		::System::Void ChangeTabState(::System::Int32 obj, ::System::Boolean withAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHANGETABSTATE_OFFSET))(this, obj, withAni);
		}

		::System::Void SetLenticularTipAni(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETLENTICULARTIPANI_OFFSET))(this, isShow);
		}

		::System::Void OnAvatarChangeHandle(::Class_1_2CCC5D7984CDCED4* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CCC5D7984CDCED4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONAVATARCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Single PlayMaskFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_PLAYMASKFADEIN_OFFSET))(this);
		}

		::System::String* GetMindscapeCutBgName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETMINDSCAPECUTBGNAME_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isInit);
		}

		::System::Void RefreshBackground()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHBACKGROUND_OFFSET))(this);
		}

		::System::Void SetBgModel(::System::String* bgName, ::System::Action* completeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETBGMODEL_OFFSET))(this, bgName, completeHandle);
		}

		::System::Void DoReleaseMindscapeCutBg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_DORELEASEMINDSCAPECUTBG_OFFSET))(this);
		}

		::System::Int32 GetDefaultSelectIndex(::System::Boolean isInit)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETDEFAULTSELECTINDEX_OFFSET))(this, isInit);
		}

		::System::Void OnTalentUnlockOverHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNLOCKOVERHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnTalentUnockEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONTALENTUNOCKEND_OFFSET))(this);
		}

		::System::Void CheckItemIsCallingCardRecursion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_CHECKITEMISCALLINGCARDRECURSION_OFFSET))(this);
		}

		::System::Void OnGetItemDuringMindscape(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONGETITEMDURINGMINDSCAPE_OFFSET))(this, args);
		}

		::System::Void SetDeaultSwitchTab(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_SETDEAULTSWITCHTAB_OFFSET))(this, isInit);
		}

		::System::Boolean GetLenticularOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETLENTICULAROPEN_OFFSET))(this);
		}

		::System::Boolean GetCanShowLenticular()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_GETCANSHOWLENTICULAR_OFFSET))(this);
		}

		::System::Void RefreshTabState(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHTABSTATE_OFFSET))(this, isInit);
		}

		::System::Void OnLenticularToggleHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONLENTICULARTOGGLEHANDLE_OFFSET))(this);
		}

		::System::Void RefreshLenticularToggleState(::System::Boolean withTabAni, ::System::Boolean withMask, ::System::Boolean isSetTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_REFRESHLENTICULARTOGGLESTATE_OFFSET))(this, withTabAni, withMask, isSetTip);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnBackClickHandle_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__ONBACKCLICKHANDLE_B__26_0_OFFSET))(this);
		}

		::System::Void _PlayViewFadeIn_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__PLAYVIEWFADEIN_B__34_0_OFFSET))(this);
		}

		::System::Void _SetLenticularTipAni_b__105_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__105_0_OFFSET))(this);
		}

		::System::Void _SetLenticularTipAni_b__105_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__105_1_OFFSET))(this);
		}

		::System::Void _SetLenticularTipAni_b__105_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__SETLENTICULARTIPANI_B__105_2_OFFSET))(this);
		}

		::System::Void _DoReleaseMindscapeCutBg_b__112_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__DORELEASEMINDSCAPECUTBG_B__112_0_OFFSET))(this);
		}

		::System::Void _CheckItemIsCallingCardRecursion_b__116_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER__CHECKITEMISCALLINGCARDRECURSION_B__116_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
