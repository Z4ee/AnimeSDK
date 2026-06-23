#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIArcadeMenuSelectRowBaseWidgetController.h"

class Class_1_451601B8BB62C38C_16;
class Class_2_79AE422BA06F6D26_177;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x18A4E5A0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A4E470)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18A4E6B0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A4E500)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER_SETACTIVITYSTATUS_OFFSET UNITYSDK_OFFSET(0x18A4E830)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4E8A0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_INITVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0x18A4E8B0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A4E8C0)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18A4E950)
#define MOLEMOLE_UIARCADEMENUSELECTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A4E960)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuSelectRowWidgetController_TypeDefinitionIndex = 71653;

	class UIArcadeMenuSelectRowWidgetController : public ::MoleMole::UIArcadeMenuSelectRowBaseWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_177* _view; // 0x3A8
		::Class_1_451601B8BB62C38C_16* rowData; // 0x3B0

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
