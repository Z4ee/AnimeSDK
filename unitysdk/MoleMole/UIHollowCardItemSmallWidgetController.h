#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_27;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18365210)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183652A0)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18365140)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183651A0)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18365490)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183657F0)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18365850)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183658E0)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18365970)
#define MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18365A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemSmallWidgetController_TypeDefinitionIndex = 50483;

	class UIHollowCardItemSmallWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_27* _view; // 0x2C0
		::System::String* smallCardKey; // 0x2C8
		::UnityEngine::GameObject* smallCard; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMSMALLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
