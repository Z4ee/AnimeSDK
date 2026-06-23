#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16702BA0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16702BE0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__13_0_OFFSET UNITYSDK_OFFSET(0x16702BF0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__13_1_OFFSET UNITYSDK_OFFSET(0x16702C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex = 45815;

	class UIHadalZone_LineupV2_WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37A80);
		}
		static ::MoleMole::UIHadalZone_LineupV2_WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_LineupV2_WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37A88);
		}
		static ::System::Action** StaticGet___9__13_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_LineupV2_WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __UpdateInfo_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__13_0_OFFSET))(this);
		}

		::System::Void __UpdateInfo_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___C___UPDATEINFO_B__13_1_OFFSET))(this);
		}
	};
}
