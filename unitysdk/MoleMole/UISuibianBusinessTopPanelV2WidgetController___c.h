#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16529430)
#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16529470)
#define MOLEMOLE_UISUIBIANBUSINESSTOPPANELV2WIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x16529480)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianBusinessTopPanelV2WidgetController___c_TypeDefinitionIndex = 76120;

	class UISuibianBusinessTopPanelV2WidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianBusinessTopPanelV2WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianBusinessTopPanelV2WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianBusinessTopPanelV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34970);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UISuibianBusinessTopPanelV2WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34978);
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
