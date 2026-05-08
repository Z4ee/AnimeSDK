#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_EEA0111A28582B57;
class Class_2_6AE7655A34E411CC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_CLOSETEXT_OFFSET UNITYSDK_OFFSET(0x14E87C70)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_FADEIN_OFFSET UNITYSDK_OFFSET(0x14E87910)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x14E87A10)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x14E87D20)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x14E872F0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14E872E0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E87360)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E879A0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E87300)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E873F0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x14E87B20)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x14E87670)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x14E87460)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER__CLOSETEXT_B__15_0_OFFSET UNITYSDK_OFFSET(0x14E87D80)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E87D70)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E87E50)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E87EE0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E87EF0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E87F00)

namespace MoleMole
{
	inline static constexpr unsigned int UICompanionTipsChildWindowController_TypeDefinitionIndex = 43793;

	class UICompanionTipsChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_6AE7655A34E411CC* _view; // 0x310
		::Foundation::Coroutine::CoroutineHandle handler; // 0x318
		::UnityEngine::Animation* _ani; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ShowTips(::System::String* textId, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SHOWTIPS_OFFSET))(this, textId, duration);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut(::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_FADEOUT_OFFSET))(this, call);
		}

		::System::Void SetText(::System::String* str, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SETTEXT_OFFSET))(this, str, time);
		}

		::System::Void SetImage(::System::String* imgPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SETIMAGE_OFFSET))(this, imgPath);
		}

		::System::Void CloseText(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_CLOSETEXT_OFFSET))(this, time);
		}

		::Class_1_EEA0111A28582B57* GetView()
		{
			return ((::Class_1_EEA0111A28582B57*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void _CloseText_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER__CLOSETEXT_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
