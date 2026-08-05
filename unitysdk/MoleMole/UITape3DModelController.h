#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5FEF075951689BA4;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainStoryPageController; }
namespace MoleMole { class UITapesConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER_COLOR_OFFSET UNITYSDK_OFFSET(0x1513A1C0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_DONTSHOW_OFFSET UNITYSDK_OFFSET(0x15139710)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_EASINGSLIDE_OFFSET UNITYSDK_OFFSET(0x15139D00)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_FIRSTBOOKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15137E40)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_FLIP_OFFSET UNITYSDK_OFFSET(0x15137480)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_BASEROTATION_OFFSET UNITYSDK_OFFSET(0x15134FF0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15135270)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CURANIMCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x15135030)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMLENGTH_OFFSET UNITYSDK_OFFSET(0x151350F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x15135010)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXL_OFFSET UNITYSDK_OFFSET(0x15134FB0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXR_OFFSET UNITYSDK_OFFSET(0x15134FD0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15134F90)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISDONTSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x15135250)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISEASING_OFFSET UNITYSDK_OFFSET(0x151351F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x15135230)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x15135210)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISTAPELOCKED_OFFSET UNITYSDK_OFFSET(0x15135180)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_MAINPAGE_OFFSET UNITYSDK_OFFSET(0x15135330)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_VHSTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x15134F70)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ISPLAYINGFLIPANIM_OFFSET UNITYSDK_OFFSET(0x15138220)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151353F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15135540)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151355D0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15135480)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x151354F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_PUSHBOOKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15137FD0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15135EB0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_1_OFFSET UNITYSDK_OFFSET(0x15137690)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_OFFSET UNITYSDK_OFFSET(0x15138120)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SCALE_OFFSET UNITYSDK_OFFSET(0x151370F0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SETDEFAULTROT_OFFSET UNITYSDK_OFFSET(0x15137D40)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SETLOCKVIEW_OFFSET UNITYSDK_OFFSET(0x15135670)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_BASEROTATION_OFFSET UNITYSDK_OFFSET(0x15135000)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x151352D0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_FLIPANIMNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x15135020)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXL_OFFSET UNITYSDK_OFFSET(0x15134FC0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXR_OFFSET UNITYSDK_OFFSET(0x15134FE0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15134FA0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISDONTSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x15135260)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISEASING_OFFSET UNITYSDK_OFFSET(0x15135200)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWINGANIM_OFFSET UNITYSDK_OFFSET(0x15135240)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWING_OFFSET UNITYSDK_OFFSET(0x15135220)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_MAINPAGE_OFFSET UNITYSDK_OFFSET(0x15135390)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_VHSTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x15134F80)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SHOWTAPE_OFFSET UNITYSDK_OFFSET(0x15138290)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SKIPSHOWANIM_OFFSET UNITYSDK_OFFSET(0x15138590)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SLIDE_OFFSET UNITYSDK_OFFSET(0x15139990)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_SYNCLOCALROTATIONANDSCALEFROMSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x151364A0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x15136200)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x151385E0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1513A350)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1513A2C0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1513A5E0)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1513A670)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1513A730)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1513A740)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1513A750)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController_TypeDefinitionIndex = 63853;

	class UITape3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::MoleMole::UIMainStoryPageController** StaticGet__MainPage_k__BackingField()
		{
			return (::MoleMole::UIMainStoryPageController**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8B0);
		}
		static ::System::String** StaticGet_kBornAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8B8);
		}
		static ::MoleMole::UITapesConfig** StaticGet__Config_k__BackingField()
		{
			return (::MoleMole::UITapesConfig**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8C0);
		}
		static ::UnityEngine::Texture2D** StaticGet__coverLockTextureBack()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8C8);
		}
		static ::UnityEngine::Texture2D** StaticGet__coverLockTextureFront1()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8D0);
		}
		static ::System::String** StaticGet_kShowAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8D8);
		}
		static ::UnityEngine::Texture2D** StaticGet__coverLockTextureSide()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8E0);
		}
		static ::UnityEngine::Texture2D** StaticGet__coverLockTextureFront2()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8E8);
		}
		static ::System::String** StaticGet_kDontShowAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8F0);
		}
		static ::System::String** StaticGet_kFlipAnim()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A8F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>** StaticGet_kAnimClipLengthDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0x3A900);
		}
		static ::System::Int32* StaticGet_CoverMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0xDD30);
		}
		static ::System::Single* StaticGet_ShowAnimStretchDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UITape3DModelController_TypeDefinitionIndex)->GetStaticField(0xDD34);
		}
		// static const ::System::String* kCoverLockFront1; // 0x0
		// static const ::System::String* kCoverLockBack; // 0x0
		// static const ::System::String* kCoverLockSide; // 0x0
		// static const ::System::String* kCoverLockFront2; // 0x0
		::System::Int32 _VhsTemplateID_k__BackingField; // 0x360
		::System::Boolean isTest; // 0x364
		::System::Int32 _Index_k__BackingField; // 0x368
		::System::Int32 _IndexL_k__BackingField; // 0x36C
		::System::Int32 _IndexR_k__BackingField; // 0x370
		::UnityEngine::Quaternion _BaseRotation_k__BackingField; // 0x374
		::System::Single _FlipAnimNormalizedTime_k__BackingField; // 0x384
		::System::Boolean _IsEasing_k__BackingField; // 0x388
		::System::Boolean _IsShowing_k__BackingField; // 0x389
		::System::Boolean _IsShowingAnim_k__BackingField; // 0x38A
		::System::Boolean _IsDontShowingAnim_k__BackingField; // 0x38B
		::System::Boolean isPlayedFlipSound; // 0x38C
		::Class_2_5FEF075951689BA4* _view; // 0x390
		::System::Boolean _fixShowPosition; // 0x398
		::System::Boolean _fixBackPosition; // 0x399
		::UnityEngine::Vector3 _beforeShowPosition; // 0x39C
		::System::Single _showAnimProtectNormalizedTime; // 0x3A8
		::DG::Tweening::Tween* _easingHandler; // 0x3B0
		::UnityEngine::Vector3 _showAnimPositionOffset; // 0x3B8
		::System::Single _showAnimDuration; // 0x3C4
		::System::Single _showAnimNormalizedTime; // 0x3C8
		::System::Single _dontShowAnimDuration; // 0x3CC
		::System::Single _dontShowAnimNormalizedTime; // 0x3D0
		::System::Boolean _isFbShowPerformance; // 0x3D4
		::System::Single _fbShowPerformanceDuration; // 0x3D8
		::System::Single _fbShowPerformanceTimer; // 0x3DC
		::System::Boolean _isPushBookShowPerformance; // 0x3E0
		::System::Single _pushBookShowPerformanceDuration; // 0x3E4
		::System::Single _pushBookShowPerformanceTimer; // 0x3E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_VhsTemplateID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_VHSTEMPLATEID_OFFSET))(this);
		}

		::System::Void set_VhsTemplateID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_VHSTEMPLATEID_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEX_OFFSET))(this, value);
		}

		::System::Int32 get_IndexL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXL_OFFSET))(this);
		}

		::System::Void set_IndexL(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXL_OFFSET))(this, value);
		}

		::System::Int32 get_IndexR()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_INDEXR_OFFSET))(this);
		}

		::System::Void set_IndexR(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_INDEXR_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_BaseRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_BASEROTATION_OFFSET))(this);
		}

		::System::Void set_BaseRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_BASEROTATION_OFFSET))(this, value);
		}

		::System::Single get_FlipAnimNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void set_FlipAnimNormalizedTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_FLIPANIMNORMALIZEDTIME_OFFSET))(this, value);
		}

		::System::Single get_CurAnimClipLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CURANIMCLIPLENGTH_OFFSET))(this);
		}

		::System::Single get_FlipAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_FLIPANIMLENGTH_OFFSET))(this);
		}

		::System::Boolean get_IsTapeLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISTAPELOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsEasing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISEASING_OFFSET))(this);
		}

		::System::Void set_IsEasing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISEASING_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWING_OFFSET))(this);
		}

		::System::Void set_IsShowing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWING_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowingAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISSHOWINGANIM_OFFSET))(this);
		}

		::System::Void set_IsShowingAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISSHOWINGANIM_OFFSET))(this, value);
		}

		::System::Boolean get_IsDontShowingAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_ISDONTSHOWINGANIM_OFFSET))(this);
		}

		::System::Void set_IsDontShowingAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_ISDONTSHOWINGANIM_OFFSET))(this, value);
		}

		static ::MoleMole::UITapesConfig* get_Config()
		{
			return ((::MoleMole::UITapesConfig*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_CONFIG_OFFSET))();
		}

		static ::System::Void set_Config(::MoleMole::UITapesConfig* value)
		{
			return ((::System::Void(*)(::MoleMole::UITapesConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_CONFIG_OFFSET))(value);
		}

		static ::MoleMole::UIMainStoryPageController* get_MainPage()
		{
			return ((::MoleMole::UIMainStoryPageController*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_GET_MAINPAGE_OFFSET))();
		}

		static ::System::Void set_MainPage(::MoleMole::UIMainStoryPageController* value)
		{
			return ((::System::Void(*)(::MoleMole::UIMainStoryPageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SET_MAINPAGE_OFFSET))(value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetLockView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SETLOCKVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void Translate(::UnityEngine::Vector3 tarPosition, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Action* onTick, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_TRANSLATE_OFFSET))(this, tarPosition, duration, curve, onTick, onComplete);
		}

		::System::Void SyncLocalRotationAndScaleFromScrollView(::System::Single normalizedPosition, ::UnityEngine::AnimationCurve* flipAnimCurve, ::UnityEngine::Vector3 kDefaultTapeRotation, ::System::Single fieldNormalized, ::System::Single dist)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SYNCLOCALROTATIONANDSCALEFROMSCROLLVIEW_OFFSET))(this, normalizedPosition, flipAnimCurve, kDefaultTapeRotation, fieldNormalized, dist);
		}

		::System::Void SetDefaultRot(::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SETDEFAULTROT_OFFSET))(this, rot);
		}

		::System::Void FirstBookPerformance(::System::Single scale, ::System::Single duration, ::System::Single scaleDelayTime, ::UnityEngine::AnimationCurve* animCurve, ::UnityEngine::AnimationCurve* scaleCurve, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_FIRSTBOOKPERFORMANCE_OFFSET))(this, scale, duration, scaleDelayTime, animCurve, scaleCurve, onDone);
		}

		::System::Void PushBookPerformance(::System::Single scale, ::System::Single duration, ::System::Single scaleDelayTime, ::UnityEngine::AnimationCurve* scaleCurve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_PUSHBOOKPERFORMANCE_OFFSET))(this, scale, duration, scaleDelayTime, scaleCurve);
		}

		::System::Void Flip(::System::Single normalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_FLIP_OFFSET))(this, normalizedTime);
		}

		::System::Void Scale(::System::Single scale, ::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SCALE_OFFSET))(this, scale, duration, curve);
		}

		::System::Void Rotate(::UnityEngine::Quaternion baseQuaternion, ::System::Boolean local, ::UnityEngine::Vector3 tarAngle, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_OFFSET))(this, baseQuaternion, local, tarAngle, duration, curve, onComplete);
		}

		::System::Void Rotate_1(::UnityEngine::Quaternion baseQuaternion, ::System::Boolean local, ::System::Single tarAngleX, ::System::Single tarAngleY, ::System::Single tarAngleZ, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ROTATE_1_OFFSET))(this, baseQuaternion, local, tarAngleX, tarAngleY, tarAngleZ, duration, curve, onComplete);
		}

		::System::Boolean IsPlayingFlipAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_ISPLAYINGFLIPANIM_OFFSET))(this);
		}

		::System::Void ShowTape(::UnityEngine::Vector3 positionOffset, ::System::Single protectNormalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SHOWTAPE_OFFSET))(this, positionOffset, protectNormalizedTime);
		}

		::System::Void SkipShowAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SKIPSHOWANIM_OFFSET))(this);
		}

		::System::Void DontShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_DONTSHOW_OFFSET))(this);
		}

		::UnityEngine::Vector3 Slide(::UnityEngine::Vector2 worldPointDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_SLIDE_OFFSET))(this, worldPointDelta);
		}

		::System::Void EasingSlide(::UnityEngine::Vector2 worldPointDelta, ::System::Single duration, ::UnityEngine::AnimationCurve* easingCurve, ::System::Action_1<::MoleMole::UITape3DModelController*>* onEasing, ::System::Action* onEasingComplete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action_1<::MoleMole::UITape3DModelController*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_EASINGSLIDE_OFFSET))(this, worldPointDelta, duration, easingCurve, onEasing, onEasingComplete);
		}

		::System::Void Color(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_COLOR_OFFSET))(this, c);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
