#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0096754AC2F6E253_19;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D9D680)
#define MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D9D710)
#define MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER_SETCONTEXT_OFFSET UNITYSDK_OFFSET(0x16D9D790)
#define MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9D810)
#define MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D9D870)
#define MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D9D900)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooResultWidgetController_TypeDefinitionIndex = 50444;

	class UIMechBooResultWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0096754AC2F6E253_19* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetContext(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER_SETCONTEXT_OFFSET))(this, value);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOORESULTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
