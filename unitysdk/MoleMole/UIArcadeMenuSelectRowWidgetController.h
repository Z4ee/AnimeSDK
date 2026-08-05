#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIArcadeMenuSelectRowBaseWidgetController.h"

class Class_1_451601B8BB62C38C_17;
class Class_2_79AE422BA06F6D26_231;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x1A628590)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A628460)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6286B0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A6284F0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_SETACTIVITYSTATUS_OFFSET UNITYSDK_OFFSET(0x1A628830)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6288A0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x1A6288B0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A6288C0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1A628950)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A628960)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuSelectRowWidgetController_TypeDefinitionIndex = 75636;

	class UIArcadeMenuSelectRowWidgetController : public ::MoleMole::UIArcadeMenuSelectRowBaseWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_231* _view; // 0x3A8
		::Class_1_451601B8BB62C38C_17* rowData; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitViewControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_INITVIEWCONTROL_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetActivityStatus(::System::Boolean isInActivity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_SETACTIVITYSTATUS_OFFSET))(this, isInActivity);
		}

		::System::Void __base_InitViewControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_INITVIEWCONTROL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
