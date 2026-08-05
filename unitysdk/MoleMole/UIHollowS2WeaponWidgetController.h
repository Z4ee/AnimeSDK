#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_17FE6C9BAA500062;
class Class_2_AB2EF02AB0EB9012;
class Class_2_F8D0B9C0BCFFDC55_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1AE85D90)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AE860C0)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1AE86870)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE861D0)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE86150)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AE85DA0)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AE86000)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET UNITYSDK_OFFSET(0x1AE86AE0)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x1AE86B30)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE86CF0)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1AE86D00)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1AE86D90)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE86E20)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1AE86EC0)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1AE86F50)
#define MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1AE86FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowS2WeaponWidgetController_TypeDefinitionIndex = 78786;

	class UIHollowS2WeaponWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_17FE6C9BAA500062* _view; // 0x2F0
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x2F8
		::Class_2_F8D0B9C0BCFFDC55_1* _relicData; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshRedPointByData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET))(this, args);
		}

		::System::Void RefreshRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWS2WEAPONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
