#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1696D810)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1696D850)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_0_OFFSET UNITYSDK_OFFSET(0x1696D860)
#define MOLEMOLE_UIHADALZONELAYER_RANKINGROWWIDGETCONTROLLER___C__PLAYFADEINMANUALLY_B__11_1_OFFSET UNITYSDK_OFFSET(0x1696D8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex = 39663;

	class UIHadalZoneLayer_RankingRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30D30);
		}
		static ::MoleMole::UIHadalZoneLayer_RankingRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHadalZoneLayer_RankingRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30D38);
		}
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZoneLayer_RankingRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30D40);
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
