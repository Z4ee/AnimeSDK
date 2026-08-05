#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_FBB8E5C056021DB6_2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityHotPotStrategyWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_HASCARD_OFFSET UNITYSDK_OFFSET(0x19759E40)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19759410)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONHOTPOTLEVELSELECT_OFFSET UNITYSDK_OFFSET(0x19759A40)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19759B00)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19759520)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197594A0)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19759250)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19759310)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19759610)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1975A050)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x1975A0B0)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1975A130)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1975A1C0)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1975A250)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1975A2F0)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1975A380)
#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1975A410)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotStrategyWidgetController_TypeDefinitionIndex = 45114;

	class UIActivityHotPotStrategyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FBB8E5C056021DB6_2* _view; // 0x2C0
		::MoleMole::UIActivityHotPotStrategyWidgetController_Data* data; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHotpotLevelSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONHOTPOTLEVELSELECT_OFFSET))(this, args);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIActivityHotPotStrategyWidgetController_Data* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotStrategyWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Boolean HasCard(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_HASCARD_OFFSET))(this, id);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIOpen_b__4_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
