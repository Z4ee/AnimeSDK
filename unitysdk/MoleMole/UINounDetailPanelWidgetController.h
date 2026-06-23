#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UINounDetailPanelWidgetController_HeightState.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_2CD6915EC12D64B9;
class Class_2_FB02BA89E60ECB82;
namespace MoleMole { class MonoGamepadLinkModule; }
namespace MoleMole { class MonoGamepadScrollView; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINounDetailPanelWidgetController_Data; }
namespace MoleMole::UI::LayoutProcessor { class MonoLayoutElementProcessor_SizeRatioHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ACTIVATEGAMEPADMODULES_OFFSET UNITYSDK_OFFSET(0x17881D40)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_CALCULATEANIMSPEED_OFFSET UNITYSDK_OFFSET(0x17880620)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_CLEARALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x17880150)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DEACTIVATEGAMEPADMODULES_OFFSET UNITYSDK_OFFSET(0x1787FB00)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREGAMEPADMODULESFOUND_OFFSET UNITYSDK_OFFSET(0x17881A70)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREHANDLERSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1787F600)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GETDESCTEXT_OFFSET UNITYSDK_OFFSET(0x178819A0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GETSOURCEPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x178814B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CELLLINKMODULE_OFFSET UNITYSDK_OFFSET(0x17881D00)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CELLSCROLLVIEWMODULE_OFFSET UNITYSDK_OFFSET(0x17881D20)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CONTENTRATIOVALUE_OFFSET UNITYSDK_OFFSET(0x17881DD0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__CONTENTANIMHELPER_OFFSET UNITYSDK_OFFSET(0x1787F540)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__FADEANIMHELPER_OFFSET UNITYSDK_OFFSET(0x1787F550)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__ROOTANIMHELPER_OFFSET UNITYSDK_OFFSET(0x1787F530)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1787F4C0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1787F560)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1787F8B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPASYNC_OFFSET UNITYSDK_OFFSET(0x178806C0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPWITHSPEEDASYNC_OFFSET UNITYSDK_OFFSET(0x178813D0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCOLLAPSEBODYASYNC_OFFSET UNITYSDK_OFFSET(0x178804E0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYEXPANDBODYASYNC_OFFSET UNITYSDK_OFFSET(0x17880B50)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEINASYNC_OFFSET UNITYSDK_OFFSET(0x17880FD0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x17881080)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDEHEADERANDDEACTIVATEASYNC_OFFSET UNITYSDK_OFFSET(0x17880DF0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDEHEADERASYNC_OFFSET UNITYSDK_OFFSET(0x17880C90)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYPOPASYNC_OFFSET UNITYSDK_OFFSET(0x17881320)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYPUSHASYNC_OFFSET UNITYSDK_OFFSET(0x17881130)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYSHOWHEADERASYNC_OFFSET UNITYSDK_OFFSET(0x17880D40)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYSHOWHEADERWITHACTIVATEASYNC_OFFSET UNITYSDK_OFFSET(0x17880E90)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1787FC80)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_RESETFORREUSE_OFFSET UNITYSDK_OFFSET(0x1787FF80)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_RESTOREVISUALSTATE_OFFSET UNITYSDK_OFFSET(0x1787FE00)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETCONTENTRATIO_OFFSET UNITYSDK_OFFSET(0x17881F80)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETRATIOY_OFFSET UNITYSDK_OFFSET(0x178801D0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETROOTRATIO_OFFSET UNITYSDK_OFFSET(0x17881FE0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETSTATEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1787FEE0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_UPDATEHEADERICONSTATE_OFFSET UNITYSDK_OFFSET(0x17880360)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17882040)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17882050)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x178820F0)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController_TypeDefinitionIndex = 77760;

	class UINounDetailPanelWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Single BODY_REFERENCE_HEIGHT; // 0x0
		// static const ::System::Single MIN_ANIM_SPEED; // 0x0
		// static const ::System::Single MAX_ANIM_SPEED; // 0x0
		::UnityEngine::Animation* _animation; // 0x2F0
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x2F8
		::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* _rootRatioHandler; // 0x300
		::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* _contentRatioHandler; // 0x308
		::System::Boolean _handlersInitialized; // 0x310
		::Class_1_2CD6915EC12D64B9* _animHelper; // 0x318
		::MoleMole::MonoGamepadLinkModule* _cellLinkModule; // 0x320
		::MoleMole::MonoGamepadScrollView* _cellScrollViewModule; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FB02BA89E60ECB82* get__viewModel()
		{
			return ((::Class_2_FB02BA89E60ECB82*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_1_2CD6915EC12D64B9* get__rootAnimHelper()
		{
			return ((::Class_1_2CD6915EC12D64B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__ROOTANIMHELPER_OFFSET))(this);
		}

		::Class_1_2CD6915EC12D64B9* get__contentAnimHelper()
		{
			return ((::Class_1_2CD6915EC12D64B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__CONTENTANIMHELPER_OFFSET))(this);
		}

		::Class_1_2CD6915EC12D64B9* get__fadeAnimHelper()
		{
			return ((::Class_1_2CD6915EC12D64B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__FADEANIMHELPER_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void EnsureHandlersInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREHANDLERSINITIALIZED_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RestoreVisualState(::MoleMole::UINounDetailPanelWidgetController_Data* d)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_RESTOREVISUALSTATE_OFFSET))(this, d);
		}

		::System::Void RefreshView(::MoleMole::UINounDetailPanelWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void ResetForReuse(::MoleMole::UINounDetailPanelWidgetController_HeightState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_HeightState))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_RESETFORREUSE_OFFSET))(this, state);
		}

		::System::Void SetStateImmediate(::MoleMole::UINounDetailPanelWidgetController_HeightState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_HeightState))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETSTATEIMMEDIATE_OFFSET))(this, state);
		}

		::System::Void UpdateHeaderIconState(::MoleMole::UINounDetailPanelWidgetController_HeightState state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UINounDetailPanelWidgetController_HeightState))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_UPDATEHEADERICONSTATE_OFFSET))(this, state);
		}

		::Cysharp::Threading::Tasks::UniTask PlayCollapseBodyAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCOLLAPSEBODYASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayExpandBodyAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYEXPANDBODYASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayHideHeaderAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDEHEADERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayShowHeaderAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYSHOWHEADERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayHideHeaderAndDeactivateAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDEHEADERANDDEACTIVATEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayShowHeaderWithActivateAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYSHOWHEADERWITHACTIVATEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFadeInAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEINASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFadeOutAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEOUTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayPushAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYPUSHASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayPopAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYPOPASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayClipAsync(::Class_1_2CD6915EC12D64B9* helper, ::System::String* clipName, ::System::Int32 resetDir, ::System::Single speed)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_2CD6915EC12D64B9*, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPASYNC_OFFSET))(this, helper, clipName, resetDir, speed);
		}

		::Cysharp::Threading::Tasks::UniTask PlayClipWithSpeedAsync(::Class_1_2CD6915EC12D64B9* helper, ::System::String* clipName, ::System::Single speed)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_2CD6915EC12D64B9*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPWITHSPEEDASYNC_OFFSET))(this, helper, clipName, speed);
		}

		::System::Void ClearAllAnimations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_CLEARALLANIMATIONS_OFFSET))(this);
		}

		::System::Single CalculateAnimSpeed(::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* handler, ::System::Single referenceHeight)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_CALCULATEANIMSPEED_OFFSET))(this, handler, referenceHeight);
		}

		static ::System::Single GetSourcePreferredHeight(::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* handler, ::System::String*& sourceName)
		{
			return ((::System::Single(*)(::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GETSOURCEPREFERREDHEIGHT_OFFSET))(handler, sourceName);
		}

		::UnityEngine::UI::Extension::UILocalizationText* GetDescText()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GETDESCTEXT_OFFSET))(this);
		}

		::System::Void EnsureGamepadModulesFound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREGAMEPADMODULESFOUND_OFFSET))(this);
		}

		::MoleMole::MonoGamepadLinkModule* get_CellLinkModule()
		{
			return ((::MoleMole::MonoGamepadLinkModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CELLLINKMODULE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadScrollView* get_CellScrollViewModule()
		{
			return ((::MoleMole::MonoGamepadScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CELLSCROLLVIEWMODULE_OFFSET))(this);
		}

		::System::Void ActivateGamepadModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ACTIVATEGAMEPADMODULES_OFFSET))(this);
		}

		::System::Void DeactivateGamepadModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DEACTIVATEGAMEPADMODULES_OFFSET))(this);
		}

		::System::Single get_ContentRatioValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CONTENTRATIOVALUE_OFFSET))(this);
		}

		::System::Void SetContentRatio(::System::Single ratioY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETCONTENTRATIO_OFFSET))(this, ratioY);
		}

		::System::Void SetRootRatio(::System::Single ratioY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETROOTRATIO_OFFSET))(this, ratioY);
		}

		static ::System::Void SetRatioY(::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* handler, ::System::Single ratioY)
		{
			return ((::System::Void(*)(::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETRATIOY_OFFSET))(handler, ratioY);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
