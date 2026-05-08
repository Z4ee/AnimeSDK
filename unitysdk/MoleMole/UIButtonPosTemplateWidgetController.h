#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0F29C74AC5A8A851;
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x142D94E0)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x142D9210)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142D92A0)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x142D90F0)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_REGISTERONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x142D9390)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_SETICONENABLE_OFFSET UNITYSDK_OFFSET(0x142D9320)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_SETSELECTSTATEINNER_OFFSET UNITYSDK_OFFSET(0x142D9470)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x142D93E0)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x142D9560)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x142D95C0)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x142D9650)
#define MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x142D96E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonPosTemplateWidgetController_TypeDefinitionIndex = 80972;

	class UIButtonPosTemplateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0F29C74AC5A8A851* _view; // 0x2B8
		::System::Action_1<::MoleMole::UIButtonPosTemplateWidgetController*>* _callback; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIconEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_SETICONENABLE_OFFSET))(this, value);
		}

		::System::Void RegisterOnClickCallback(::System::Action_1<::MoleMole::UIButtonPosTemplateWidgetController*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIButtonPosTemplateWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_REGISTERONCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetSelectState(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_SETSELECTSTATE_OFFSET))(this, select);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void SetSelectStateInner(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER_SETSELECTSTATEINNER_OFFSET))(this, select);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSTEMPLATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
