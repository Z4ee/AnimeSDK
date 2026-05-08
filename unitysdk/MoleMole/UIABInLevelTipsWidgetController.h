#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_48D56DACBE4271BC;
class Class_1_F0E4E2848B1D52CE;
class Class_2_7614C15477CEE5F8_1;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x15E649F0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_CHECKSTAGE_OFFSET UNITYSDK_OFFSET(0x15E65D40)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x15E654D0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GET__ISUIACTIVE_OFFSET UNITYSDK_OFFSET(0x15E64680)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GET__ISUIVALID_OFFSET UNITYSDK_OFFSET(0x15E643E0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x15E64D40)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15E66120)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E64820)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E648B0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E64710)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET UNITYSDK_OFFSET(0x15E64F40)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x15E655C0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET UNITYSDK_OFFSET(0x15E65C60)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x15E64BC0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SHOWPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x15E64E80)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_STOPSIZEANIMATION_OFFSET UNITYSDK_OFFSET(0x15E64950)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x15E65920)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x15E65160)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATEPERSISTENTTIPSDISPLAY_OFFSET UNITYSDK_OFFSET(0x15E64C40)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E661E0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__24_0_OFFSET UNITYSDK_OFFSET(0x15E66570)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E665D0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E66660)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E666F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelTipsWidgetController_TypeDefinitionIndex = 72236;

	class UIABInLevelTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MinTipsWidth; // 0x0
		// static const ::System::Single SizeAnimDelayRatio; // 0x0
		// static const ::System::Single SizeAnimDurationRatio; // 0x0
		::Class_2_7614C15477CEE5F8_1* _view; // 0x2B8
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2C0
		::System::Single _duration; // 0x2C8
		::System::Nullable_1<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854> _persistentTipsType; // 0x2CC
		::System::Boolean _isPersistentTipsShowing; // 0x2D4
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2D8
		::UnityEngine::RectTransform* _tipsContent; // 0x2E0
		::DG::Tweening::Tweener* _sizeTween; // 0x2E8
		::Foundation::Coroutine::CoroutineHandle _sizeAnimHandle; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854, ::System::String*>* _tipsTextCache; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isUIValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GET__ISUIVALID_OFFSET))(this);
		}

		::System::Boolean get__isUIActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GET__ISUIACTIVE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::Class_1_F0E4E2848B1D52CE* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void SetPersistentTips(::System::Nullable_1<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854> tipsType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET))(this, tipsType);
		}

		::System::Void UpdatePersistentTipsDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATEPERSISTENTTIPSDISPLAY_OFFSET))(this);
		}

		::System::Void ShowPersistentTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SHOWPERSISTENTTIPS_OFFSET))(this);
		}

		::System::Void HidePersistentTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET))(this);
		}

		::System::String* GetTipsText(::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854 errorType)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GETTIPSTEXT_OFFSET))(this, errorType);
		}

		::System::Void RefreshTips(::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854 errorType, ::System::Boolean isPersistent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET))(this, errorType, isPersistent);
		}

		::System::Void ScheduleAutoHide(::System::Boolean isPersistent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET))(this, isPersistent);
		}

		::System::Void CheckStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_CHECKSTAGE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ResetSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_RESETSIZE_OFFSET))(this);
		}

		::System::Void StopSizeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_STOPSIZEANIMATION_OFFSET))(this);
		}

		::System::Void UpdateContentFadeInAnimation(::System::Boolean resetLayout, ::System::Boolean fromMinSize, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET))(this, resetLayout, fromMinSize, callback);
		}

		::System::Void UpdateContentFadeOutAnimation(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET))(this, callback);
		}

		::System::Void _HidePersistentTips_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__24_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
