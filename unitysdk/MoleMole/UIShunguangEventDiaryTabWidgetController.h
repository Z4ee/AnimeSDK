#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_3D46C5D064952E16_2;
class Class_2_AF7956DF7F5D0968;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x119E8E80)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x119E8F90)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x119E8F10)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x119E8D30)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x119E9050)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x119E9260)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x119E9270)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x119E9300)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x119E93A0)
#define MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x119E9430)

namespace MoleMole
{
	inline static constexpr unsigned int UIShunguangEventDiaryTabWidgetController_TypeDefinitionIndex = 55930;

	class UIShunguangEventDiaryTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_AF7956DF7F5D0968* _view; // 0x2F0
		::Class_1_3D46C5D064952E16_2* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHUNGUANGEVENTDIARYTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
