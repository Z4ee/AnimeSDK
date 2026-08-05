#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaPanelWidget.h"

class Class_2_1A39E1B51756BF41;
class Class_2_5AA0454A6F10A0DC_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }

#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BCA1D0)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BC9E00)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BCA260)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BC9D30)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BC9D90)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17BC9EF0)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_SETUPLOADROLEIMAGE_OFFSET UNITYSDK_OFFSET(0x17BCA2E0)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCA340)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BCA3A0)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17BCA430)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BCA4D0)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BCA560)
#define MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BCA5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaAvatarPanelWidgetController_TypeDefinitionIndex = 62335;

	class UIGachaAvatarPanelWidgetController : public ::MoleMole::UIGachaPanelWidget
	{
	public:
		::Class_2_5AA0454A6F10A0DC_1* _view; // 0x2C0
		::MoleMole::UIGachaWidgetContextBase* _context; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		static ::System::Void SetupLoadRoleImage(::Class_2_1A39E1B51756BF41* image, ::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER_SETUPLOADROLEIMAGE_OFFSET))(image, avatarID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
