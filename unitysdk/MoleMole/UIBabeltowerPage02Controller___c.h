#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E64800)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E64840)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_2_OFFSET UNITYSDK_OFFSET(0x17E64850)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_4_OFFSET UNITYSDK_OFFSET(0x17E64860)
#define MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_6_OFFSET UNITYSDK_OFFSET(0x17E64870)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage02Controller___c_TypeDefinitionIndex = 71696;

	class UIBabeltowerPage02Controller___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x37BB0);
		}
		static ::System::Action** StaticGet___9__6_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x37BB8);
		}
		static ::System::Action** StaticGet___9__6_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x37BC0);
		}
		static ::MoleMole::UIBabeltowerPage02Controller___c** StaticGet___9()
		{
			return (::MoleMole::UIBabeltowerPage02Controller___c**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerPage02Controller___c_TypeDefinitionIndex)->GetStaticField(0x37BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_2_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_b__6_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_4_OFFSET))(this);
		}

		::System::Void __OpenBabeltowerFightingInfo_b__6_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE02CONTROLLER___C___OPENBABELTOWERFIGHTINGINFO_B__6_6_OFFSET))(this);
		}
	};
}
