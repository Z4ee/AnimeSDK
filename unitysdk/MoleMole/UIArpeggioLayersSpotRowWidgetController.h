#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_7807B2B04302CD7B_2;
class Class_2_8139880E3DA2C2D0;
class Class_2_FBDBD7900F4373E4;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIArpeggioLayersSpotRowWidgetController_ArpeggioLevelLine; }
namespace MoleMole { class UIArpeggioLevelSpotWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_AUTOCLICKINDEX_OFFSET UNITYSDK_OFFSET(0x17E33E90)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETLEVELUNLOCK_OFFSET UNITYSDK_OFFSET(0x15B31B60)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17E342D0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17E34320)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x17E33FB0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x17E33C70)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17E34090)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKA_OFFSET UNITYSDK_OFFSET(0x17E33BC0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKB_OFFSET UNITYSDK_OFFSET(0x17E33DE0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17E34440)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17E343B0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17E338D0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17E34540)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B31BC0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15B31BD0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x15B31C60)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x15B31CF0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15B31D80)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15B31E10)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15B31EB0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B31F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioLayersSpotRowWidgetController_TypeDefinitionIndex = 64576;

	class UIArpeggioLayersSpotRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_FBDBD7900F4373E4* _view; // 0x2F0
		::Class_1_7807B2B04302CD7B_2* _data; // 0x2F8
		::MoleMole::UIArpeggioLayersSpotRowWidgetController_ArpeggioLevelLine* _line2_2; // 0x300
		::Class_2_8139880E3DA2C2D0* _arpeggioModel; // 0x308
		::System::Action_1<::System::Int32>* LevelClickAction; // 0x310
		::MoleMole::UIArpeggioLevelSpotWidgetController* _levelSpotCenterCtrl; // 0x318
		::MoleMole::UIArpeggioLevelSpotWidgetController* _levelSpotLeftCtrl; // 0x320
		::MoleMole::UIArpeggioLevelSpotWidgetController* _levelSpotRightCtrl; // 0x328
		::System::Int32 _selectIndex; // 0x330
		::System::Int32 LastSelectIndex; // 0x334

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnLevelClickA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKA_OFFSET))(this);
		}

		::System::Void OnLevelClickB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLEVELCLICKB_OFFSET))(this);
		}

		::System::Void AutoClickIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_AUTOCLICKINDEX_OFFSET))(this, index);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Int32 GetSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETSELECTINDEX_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Boolean GetLevelUnlock(::System::Int32 levelID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_GETLEVELUNLOCK_OFFSET))(this, levelID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
