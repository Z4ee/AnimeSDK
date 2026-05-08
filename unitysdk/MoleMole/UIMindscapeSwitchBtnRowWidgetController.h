#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_BB9188D18E53A5DA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148DFC40)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONTABCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x148DFB40)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148E05B0)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148DFA10)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x148DFBD0)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETAVATARCOLOR_OFFSET UNITYSDK_OFFSET(0x148E0070)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETAVATARID_OFFSET UNITYSDK_OFFSET(0x148DFD70)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x148DFCD0)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETTABINDEX_OFFSET UNITYSDK_OFFSET(0x148DFD20)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETTABSTATE_OFFSET UNITYSDK_OFFSET(0x148E02B0)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x148E0630)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x148E0690)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x148E0720)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x148E07B0)
#define MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x148E0840)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeSwitchBtnRowWidgetController_TypeDefinitionIndex = 58198;

	class UIMindscapeSwitchBtnRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BB9188D18E53A5DA* _view; // 0x2B8
		::System::Action_1<::System::Int32>* _clickHandle; // 0x2C0
		::System::Int32 _tabIndex; // 0x2C8
		::System::Boolean isNowOpen; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnTabClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONTABCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetClickHandle(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETCLICKHANDLE_OFFSET))(this, action);
		}

		::System::Void SetTabIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETTABINDEX_OFFSET))(this, index);
		}

		::System::Void SetAvatarID(::System::UInt64 avatarID, ::System::Boolean _previewMode, ::System::Boolean _friendPreviewMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETAVATARID_OFFSET))(this, avatarID, _previewMode, _friendPreviewMode);
		}

		::System::Void SetAvatarColor(::UnityEngine::Color c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETAVATARCOLOR_OFFSET))(this, c);
		}

		::System::Void SetTabState(::System::Boolean isUnlock, ::System::Boolean isOpen, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_SETTABSTATE_OFFSET))(this, isUnlock, isOpen, isInit);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPESWITCHBTNROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
