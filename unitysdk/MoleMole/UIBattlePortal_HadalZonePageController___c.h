#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_336;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142D0350)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x142D0390)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x142D03A0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_0_OFFSET UNITYSDK_OFFSET(0x142D0430)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_1_OFFSET UNITYSDK_OFFSET(0x142D0480)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex = 66686;

	class UIBattlePortal_HadalZonePageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBattlePortal_HadalZonePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBattlePortal_HadalZonePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EC20);
		}
		static ::System::Action** StaticGet___9__4_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EC28);
		}
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_336*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_336*>**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EC30);
		}
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_336*>** StaticGet___9__11_1()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_336*>**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x2EC38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET))(this);
		}

		::System::Int32 __FetchTypedZones_b__11_0(::Class_1_5DA2E7556103D5A3_336* l, ::Class_1_5DA2E7556103D5A3_336* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_336*, ::Class_1_5DA2E7556103D5A3_336*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_0_OFFSET))(this, l, r);
		}

		::System::Int32 __FetchTypedZones_b__11_1(::Class_1_5DA2E7556103D5A3_336* l, ::Class_1_5DA2E7556103D5A3_336* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_336*, ::Class_1_5DA2E7556103D5A3_336*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_1_OFFSET))(this, l, r);
		}
	};
}
