#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DAC360)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAC3A0)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_0_OFFSET UNITYSDK_OFFSET(0x17DAC3B0)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_1_OFFSET UNITYSDK_OFFSET(0x17DAC440)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex = 44724;

	class UIHadalZoneLayer_RankingRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E00);
		}
		static ::MoleMole::UIHadalZoneLayer_RankingRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZoneLayer_RankingRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E08);
		}
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E10);
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
