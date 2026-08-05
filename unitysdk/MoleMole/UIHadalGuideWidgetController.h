#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_468A4FBF2E9F527C;
class Class_2_6D0C9CAFA8F74571;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalTabRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_GET_ACTIVEMEMORYBATTLETABROW_OFFSET UNITYSDK_OFFSET(0x18ECCA50)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18ECCE80)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18ECCC80)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECCF10)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ECCAB0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ECCC10)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_SETHADALGUIDEWIDGET_OFFSET UNITYSDK_OFFSET(0x18ECCF90)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_TRYPLAYHARDUNLOCKCONTENTANIM_OFFSET UNITYSDK_OFFSET(0x18ECD3C0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECD500)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18ECD560)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18ECD5F0)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECD690)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ECD720)
#define MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ECD7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalGuideWidgetController_TypeDefinitionIndex = 50068;

	class UIHadalGuideWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6D0C9CAFA8F74571* _view; // 0x2C0
		::MoleMole::UIHadalTabRowWidgetController* HadalTabRow; // 0x2C8
		::MoleMole::UIHadalTabRowWidgetController* MemoryBattleTabRow; // 0x2D0
		::MoleMole::UIHadalTabRowWidgetController* MemoryBattleHardTabRow; // 0x2D8
		::System::Boolean _isHardTabActive; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIHadalTabRowWidgetController* get_ActiveMemoryBattleTabRow()
		{
			return ((::MoleMole::UIHadalTabRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_GET_ACTIVEMEMORYBATTLETABROW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetHadalGuideWidget(::System::Action_1<::Class_1_D375C91CCE5D3999*>* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_D375C91CCE5D3999*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_SETHADALGUIDEWIDGET_OFFSET))(this, clickAction);
		}

		::System::Void TryPlayHardUnlockContentAnim(::Class_2_468A4FBF2E9F527C* hadalModel)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_468A4FBF2E9F527C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER_TRYPLAYHARDUNLOCKCONTENTANIM_OFFSET))(this, hadalModel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALGUIDEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
