#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelLightUpPointsItemControllerBase.h"

class Class_2_7AA01DA713CC33A9;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x17AC4830)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET UNITYSDK_OFFSET(0x17AC4550)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET UNITYSDK_OFFSET(0x17AC45A0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET UNITYSDK_OFFSET(0x17AC4590)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET UNITYSDK_OFFSET(0x17AC4610)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET UNITYSDK_OFFSET(0x17AC4600)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_MAXANIM_OFFSET UNITYSDK_OFFSET(0x17AC4640)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET UNITYSDK_OFFSET(0x17AC45E0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET UNITYSDK_OFFSET(0x17AC45F0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AC4720)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AC47B0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AC4650)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AC46B0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC49C0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_DOREFRESHITEMSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x17AC4A20)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AC4A30)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AC4AC0)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AC4B50)
#define MOLEMOLE_UIINLEVELSUMMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AC4BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSummerWidgetController_TypeDefinitionIndex = 56517;

	class UIInLevelSummerWidgetController : public ::MoleMole::UIInLevelLightUpPointsItemControllerBase
	{
	public:
		::Class_2_7AA01DA713CC33A9* _view; // 0x2D0

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
