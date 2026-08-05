#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_13FA7ABD96D1051D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x15EA6500)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ISALIVE_OFFSET UNITYSDK_OFFSET(0x15EA6660)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EA63F0)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EA6480)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EA6320)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EA6380)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA66C0)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EA6720)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EA67B0)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EA6840)
#define MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EA68D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerShootScoreWidgetController_TypeDefinitionIndex = 46081;

	class UISummerShootScoreWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_13FA7ABD96D1051D* _view; // 0x2C0
		::UnityEngine::Vector3 worldPosition; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 score, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_INIT_OFFSET))(this, score, position);
		}

		::System::Boolean IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER_ISALIVE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
