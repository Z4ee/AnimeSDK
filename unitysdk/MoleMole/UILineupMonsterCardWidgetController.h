#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_52BF5A8E97668B1D_8;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x157421E0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15742300)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONMAINBTNPRESS_OFFSET UNITYSDK_OFFSET(0x15742410)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15742390)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15742170)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15742530)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x157424A0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15742570)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x157425D0)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15742660)
#define MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x157426F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupMonsterCardWidgetController_TypeDefinitionIndex = 61744;

	class UILineupMonsterCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_52BF5A8E97668B1D_8* _view; // 0x2C0
		::System::Action_1<::System::Int32>* onBtnClick; // 0x2C8
		::System::Int32 slotId; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMainBtnPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_ONMAINBTNPRESS_OFFSET))(this);
		}

		::System::Void SetData(::System::Int32 inSlotId, ::System::Action_1<::System::Int32>* onClickCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_SETDATA_OFFSET))(this, inSlotId, onClickCallback);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPMONSTERCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
