#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class UIText; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_UIITEM_INIT_OFFSET UNITYSDK_OFFSET(0x148E41D0)
#define MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_UIITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x148E4370)

namespace MoleMole
{
	inline static constexpr unsigned int UITestNavigationDialogPopWindowController_UiItem_TypeDefinitionIndex = 59867;

	class UITestNavigationDialogPopWindowController_UiItem : public ::System::Object
	{
	public:
		::UnityEngine::UI::UIText* Text; // 0x10
		::UnityEngine::UI::Extension::UIButtonEx* Button; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_UIITEM__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTNAVIGATIONDIALOGPOPWINDOWCONTROLLER_UIITEM_INIT_OFFSET))(this, t);
		}
	};
}
