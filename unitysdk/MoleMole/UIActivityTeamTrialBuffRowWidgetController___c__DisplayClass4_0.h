#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18946830)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x18946840)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialBuffRowWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 58412;

	class UIActivityTeamTrialBuffRowWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 effectAbilityID; // 0x10
		::System::Int32 conditionAbilityID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::String* _OnScrollItemUpdate_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
