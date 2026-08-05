#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_C5CEA8DD589BD643_1;
class Class_2_E17D44E1D4CD83D1_2;
namespace MoleMole { class PhotoTaskRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15173C10)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15173E00)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15173CA0)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15173D80)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15173BB0)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_SETSHOWBG_OFFSET UNITYSDK_OFFSET(0x151740B0)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_SHOWRECORD_OFFSET UNITYSDK_OFFSET(0x15173F40)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15174120)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15174130)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x151741C0)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15174260)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15174300)
#define MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15174390)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoTaskRowWidgetController_TypeDefinitionIndex = 69134;

	class UIPhotoTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_E17D44E1D4CD83D1_2* _view; // 0x2F0
		::MoleMole::PhotoTaskRowContext* _context; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowRecord(::Class_1_C5CEA8DD589BD643_1* record)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C5CEA8DD589BD643_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_SHOWRECORD_OFFSET))(this, record);
		}

		::System::Void SetShowBG(::System::Boolean isShowBG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER_SETSHOWBG_OFFSET))(this, isShowBG);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
