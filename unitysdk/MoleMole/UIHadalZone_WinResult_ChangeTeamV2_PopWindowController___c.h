#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146841F0)
#define MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14684230)
#define MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__ONUIOPEN_B__5_1_OFFSET UNITYSDK_OFFSET(0x14684240)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c_TypeDefinitionIndex = 48410;

	class UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A270);
		}
		static ::MoleMole::UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_WinResult_ChangeTeamV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_WINRESULT_CHANGETEAMV2_POPWINDOWCONTROLLER___C__ONUIOPEN_B__5_1_OFFSET))(this);
		}
	};
}
