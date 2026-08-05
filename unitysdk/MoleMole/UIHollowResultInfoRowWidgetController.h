#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_94911C7709AE6562_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHollowResultPageController_MissionRow; }
namespace System { class Object; }

#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17C01CD0)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17C01DE0)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17C01D60)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17C01C70)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x17C01EA0)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17C04020)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17C04030)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17C040C0)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17C04160)
#define MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17C041F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultInfoRowWidgetController_TypeDefinitionIndex = 56900;

	class UIHollowResultInfoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_94911C7709AE6562_3* _view; // 0x2F0
		::MoleMole::UIHollowResultPageController_MissionRow* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetData(::MoleMole::UIHollowResultPageController_MissionRow* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowResultPageController_MissionRow*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
