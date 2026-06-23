#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_399;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x173610B0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x173610F0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x17361100)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_0_OFFSET UNITYSDK_OFFSET(0x17361190)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_1_OFFSET UNITYSDK_OFFSET(0x173611E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex = 77133;

	class UIBattlePortal_HadalZonePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x30B50);
		}
		static ::MoleMole::UIBattlePortal_HadalZonePageController___c** StaticGet___9()
		{
			return (::MoleMole::UIBattlePortal_HadalZonePageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x30B58);
		}
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x30B60);
		}
		static ::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>** StaticGet___9__11_1()
		{
			return (::System::Comparison_1<::Class_1_5DA2E7556103D5A3_399*>**)Il2CppClass::FromTypeDefinitionIndex(UIBattlePortal_HadalZonePageController___c_TypeDefinitionIndex)->GetStaticField(0x30B68);
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

		::System::Int32 __FetchTypedZones_b__11_0(::Class_1_5DA2E7556103D5A3_399* l, ::Class_1_5DA2E7556103D5A3_399* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_0_OFFSET))(this, l, r);
		}

		::System::Int32 __FetchTypedZones_b__11_1(::Class_1_5DA2E7556103D5A3_399* l, ::Class_1_5DA2E7556103D5A3_399* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEPAGECONTROLLER___C___FETCHTYPEDZONES_B__11_1_OFFSET))(this, l, r);
		}
	};
}
