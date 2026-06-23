#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelLightUpPointsItemControllerBase.h"

class Class_2_7ABF2118692E7A85_21;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET UNITYSDK_OFFSET(0x16BDCF00)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET UNITYSDK_OFFSET(0x16BDCF50)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET UNITYSDK_OFFSET(0x16BDCF40)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET UNITYSDK_OFFSET(0x16BDCFC0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET UNITYSDK_OFFSET(0x16BDCFB0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_MAXANIM_OFFSET UNITYSDK_OFFSET(0x16BDCFF0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET UNITYSDK_OFFSET(0x16BDCF90)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET UNITYSDK_OFFSET(0x16BDCFA0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BDD0D0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BDD160)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BDD000)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BDD060)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDD1E0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16BDD240)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16BDD2D0)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16BDD360)
#define MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16BDD3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelCissiaWidgetController_TypeDefinitionIndex = 76032;

	class UIInLevelCissiaWidgetController : public ::MoleMole::UIInLevelLightUpPointsItemControllerBase
	{
	public:
		::Class_2_7ABF2118692E7A85_21* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::String* get_ItemFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_ITEMFADEIN_OFFSET))(this);
		}

		::System::String* get_ItemLoop()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_ITEMLOOP_OFFSET))(this);
		}

		::System::String* get_ItemFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_ITEMFADEOUT_OFFSET))(this);
		}

		::System::String* get_PointMaxFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_POINTMAXFADEIN_OFFSET))(this);
		}

		::System::String* get_PointMaxFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_POINTMAXFADEOUT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_LightUpGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_LIGHTUPGO_OFFSET))(this);
		}

		::UnityEngine::Animation* get_LightUpAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_LIGHTUPANIM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_MaxAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_GET_MAXANIM_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELCISSIAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
