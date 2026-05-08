#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UINounDetailPanelWidgetController_HeightState.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_2CD6915EC12D64B9;
class Class_1_B7B85DA22395B9DE;
class Class_2_ABACF17F99AFF6E4;
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

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ACTIVATEGAMEPADMODULES_OFFSET UNITYSDK_OFFSET(0x16119750)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_CLEARALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x161181C0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_DEACTIVATEGAMEPADMODULES_OFFSET UNITYSDK_OFFSET(0x16117E00)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREGAMEPADMODULESFOUND_OFFSET UNITYSDK_OFFSET(0x16119480)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREHANDLERSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x161171C0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GETDESCTEXT_OFFSET UNITYSDK_OFFSET(0x161193B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_ALPHA_OFFSET UNITYSDK_OFFSET(0x161197E0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CELLLINKMODULE_OFFSET UNITYSDK_OFFSET(0x16119710)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CELLSCROLLVIEWMODULE_OFFSET UNITYSDK_OFFSET(0x16119730)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_CONTENTRATIOVALUE_OFFSET UNITYSDK_OFFSET(0x16119970)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x161170B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16117120)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16117BB0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYAPPEARASYNC_OFFSET UNITYSDK_OFFSET(0x16118B80)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYAPPEAR_OFFSET UNITYSDK_OFFSET(0x161191B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPASYNC_OFFSET UNITYSDK_OFFSET(0x161186C0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPFIREANDFORGET_OFFSET UNITYSDK_OFFSET(0x16118DE0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCOLLAPSEASYNC_OFFSET UNITYSDK_OFFSET(0x16118620)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCOLLAPSE_OFFSET UNITYSDK_OFFSET(0x16118D60)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYEXPANDASYNC_OFFSET UNITYSDK_OFFSET(0x16118A40)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYEXPAND_OFFSET UNITYSDK_OFFSET(0x161190B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEINASYNC_OFFSET UNITYSDK_OFFSET(0x16118C20)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x16119230)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x16118CC0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x161192B0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDEASYNC_OFFSET UNITYSDK_OFFSET(0x16118AE0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDE_OFFSET UNITYSDK_OFFSET(0x16119130)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYSHOW_OFFSET UNITYSDK_OFFSET(0x16119330)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16117F80)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_RESETFORREUSE_OFFSET UNITYSDK_OFFSET(0x16118100)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x161182F0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETCLIPLAYER_OFFSET UNITYSDK_OFFSET(0x16117B20)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETCONTENTRATIO_OFFSET UNITYSDK_OFFSET(0x16119B20)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETRATIOY_OFFSET UNITYSDK_OFFSET(0x16118490)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETROOTRATIO_OFFSET UNITYSDK_OFFSET(0x16119B80)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETSTATEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x16118220)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16119BE0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16119BF0)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16119C90)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController_TypeDefinitionIndex = 82393;

	class UINounDetailPanelWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::UnityEngine::Animation* _animation; // 0x2E8
		::UnityEngine::CanvasGroup* _canvasGroup; // 0x2F0
		::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* _rootRatioHandler; // 0x2F8
		::MoleMole::UI::LayoutProcessor::MonoLayoutElementProcessor_SizeRatioHandler* _contentRatioHandler; // 0x300
		::System::Boolean _handlersInitialized; // 0x308
		::Class_1_B7B85DA22395B9DE* _animHelperList; // 0x310
		::Class_1_2CD6915EC12D64B9* _rootAnimHelper; // 0x318
		::Class_1_2CD6915EC12D64B9* _contentAnimHelper; // 0x320
		::Class_1_2CD6915EC12D64B9* _fadeAnimHelper; // 0x328
		::MoleMole::MonoGamepadLinkModule* _cellLinkModule; // 0x330
		::MoleMole::MonoGamepadScrollView* _cellScrollViewModule; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_ABACF17F99AFF6E4* get__viewModel()
		{
			return ((::Class_2_ABACF17F99AFF6E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void EnsureHandlersInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ENSUREHANDLERSINITIALIZED_OFFSET))(this);
		}

		::System::Void SetClipLayer(::System::String* clipName, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETCLIPLAYER_OFFSET))(this, clipName, layer);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
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

		::Cysharp::Threading::Tasks::UniTask PlayCollapseAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCOLLAPSEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayExpandAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYEXPANDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayHideAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayAppearAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYAPPEARASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFadeInAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEINASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFadeOutAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEOUTASYNC_OFFSET))(this);
		}

		::System::Single PlayCollapse()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCOLLAPSE_OFFSET))(this);
		}

		::System::Single PlayExpand()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYEXPAND_OFFSET))(this);
		}

		::System::Single PlayHide()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYHIDE_OFFSET))(this);
		}

		::System::Single PlayAppear()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYAPPEAR_OFFSET))(this);
		}

		::System::Single PlayFadeIn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEIN_OFFSET))(this);
		}

		::System::Single PlayFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this);
		}

		::System::Single PlayShow()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYSHOW_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayClipAsync(::Class_1_2CD6915EC12D64B9* helper, ::System::String* clipName, ::System::Int32 resetDir)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_1_2CD6915EC12D64B9*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPASYNC_OFFSET))(this, helper, clipName, resetDir);
		}

		::System::Single PlayClipFireAndForget(::Class_1_2CD6915EC12D64B9* helper, ::System::String* clipName, ::System::Int32 resetDir)
		{
			return ((::System::Single(*)(::PVOID, ::Class_1_2CD6915EC12D64B9*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_PLAYCLIPFIREANDFORGET_OFFSET))(this, helper, clipName, resetDir);
		}

		::System::Void ClearAllAnimations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_CLEARALLANIMATIONS_OFFSET))(this);
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

		::System::Single get_Alpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_GET_ALPHA_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER_SETALPHA_OFFSET))(this, alpha);
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
