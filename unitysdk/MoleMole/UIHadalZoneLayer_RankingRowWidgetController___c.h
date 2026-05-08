#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152576F0)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15257730)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_0_OFFSET UNITYSDK_OFFSET(0x15257740)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_1_OFFSET UNITYSDK_OFFSET(0x152577D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex = 76686;

	class UIHadalZoneLayer_RankingRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EE20);
		}
		static ::MoleMole::UIHadalZoneLayer_RankingRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZoneLayer_RankingRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EE28);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeInManually_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_0_OFFSET))(this);
		}

		::System::Void _PlayFadeInManually_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_1_OFFSET))(this);
		}
	};
}
