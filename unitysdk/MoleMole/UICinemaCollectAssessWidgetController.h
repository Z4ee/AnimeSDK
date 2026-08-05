#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_6EF46B4BE03754EE;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19327F50)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19328060)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19327FE0)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19327EF0)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_REFRESHASSESS_OFFSET UNITYSDK_OFFSET(0x19328160)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x193284B0)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x193284C0)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19328550)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x193285F0)
#define MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19328680)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectAssessWidgetController_TypeDefinitionIndex = 46759;

	class UICinemaCollectAssessWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_6EF46B4BE03754EE* _view; // 0x2F0
		::System::Int32 reviewCommnetID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshAssess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER_REFRESHASSESS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTASSESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
