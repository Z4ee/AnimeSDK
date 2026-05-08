#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1644FE30)
#define MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1644FE70)
#define MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER___C__OPENTEAMPAGE_B__44_3_OFFSET UNITYSDK_OFFSET(0x1644FE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialFightingWidgetController___c_TypeDefinitionIndex = 56362;

	class UIActivityTeamTrialFightingWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityTeamTrialFightingWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityTeamTrialFightingWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTeamTrialFightingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EAE0);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__44_3()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTeamTrialFightingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EAE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenTeamPage_b__44_3(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALFIGHTINGWIDGETCONTROLLER___C__OPENTEAMPAGE_B__44_3_OFFSET))(this, i);
		}
	};
}
