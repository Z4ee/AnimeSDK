#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelLightUpPointsItemControllerBase.h"

class Class_2_7AA01DA713CC33A9_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1571F290)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET UNITYSDK_OFFSET(0x1571EFB0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET UNITYSDK_OFFSET(0x1571F000)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET UNITYSDK_OFFSET(0x1571EFF0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET UNITYSDK_OFFSET(0x1571F070)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET UNITYSDK_OFFSET(0x1571F060)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_MAXANIM_OFFSET UNITYSDK_OFFSET(0x1571F0A0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET UNITYSDK_OFFSET(0x1571F040)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET UNITYSDK_OFFSET(0x1571F050)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1571F180)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1571F210)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1571F0B0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1571F110)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1571F420)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x1571F480)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1571F490)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1571F520)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1571F5B0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1571F640)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSummerWidgetController_TypeDefinitionIndex = 47747;

	class UIInLevelSummerWidgetController : public ::MoleMole::UIInLevelLightUpPointsItemControllerBase
	{
	public:
		::Class_2_7AA01DA713CC33A9_1* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* get_ItemFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET))(this);
		}

		::System::String* get_ItemLoop()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET))(this);
		}

		::System::String* get_ItemFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET))(this);
		}

		::System::String* get_PointMaxFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET))(this);
		}

		::System::String* get_PointMaxFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_LightUpGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET))(this);
		}

		::UnityEngine::Animation* get_LightUpAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_MaxAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_MAXANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void DoRefreshItemShowState(::System::Boolean isLightUp, ::System::Boolean forceRefresh, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_DOREFRESHITEMSHOWSTATE_OFFSET))(this, isLightUp, forceRefresh, ignoreAnimation);
		}

		::System::Void __base_DoRefreshItemShowState(::System::Boolean P0, ::System::Boolean P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_DOREFRESHITEMSHOWSTATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
