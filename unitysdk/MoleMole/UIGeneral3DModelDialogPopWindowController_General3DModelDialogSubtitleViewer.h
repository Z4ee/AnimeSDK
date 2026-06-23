#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneral3DModelDialogPopWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_GENERAL3DMODELDIALOGSUBTITLEVIEWER_HIDE_OFFSET UNITYSDK_OFFSET(0x1764E680)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_GENERAL3DMODELDIALOGSUBTITLEVIEWER_SHOW_OFFSET UNITYSDK_OFFSET(0x1764E400)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_GENERAL3DMODELDIALOGSUBTITLEVIEWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneral3DModelDialogPopWindowController_General3DModelDialogSubtitleViewer_TypeDefinitionIndex = 55944;

	class UIGeneral3DModelDialogPopWindowController_General3DModelDialogSubtitleViewer : public ::System::Object
	{
	public:
		::MoleMole::UIGeneral3DModelDialogPopWindowController* _subtitleCtrl; // 0x10

		::System::Void _ctor(::MoleMole::UIGeneral3DModelDialogPopWindowController* subtitleCtrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneral3DModelDialogPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_GENERAL3DMODELDIALOGSUBTITLEVIEWER__CTOR_OFFSET))(this, subtitleCtrl);
		}

		::System::Void Show(::System::String* subtitleKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_GENERAL3DMODELDIALOGSUBTITLEVIEWER_SHOW_OFFSET))(this, subtitleKey);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_GENERAL3DMODELDIALOGSUBTITLEVIEWER_HIDE_OFFSET))(this);
		}
	};
}
