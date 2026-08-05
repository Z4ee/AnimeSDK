#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIBossChallengePageController_LayerInfoData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_1A39E1B51756BF41;
class Class_2_20242022E5DD0FB7_1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_APPLYROWVISUAL_OFFSET UNITYSDK_OFFSET(0x19A8E7E0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLERCORE_OFFSET UNITYSDK_OFFSET(0x19A8E320)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLER_OFFSET UNITYSDK_OFFSET(0x19A8E2C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_DISPOSEVIEW_OFFSET UNITYSDK_OFFSET(0x19A8E560)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GETNORMALROLEICON_OFFSET UNITYSDK_OFFSET(0x19A8F3F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GET_LAYERDATA_OFFSET UNITYSDK_OFFSET(0x19A8E1D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A8E460)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A8E5C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSELECTEDLAYERCHANGED_OFFSET UNITYSDK_OFFSET(0x19A8F550)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A8E4F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A8E1F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x19A8F610)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19A8E6D0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x19A8F500)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SET_LAYERDATA_OFFSET UNITYSDK_OFFSET(0x19A8E1E0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8F6A0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x19A8F6B0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A8F6C0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A8F750)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A8F7F0)
#define MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A8F880)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageRowWidgetController_TypeDefinitionIndex = 78751;

	class UIBossChallengePageRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_20242022E5DD0FB7_1* _view; // 0x2F0
		::MoleMole::UIBossChallengePageController_LayerInfoData _layerData_k__BackingField; // 0x2F8
		::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>* _clickCallback; // 0x300
		::System::Int32 _selectLayerIndex; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBossChallengePageController_LayerInfoData get_layerData()
		{
			return ((::MoleMole::UIBossChallengePageController_LayerInfoData(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GET_LAYERDATA_OFFSET))(this);
		}

		::System::Void set_layerData(::MoleMole::UIBossChallengePageController_LayerInfoData value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SET_LAYERDATA_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindClickHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLER_OFFSET))(this);
		}

		::System::Void BindClickHandlerCore(::Class_2_B4378B46E0020E85* button, ::Class_2_FDFE69FE7B72463B* rowAnim)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B4378B46E0020E85*, ::Class_2_FDFE69FE7B72463B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_BINDCLICKHANDLERCORE_OFFSET))(this, button, rowAnim);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DisposeView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_DISPOSEVIEW_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::ValueTuple_2<::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*> GetNormalRoleIcon(::System::Int32 i)
		{
			return ((::System::ValueTuple_2<::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_GETNORMALROLEICON_OFFSET))(this, i);
		}

		::System::Void ApplyRowVisual(::UnityEngine::UI::Extension::UILocalizationText* titleText, ::Class_2_1A39E1B51756BF41* bossImage, ::System::Int32 roleIconCount, ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*>>* getRoleIcon, ::System::Collections::Generic::IList_1<::Class_2_1A39E1B51756BF41*>* starCollection, ::UnityEngine::UI::Extension::UILocalizationText* score, ::UnityEngine::UI::Extension::UILocalizationText* unScore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_1A39E1B51756BF41*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::ValueTuple_2<::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*>>*, ::System::Collections::Generic::IList_1<::Class_2_1A39E1B51756BF41*>*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_APPLYROWVISUAL_OFFSET))(this, titleText, bossImage, roleIconCount, getRoleIcon, starCollection, score, unScore);
		}

		::System::Void SetClickCallback(::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBossChallengePageRowWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void OnSelectedLayerChanged(::MoleMole::UIBossChallengePageController_LayerInfoData selectedLayerData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBossChallengePageController_LayerInfoData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_ONSELECTEDLAYERCHANGED_OFFSET))(this, selectedLayerData);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
