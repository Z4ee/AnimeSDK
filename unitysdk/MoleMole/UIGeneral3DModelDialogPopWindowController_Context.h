#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_23;
class Class_2_C2B4B123B5A9B78A;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CUSTOMTIP_OFFSET UNITYSDK_OFFSET(0x149DBF00)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x149DBEE0)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_CUSTOMTIP_OFFSET UNITYSDK_OFFSET(0x149DC100)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x149DBEF0)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYGETCUSTOMTIPFROMTEMPLATE_OFFSET UNITYSDK_OFFSET(0x149DBFF0)
#define MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149DA750)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneral3DModelDialogPopWindowController_Context_TypeDefinitionIndex = 64395;

	class UIGeneral3DModelDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* _customTip; // 0x28
		::Class_0_16E4307DCC419505_23* _template; // 0x30
		::System::Action* callback; // 0x38
		::System::Action_1<::Class_2_C2B4B123B5A9B78A*>* OnRTLoaded; // 0x40
		::System::String* UIFromName; // 0x48
		::System::String* conditionTip; // 0x50
		::System::Boolean IsFemale; // 0x58
		::System::Boolean RotateAroundCenter; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_23* get_template()
		{
			return ((::Class_0_16E4307DCC419505_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_0_16E4307DCC419505_23* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_23*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET))(this, value);
		}

		::System::String* get_customTip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CUSTOMTIP_OFFSET))(this);
		}

		::System::Void set_customTip(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_CUSTOMTIP_OFFSET))(this, value);
		}

		static ::System::Boolean TryGetCustomTipFromTemplate(::Class_0_16E4307DCC419505_23* template_, ::System::String*& customTip)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_23*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERAL3DMODELDIALOGPOPWINDOWCONTROLLER_CONTEXT_TRYGETCUSTOMTIPFROMTEMPLATE_OFFSET))(template_, customTip);
		}
	};
}
