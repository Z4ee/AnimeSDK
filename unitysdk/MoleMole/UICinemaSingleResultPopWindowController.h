#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_E2714210413A69CA.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_0E3D561C72111316;
class Class_2_DFFF3BABB3177590;
namespace MoleMole { class UICinemaSingleResultContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E6FAE0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITDATALINES_OFFSET UNITYSDK_OFFSET(0x15E70890)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15E70F20)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITMOVEIMG_OFFSET UNITYSDK_OFFSET(0x15E70700)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITUI_OFFSET UNITYSDK_OFFSET(0x15E6FD90)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x15E703E0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONCLICKRESTART_OFFSET UNITYSDK_OFFSET(0x15E71240)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E702D0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E70360)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E70480)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E6FAF0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E6FCB0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E712B0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER__ONCLICKCLOSE_B__16_0_OFFSET UNITYSDK_OFFSET(0x15E712C0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E713C0)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E71450)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E71480)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E71490)
#define MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E714A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleResultPopWindowController_TypeDefinitionIndex = 85759;

	class UICinemaSingleResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* _NORMAL_BUBBLE_TEXTMAPKEY; // 0x0
		// static const ::System::String* _CLEAR_ALL_BUBBLE_TEXTMAPKEY; // 0x0
		// static const ::System::String* _MULTI_CLICK_BUBBLE_TEXTMAPKEY; // 0x0
		// static const ::System::String* _MAX_COMBO_TEXTMAPKEY; // 0x0
		::Class_2_DFFF3BABB3177590* _view; // 0x318
		::Class_2_0E3D561C72111316* _singlePlayController; // 0x320
		::System::Int32 _currScore; // 0x328
		::System::Int32 _currMaxCount; // 0x32C
		::Foundation::AssetRequestHandle _handler; // 0x330
		::Enum_3_E2714210413A69CA _currLevel; // 0x350
		::System::Int32 _normalBubbleCount; // 0x354
		::System::Boolean _hasMultiClickBubble; // 0x358
		::System::Int32 _multiClickBubbleCount; // 0x35C
		::System::Boolean _hasClearAllBubble; // 0x360
		::System::Int32 _clearAllBubbleCount; // 0x364

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitUI(::MoleMole::UICinemaSingleResultContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaSingleResultContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITUI_OFFSET))(this, context);
		}

		::System::Void InitMoveImg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITMOVEIMG_OFFSET))(this);
		}

		::System::Void InitDescription(::System::Int32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITDESCRIPTION_OFFSET))(this, levelID);
		}

		::System::Void InitDataLines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_INITDATALINES_OFFSET))(this);
		}

		::System::Void OnClickClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONCLICKCLOSE_OFFSET))(this);
		}

		::System::Void OnClickRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER_ONCLICKRESTART_OFFSET))(this);
		}

		::System::Void _OnClickClose_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER__ONCLICKCLOSE_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLERESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
