#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A9A90)
#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175A9AD0)
#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x175A9AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianBusinessTopPanelV2WidgetController___c_TypeDefinitionIndex = 86335;

	class UISuibianBusinessTopPanelV2WidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianBusinessTopPanelV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36FA0);
		}
		static ::MoleMole::UISuibianBusinessTopPanelV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianBusinessTopPanelV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianBusinessTopPanelV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET))(this);
		}
	};
}
