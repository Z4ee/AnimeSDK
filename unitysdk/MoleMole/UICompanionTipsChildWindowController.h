#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_EEA0111A28582B57;
class Class_2_6AE7655A34E411CC_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_CLOSETEXT_OFFSET UNITYSDK_OFFSET(0x18546A10)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_FADEIN_OFFSET UNITYSDK_OFFSET(0x185466B0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_FADEOUT_OFFSET UNITYSDK_OFFSET(0x185467B0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x18546AC0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x18546090)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18546080)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18546100)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18546740)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x185460A0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18546190)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SETIMAGE_OFFSET UNITYSDK_OFFSET(0x185468C0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x18546410)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x18546200)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER__CLOSETEXT_B__15_0_OFFSET UNITYSDK_OFFSET(0x18546B20)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18546B10)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18546BF0)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18546C80)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18546C90)
#define MOLEMOLE_UICOMPANIONTIPSCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18546CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UICompanionTipsChildWindowController_TypeDefinitionIndex = 84926;

	class UICompanionTipsChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_6AE7655A34E411CC_1* _view; // 0x318
		::Foundation::Coroutine::CoroutineHandle handler; // 0x320
		::UnityEngine::Animation* _ani; // 0x328

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
