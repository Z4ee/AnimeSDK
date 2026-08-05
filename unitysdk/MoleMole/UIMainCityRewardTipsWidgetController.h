#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_75FB4A09078427E5_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189C3A10)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x189C3B80)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189C3D00)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189C39B0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189C3B10)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYFRAMETEXTURE_OFFSET UNITYSDK_OFFSET(0x189C4250)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEIN_OFFSET UNITYSDK_OFFSET(0x189C4380)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEOUT_OFFSET UNITYSDK_OFFSET(0x189C46E0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHCHANGE_OFFSET UNITYSDK_OFFSET(0x189C42D0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x189C3EA0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189C49C0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189C4A20)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x189C4AB0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189C4AC0)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189C4B50)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189C4BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsWidgetController_TypeDefinitionIndex = 80699;

	class UIMainCityRewardTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x2C0
		::Class_2_75FB4A09078427E5_1* _view; // 0x2C8
		::Foundation::Coroutine::CoroutineHandle fadeOutHandle; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle fadeInHandle; // 0x2D4
		::UnityEngine::RectTransform* rectTransform; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_0D6706375CDAAE8C* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemdata);
		}

		::System::Void RefreshChange(::Class_1_0D6706375CDAAE8C* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_REFRESHCHANGE_OFFSET))(this, itemdata);
		}

		::System::Void PlayRewardFadeIn(::System::Single delay, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEIN_OFFSET))(this, delay, animSpeed);
		}

		::System::Void PlayRewardFadeOut(::System::Action* fadeOutCallback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYREWARDFADEOUT_OFFSET))(this, fadeOutCallback, animSpeed);
		}

		::System::Void PlayFrameTexture(::System::String* textureKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER_PLAYFRAMETEXTURE_OFFSET))(this, textureKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
