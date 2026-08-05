#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_1_E9529ED64113E4E9;
class Class_2_375FCCC2051C88BC;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B25FF60)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONDETAILBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1B2607E0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B260310)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1B260770)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B25FFF0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B25FCA0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B25FEF0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_PLAYVIDEOFROMSTART_OFFSET UNITYSDK_OFFSET(0x1B2600D0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B260D10)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER__ONDETAILBTNCLICK_B__12_0_OFFSET UNITYSDK_OFFSET(0x1B260D70)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B260DE0)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1B260E70)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1B260F00)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B260F90)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B261020)
#define MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B2610B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoWidgetController_TypeDefinitionIndex = 50922;

	class UIActivityVideoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_375FCCC2051C88BC* _view; // 0x2C0
		::System::String* _videoPath; // 0x2C8
		::Class_1_D375C91CCE5D3999* _activityBaseData; // 0x2D0
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* _savedHintKeys; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayVideoFromStart(::Class_1_D375C91CCE5D3999* activityBaseData, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_PLAYVIDEOFROMSTART_OFFSET))(this, activityBaseData, videoPath);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnDetailBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER_ONDETAILBTNCLICK_OFFSET))(this);
		}

		::System::Void _OnDetailBtnClick_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER__ONDETAILBTNCLICK_B__12_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
