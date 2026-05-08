#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainCityGuideItemWidgetController___c__DisplayClass14_0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_AF3C04A72D227C5A;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0x1500C620)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOWGUIDE_OFFSET UNITYSDK_OFFSET(0x1500C5F0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1500C600)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_HIDEVIEW_OFFSET UNITYSDK_OFFSET(0x1500CED0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1500C840)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONPARTNERIDCHANGE_OFFSET UNITYSDK_OFFSET(0x1500D3D0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1500C8D0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1500C640)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x1500C950)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SETPARTNERID_OFFSET UNITYSDK_OFFSET(0x1500D360)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0x1500C630)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1500C610)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SHOWVIEW_OFFSET UNITYSDK_OFFSET(0x1500CDA0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x1500CA10)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1500D550)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__HIDEVIEW_B__17_0_OFFSET UNITYSDK_OFFSET(0x1500D5B0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEPOS_14_0_OFFSET UNITYSDK_OFFSET(0x1500CFA0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEROT_14_1_OFFSET UNITYSDK_OFFSET(0x1500D190)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1500D7F0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1500D880)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1500D910)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGuideItemWidgetController_TypeDefinitionIndex = 70058;

	class UIMainCityGuideItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _IsShow_k__BackingField; // 0x2B8
		::UnityEngine::RectTransform* _FullScreenRectTrans_k__BackingField; // 0x2C0
		::Class_2_AF3C04A72D227C5A* _view; // 0x2C8
		::System::Boolean _prvShowGuide; // 0x2D0
		::System::Int32 _partnerID; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOWGUIDE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SET_ISSHOW_OFFSET))(this, value);
		}

		::UnityEngine::RectTransform* get_FullScreenRectTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET))(this);
		}

		::System::Void set_FullScreenRectTrans(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetViewState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET))(this);
		}

		::System::Void Tick(::UnityEngine::Vector3 inputWorldPos, ::System::Boolean showGuide, ::System::Single deltaTime, ::UnityEngine::Camera* overrideCam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET))(this, inputWorldPos, showGuide, deltaTime, overrideCam);
		}

		::System::Void SetPartnerID(::System::Int32 partnerID, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SETPARTNERID_OFFSET))(this, partnerID, force);
		}

		::System::Void ShowView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SHOWVIEW_OFFSET))(this);
		}

		::System::Void HideView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_HIDEVIEW_OFFSET))(this);
		}

		::System::Void OnPartnerIDChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONPARTNERIDCHANGE_OFFSET))(this);
		}

		::System::Void _Tick_g___updatePos_14_0(::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEPOS_14_0_OFFSET))(this, a1);
		}

		::System::Void _Tick_g___updateRot_14_1(::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__TICK_G___UPDATEROT_14_1_OFFSET))(this, a1);
		}

		::System::Void _HideView_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__HIDEVIEW_B__17_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
