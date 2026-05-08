#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_B34E92C5DC28291B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1552A1B0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1552A240)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15529FB0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1552A140)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOBYNAME_OFFSET UNITYSDK_OFFSET(0x1552A320)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOINNER_OFFSET UNITYSDK_OFFSET(0x1552A410)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWITCHPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x1552A5B0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWTICHIMG_OFFSET UNITYSDK_OFFSET(0x1552A670)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1552A790)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1552A7F0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1552A880)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1552A910)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1552A9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialVideoPanelWidgetController_TypeDefinitionIndex = 68989;

	class UITutorialVideoPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B34E92C5DC28291B* _view; // 0x2B8
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayVideoByName(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOBYNAME_OFFSET))(this, fileName);
		}

		::System::Void SwitchPlayVideo(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWITCHPLAYVIDEO_OFFSET))(this, fileName);
		}

		::System::Void SwtichImg(::System::String* imgPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWTICHIMG_OFFSET))(this, imgPath);
		}

		::System::Void PlayVideoInner(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOINNER_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
