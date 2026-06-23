#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17320900)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLICKRESTARTUI_B__13_0_OFFSET UNITYSDK_OFFSET(0x17320950)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLOSEUIPHOTOMODEEND_B__19_0_OFFSET UNITYSDK_OFFSET(0x17320A10)
#define MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17320940)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex = 54573;

	class UIActivityCameraSettlementPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30990);
		}
		static ::MoleMole::UIActivityCameraSettlementPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityCameraSettlementPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30998);
		}
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCameraSettlementPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x309A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ClickRestartUI_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLICKRESTARTUI_B__13_0_OFFSET))(this);
		}

		::System::Void _CloseUIPhotoModeEnd_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERASETTLEMENTPOPWINDOWCONTROLLER___C__CLOSEUIPHOTOMODEEND_B__19_0_OFFSET))(this);
		}
	};
}
