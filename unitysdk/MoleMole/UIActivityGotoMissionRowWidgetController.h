#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_90A61AE005F824B1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_DOACCESSJUMP_OFFSET UNITYSDK_OFFSET(0x191E7A80)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x191E76C0)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191E74D0)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x191E75E0)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191E7560)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191E7470)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_SETACCESSID_OFFSET UNITYSDK_OFFSET(0x191E7890)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_SETGOMISSIONTESTANDACTION_OFFSET UNITYSDK_OFFSET(0x191E7710)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191E7B20)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191E7B30)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x191E7BC0)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191E7C60)
#define MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191E7CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGotoMissionRowWidgetController_TypeDefinitionIndex = 55878;

	class UIActivityGotoMissionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_90A61AE005F824B1* _view; // 0x2F0
		::System::Int32 accessID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::Class_2_90A61AE005F824B1* GetView()
		{
			return ((::Class_2_90A61AE005F824B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetGoMissionTestAndAction(::System::String* textKey, ::UnityEngine::Events::UnityAction* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_SETGOMISSIONTESTANDACTION_OFFSET))(this, textKey, clickAction);
		}

		::System::Void SetAccessID(::System::Int32 newAccessID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_SETACCESSID_OFFSET))(this, newAccessID);
		}

		::System::Void DoAccessJump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER_DOACCESSJUMP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOTOMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
