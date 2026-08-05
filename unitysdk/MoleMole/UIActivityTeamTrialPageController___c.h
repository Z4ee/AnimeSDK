#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173D9640)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173D9680)
#define MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___C__ONCLICKMAINCITY_B__34_0_OFFSET UNITYSDK_OFFSET(0x173D9690)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialPageController___c_TypeDefinitionIndex = 57306;

	class UIActivityTeamTrialPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityTeamTrialPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityTeamTrialPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTeamTrialPageController___c_TypeDefinitionIndex)->GetStaticField(0x44F70);
		}
		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTeamTrialPageController___c_TypeDefinitionIndex)->GetStaticField(0x44F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickMainCity_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALPAGECONTROLLER___C__ONCLICKMAINCITY_B__34_0_OFFSET))(this);
		}
	};
}
