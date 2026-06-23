#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D90F2B37C5861C3F;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiddleTip; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0x16A97700)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A97200)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0x16A97830)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET UNITYSDK_OFFSET(0x16A976B0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET UNITYSDK_OFFSET(0x16A97320)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A97290)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A96F10)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A97190)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x16A973C0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A978E0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A97940)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A979D0)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A97A60)
#define MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A97AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex = 48637;

	class UIGeneralBossSpecialTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Boolean* StaticGet_IsShowing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIGeneralBossSpecialTipsWidgetController_TypeDefinitionIndex)->GetStaticField(0xF320);
		}
		::Class_2_D90F2B37C5861C3F* _view; // 0x2C0
		::MoleMole::UIMiddleTip* _currentTip; // 0x2C8
		::System::Boolean isShow; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnMiddleTipsShow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSSHOW_OFFSET))(this, args);
		}

		::System::Void OnMiddleTipsHide(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONMIDDLETIPSHIDE_OFFSET))(this, args);
		}

		::System::Void OnGivenMiddleTipsHide(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_ONGIVENMIDDLETIPSHIDE_OFFSET))(this, args);
		}

		::System::Void ShowTip(::MoleMole::UIMiddleTip* tips)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiddleTip*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_SHOWTIP_OFFSET))(this, tips);
		}

		::System::Void HideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER_HIDETIP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBOSSSPECIALTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
