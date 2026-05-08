#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALPLAYEREXPBTNWIDGETCONTROLLER___C__DISPLAYCLASS4_0__BINDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x149E33C0)
#define MOLEMOLE_UIGENERALPLAYEREXPBTNWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149E33B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPlayerExpBtnWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 61195;

	class UIGeneralPlayerExpBtnWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPLAYEREXPBTNWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPLAYEREXPBTNWIDGETCONTROLLER___C__DISPLAYCLASS4_0__BINDCALLBACK_B__0_OFFSET))(this);
		}
	};
}
