#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_14B20D29A2FF81FF.h"
#include "unitysdk/Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_48D56DACBE4271BC;
class Class_1_980AD78C3BD5BDE0;
class Class_1_F0E4E2848B1D52CE;
class Class_2_7614C15477CEE5F8;
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_1_OFFSET UNITYSDK_OFFSET(0x191C48F0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x191C4720)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_CHECKSTAGE_OFFSET UNITYSDK_OFFSET(0x191C5B90)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x191C50C0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GET__ISUIACTIVE_OFFSET UNITYSDK_OFFSET(0x191C43A0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_GET__ISUIVALID_OFFSET UNITYSDK_OFFSET(0x191C40F0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_HIDEPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x191C4AA0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x191C5DF0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191C4540)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191C45D0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191C4430)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_REFRESHTIPS_OFFSET UNITYSDK_OFFSET(0x191C4CE0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_RESETSIZE_OFFSET UNITYSDK_OFFSET(0x191C5400)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SCHEDULEAUTOHIDE_OFFSET UNITYSDK_OFFSET(0x191C5AB0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SETPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x191C4940)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SHOWPERSISTENTTIPS_OFFSET UNITYSDK_OFFSET(0x191C4BE0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x191C51B0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_STOPSIZEANIMATION_OFFSET UNITYSDK_OFFSET(0x191C4680)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x191C5760)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATECONTENTFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x191C4D50)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_UPDATEPERSISTENTTIPSDISPLAY_OFFSET UNITYSDK_OFFSET(0x191C4A20)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191C6010)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__27_0_OFFSET UNITYSDK_OFFSET(0x191C65A0)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191C6600)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191C6690)
#define MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191C6720)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelTipsWidgetController_TypeDefinitionIndex = 48129;

	class UIABInLevelTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single MinTipsWidth; // 0x0
		// static const ::System::Single SizeAnimDelayRatio; // 0x0
		// static const ::System::Single SizeAnimDurationRatio; // 0x0
		::Class_2_7614C15477CEE5F8* _view; // 0x2C0
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x2C8
		::Class_1_980AD78C3BD5BDE0* _rabViewModel; // 0x2D0
		::System::Single _duration; // 0x2D8
		::System::Nullable_1<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854> _persistentTipsType; // 0x2DC
		::System::Boolean _isPersistentTipsShowing; // 0x2E4
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2E8
		::UnityEngine::RectTransform* _tipsContent; // 0x2F0
		::DG::Tweening::Tweener* _sizeTween; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle _sizeAnimHandle; // 0x300
		::System::Collections::Generic::Dictionary_2<::Class_1_F0E4E2848B1D52CE_Class_2_3DC4DAE459292E77_Enum_3_014DB994A50FD854, ::System::String*>* _tipsTextCache; // 0x308
		::System::Collections::Generic::Dictionary_2<::Class_1_980AD78C3BD5BDE0_Class_2_582D22303A5D348C_Enum_3_14B20D29A2FF81FF, ::System::String*>* _rabTipsTextCache; // 0x310

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

		::System::Void BindView_1(::Class_1_980AD78C3BD5BDE0* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_980AD78C3BD5BDE0*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_1_OFFSET))(this, viewModel);
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

		::System::Void ShowTips(::System::String* key, ::System::Boolean isPersistent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER_SHOWTIPS_OFFSET))(this, key, isPersistent);
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

		::System::Void _HidePersistentTips_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELTIPSWIDGETCONTROLLER__HIDEPERSISTENTTIPS_B__27_0_OFFSET))(this);
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
